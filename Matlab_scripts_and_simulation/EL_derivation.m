 clear all;
 syms g t;
 syms theta1 theta2 theta3 theta4 theta5 theta6;
 syms q1(t) q2(t) q3(t) q4(t) q5(t) q6(t);
 syms q1_dot q2_dot q3_dot q4_dot q5_dot q6_dot;
 syms q1_d(t) q2_d(t) q3_d(t) q4_d(t) q5_d(t) q6_d(t);
 syms q1_dd q2_dd q3_dd q4_dd q5_dd q6_dd;
 %syms l1 l2 l3 l4 l5 l6;
 %syms m1 m2 m3 m4 m5 m6;
 
 %the dimensions of the joint
 W_1 = 0.0925; D_1 = 0.057; H_1 = D_1; motor1_mass = 0.212; Housing_mass1 = 0.06;
 W_2 = 0.0925; D_2 = 0.042; H_2 = D_2; motor2_mass = 0.205; Housing_mass2 = 0.06;
 W_3 = 0.054; D_3 = 0.042; H_3 = D_2; motor6_mass = 0.0665; Housing_mass6 = 0.03;
 %two types of motors
 motor_type1 = struct('Width', W_1, 'Depth', D_1, 'Height', H_1, 'Motor_Mass', motor1_mass, "Housing_Mass", Housing_mass1);
 motor_type2 = struct('Width', W_2, 'Depth', D_2, 'Height', H_2, 'Motor_Mass', motor2_mass, "Housing_Mass", Housing_mass2);
 motor_type3 = struct('Width', W_3, 'Depth', D_3, 'Height', H_3, 'Motor_Mass', motor6_mass, "Housing_Mass", Housing_mass6);
 %total joint mass = motor mass + housing mass
 m1_Tmass = (motor_type1.Motor_Mass+motor_type1.Housing_Mass);
 m2_Tmass = (motor_type2.Motor_Mass+motor_type2.Housing_Mass);
 m3_Tmass = (motor_type3.Motor_Mass+motor_type3.Housing_Mass);

 mass = zeros(6,1);
 mass_link = zeros(5,1);
 %arm lengths and joint masses
 l1 = W_1 + 0.1; l2 = 0.3; l3 = 0.15; l4 = 0.02; l5 = 0.3; l6 = 0.15;
 link_mass_m = 0.022/0.05;
 link_1 = struct('l', l1, 'mass', 0.0665);
 link_2 = struct('l', l2, 'mass', 0.2345);
 link_3 = struct('l', 0.15+l3+l4, 'mass', 0.2015);
 link_4 = struct('l', l5-0.15-motor_type2.Width/2, 'mass', 0.0665);
 link_5 = struct('l', l6 - motor_type3.Width/2, 'mass', 0.105);
 
 mass(1) = m1_Tmass; mass(2) = m1_Tmass; mass(3) = m1_Tmass; mass(4) = m2_Tmass; mass(5) = m2_Tmass; mass(6) = m3_Tmass;
 mass_link(1) = link_1.mass; mass_link(2) = link_2.mass; mass_link(3) = link_3.mass; mass_link(4) = link_4.mass; mass_link(5) = link_5.mass;
 k = [0;0;1];
 k0 = [0;0;1];
 O0 = [0;0;l1];
 i0 = [1;0;0];
 i = i0;
 j0 = [0;1;0];
 j = j0;
 theta = ([theta1, theta2, theta3, theta4, theta5, theta6]);
 q_dot = [q1_dot; q2_dot; q3_dot; q4_dot; q5_dot; q6_dot];
 alpha = ([-pi/2, pi, pi/2, pi/2, -pi/2, 0]);
 di = [0, 0, -l3, l5, 0, l6];
 ai = [0, l2, l4, 0, 0, 0];
 J = sym(zeros(6,1));
 c_m = sym(zeros(3,1,6));
 c_l = sym(zeros(3,1,5));
 origin = sym(zeros(3,1,7));
 
 %% transformation matrix
 [T1, C01] = DH_homog(theta(1), di(1), ai(1), alpha(1));
 [T2, C12] = DH_homog(theta(2), di(2), ai(2), alpha(2));
 [T3, C23] = DH_homog(theta(3) + pi/2, di(3), ai(3), alpha(3));
 [T4, C34] = DH_homog(theta(4), di(4), ai(4), alpha(4));
 [T5, C45] = DH_homog(theta(5), di(5), ai(5), alpha(5));
 [T6, C56] = DH_homog(theta(6), di(6), ai(6), alpha(6));
 C0 = eye(3); C1 = C0*C01; C2 = C1*C12;
 C3 = C2*C23; C4 = C3*C34; C5 = C4*C45;
 C05 = sym(zeros(3,3,5));
 C50 = sym(zeros(3,3,5));
 
 C05(:,:,1) = C01;
 C05(:,:,2) = C12;
 C05(:,:,3) = C23;
 C05(:,:,4) = C34;
 C05(:,:,5) = C45;
 
 [T1, C10] = DH_homog(-theta(1), -di(1), -ai(1), -alpha(1));
 [T2, C21] = DH_homog(-theta(2), -di(2), -ai(2), -alpha(2));
 [T3, C32] = DH_homog(-(theta(3) + pi/2), -di(3), -ai(3), -alpha(3));
 [T4, C43] = DH_homog(-theta(4), -di(4), -ai(4), -alpha(4));
 [T5, C54] = DH_homog(-theta(5), -di(5), -ai(5), -alpha(5));
 [T6, C65] = DH_homog(-theta(6), -di(6), -ai(6), -alpha(6));
 C5_reverse = C54*C43*C32*C21*C10;
 C50(:,:,1) = C10;
 C50(:,:,2) = C21;
 C50(:,:,3) = C32;
 C50(:,:,4) = C43;
 C50(:,:,5) = C54;
 %% getting all the i j k vectors at different frames
 k1 = C1*k0;
 k2 = C2*k0;
 k3 = C3*k0;
 k4 = C4*k0;
 k5 = C5*k0;
 
 i1 = C1*i0;
 i2 = C2*i0;
 i3 = C3*i0;
 i4 = C4*i0;
 i5 = C5*i0;
 
 j1 = C1*j0;
 j2 = C2*j0;
 j3 = C3*j0;
 j4 = C4*j0;
 j5 = C5*j0;
 
 %% getting jacobians
 [Ti_1, J_1] = fork_oj(theta(1), di(1), ai(1), alpha(1));
 [Ti_2, J_2] = fork_oj(theta(1:2), di(1:2), ai(1:2), alpha(1:2));
 [Ti_3, J_3] = fork_oj(theta(1:3), di(1:3), ai(1:3), alpha(1:3));
 [Ti_4, J_4] = fork_oj(theta(1:4), di(1:4), ai(1:4), alpha(1:4));
 [Ti_5, J_5] = fork_oj(theta(1:5), di(1:5), ai(1:5), alpha(1:5));
 [Ti_6, J_6] = fork_oj(theta, di, ai, alpha);
 Jacobians = sym(zeros(6,6,6));
 Jacobians (:,1,1) = J_1;
 Jacobians (:,1:2,2) = J_2;
 Jacobians (:,1:3,3) = J_3;
 Jacobians (:,1:4,4) = J_4;
 Jacobians (:,1:5,5) = J_5;
 Jacobians (:,1:6,6) = J_6;
 
%% Origins
O1 = O0;
O2 = O1 + C1*expm(theta2*get_cross(k))*ai(2)*i;
O3 = O2 + C2*expm(theta3*get_cross(k))*(di(3)*k + ai(3)*j);
O4 = O3 + C3*expm(theta4*get_cross(k))*di(4)*k;
O5 = O4;
O6 = O5 + C5*expm(theta6*get_cross(k))*di(6)*k;
origin(:,:,1) = O0; origin(:,:,2) = O1; origin(:,:,3) = O2; origin(:,:,4) = O3; origin(:,:,5) = O4; origin(:,:,6) = O5; origin(:,:,7) = O6;
%% Coordinates of centre of gravities
%for links
c0 = [0;0;(l1 - motor_type1.Height)/2 + motor_type1.Height]; 
c1 = O1 + motor_type1.Width/2*k1 + l2/2*i1; 
c2 = O2 + (l5/2)*i2; c3 = O3 + (l5/3.0)*k3; 
c4 = O4 - link_4.l/2*j4; c5 = O5 + link_5.l/2*k5; %not sure if these are correct
c_l(:,:,1) = c0; c_l(:,:,2) = c1; c_l(:,:,3) = c2; c_l(:,:,4) = c3; c_l(:,:,5) = c4;

%will be changed later
c0 = [0;0;l1/3]; c1 = O1; c2 = O2 - (l3/2.0)*k2; c3 = O3 + (l5/3.0)*k3; c4 = O4; c5 = O5 + (l6*2/3.0)*k5; %not sure if these are correct
c_m(:,:,1) = c0; c_m(:,:,2) = c1; c_m(:,:,3) = c2; c_m(:,:,4) = c3; c_m(:,:,5) = c4; c_m(:,:,6) = c5; 

%% Inertia tensor wrt to each origin

%inertia tensors for each centre of mass of joints
%joints:
Ic = sym(zeros(3,3,6));
Ic(:,:,1) = [m1_Tmass/3.0*(3*(c0(2)^2+c0(3)^2)+(motor_type1.Width^2+motor_type1.Height^2)/4.0), 0, 0; 0, m1_Tmass/3.0*(3*(c0(1)^2+c0(3)^2)+(motor_type1.Width^2+motor_type1.Depth^2)/4.0), 0;0, 0, m1_Tmass/3.0*(3*(c0(1)^2+c0(2)^2)+(motor_type1.Height^2+motor_type1.Depth^2)/4.0)];
Ic(:,:,2) = [m1_Tmass/3.0*(3*(c1(2)^2+c1(3)^2)+(motor_type1.Width^2+motor_type1.Height^2)/4.0), 0, 0; 0, m1_Tmass/3.0*(3*(c1(1)^2+c1(3)^2)+(motor_type1.Width^2+motor_type1.Depth^2)/4.0), 0;0, 0, m1_Tmass/3.0*(3*(c1(1)^2+c1(2)^2)+(motor_type1.Height^2+motor_type1.Depth^2)/4.0)];
Ic(:,:,3) = [m1_Tmass/3.0*(3*(c2(2)^2+c2(3)^2)+(motor_type1.Width^2+motor_type1.Height^2)/4.0), 0, 0; 0, m1_Tmass/3.0*(3*(c2(1)^2+c2(3)^2)+(motor_type1.Width^2+motor_type1.Depth^2)/4.0), 0;0, 0, m1_Tmass/3.0*(3*(c2(1)^2+c2(2)^2)+(motor_type1.Height^2+motor_type1.Depth^2)/4.0)];
Ic(:,:,4) = [m2_Tmass/3.0*(3*(c3(2)^2+c3(3)^2)+(motor_type2.Width^2+motor_type2.Height^2)/4.0), 0, 0; 0, m2_Tmass/3.0*(3*(c3(1)^2+c3(3)^2)+(motor_type2.Width^2+motor_type2.Depth^2)/4.0), 0;0, 0, m2_Tmass/3.0*(3*(c3(1)^2+c3(2)^2)+(motor_type2.Height^2+motor_type2.Depth^2)/4.0)];
Ic(:,:,5) = [m2_Tmass/3.0*(3*(c4(2)^2+c4(3)^2)+(motor_type2.Width^2+motor_type2.Height^2)/4.0), 0, 0; 0, m2_Tmass/3.0*(3*(c4(1)^2+c4(3)^2)+(motor_type2.Width^2+motor_type2.Depth^2)/4.0), 0;0, 0, m2_Tmass/3.0*(3*(c4(1)^2+c4(2)^2)+(motor_type2.Height^2+motor_type2.Depth^2)/4.0)];
Ic(:,:,6) = [m3_Tmass/3.0*(3*(c5(2)^2+c5(3)^2)+(motor_type3.Width^2+motor_type3.Height^2)/4.0), 0, 0; 0, m3_Tmass/3.0*(3*(c5(1)^2+c5(3)^2)+(motor_type3.Width^2+motor_type3.Depth^2)/4.0), 0;0, 0, m3_Tmass/3.0*(3*(c5(1)^2+c5(2)^2)+(motor_type3.Height^2+motor_type3.Depth^2)/4.0)];


%inertia tensors for each origin: putting it to principle vectors (rotaional) wrt current origin and then use Huygens-Steiner Formula for "translations"
invCx = zeros(3,3);
Io_joint = sym(zeros(3,3,6));
Io_total = sym(zeros(3,3,6));
count = 0;
%I am assuming one doesn't need to account for arm inertia for the current
%joint
%wrt origin 0:#############################################################
Ico = sym(zeros(3,3,6)); 
Cx = C10;
for j = 2:5 %inversing C5 is a problem
    %invCx = inv(Cx);
    Ico(:,:,j) = Cx*Ic(:,:,j)*Cx.';
    Cx = C50(:,:,j)*Cx;
end
Ico(:,:,6) = C5_reverse*Ic(:,:,j)*C5_reverse.';
%Using Huygens-Steiner Formula
for i = 2:6
    Io_joint(:,:,i) = Ico(:,:,i) - mass(i).*((get_cross(c_m(:,:,i)-O0))^2);
end

%add all the converted tensors
for i = 1:6
   Io_total(:,:,1) = (Io_total(:,:,1) + Io_joint(:,:,i));
end
count = count + 1;
%wrt origin 1:#############################################################
Ico = sym(zeros(3,3,6)); 
Ico(:,:,1) = C01*Ico(:,:,1)*C01.';
Cx = C21;
for j = 3:5
    Ico(:,:,j) = Cx*Ic(:,:,j)*Cx.';
    Cx = C50(:,:,j)*Cx;
end

%Using Huygens-Steiner Formula
Io_joint(:,:,1) = Ico(:,:,1) - mass(1).*((get_cross(c_m(:,:,1)-O1))^2);
for i = 3:6
    Io_joint(:,:,i) = Ico(:,:,i) - mass(i).*((get_cross(c_m(:,:,i)-O1))^2);
end

%add all the converted tensors
for i = 1:6
   Io_total(:,:,2) = (Io_total(:,:,2) + Io_joint(:,:,i));
end
count = count + 1;
%wrt origin 2:#############################################################

Ico = sym(zeros(3,3,6)); 
%forwarding part
C_for = C12;
for i = count:-1:1
    Ico(:,:,i) = C_for*Ico(:,:,i)*C_for.';
    if (i > 1)
        C_for = C05(:,:,i - 1) * C_for;
    end
    %Ico(:,:,1) = C2*Ico(:,:,1)*C2';
end
%inversing part
Cx = C32;
for j = 4:5
    Ico(:,:,j) = Cx*Ic(:,:,j)*Cx.';
    Cx = C50(:,:,j)*Cx;
end

%Using Huygens-Steiner Formula
%forwarding part
C_for = C12;
for i = count:-1:1
    Io_joint(:,:,i) = Ico(:,:,i) - mass(i).*((get_cross(c_m(:,:,i)-O2))^2);
end

%inversing part
for i = 4:6
    Io_joint(:,:,i) = Ico(:,:,i) - mass(i).*((get_cross(c_m(:,:,i)-O2))^2);
end

%add all the converted tensors
for i = 1:6
   Io_total(:,:,3) = (Io_total(:,:,3) + Io_joint(:,:,i));
end
count = count + 1;

%wrt origin 3:#############################################################
Ico = sym(zeros(3,3,6)); 
%forwarding part
C_for = C05(:,:,count);
for i = count:-1:1
    Ico(:,:,i) = C_for*Ico(:,:,i)*C_for.';
    if (i > 1)
        C_for = C05(:,:,i - 1) * C_for;
    end
    %Ico(:,:,1) = C2*Ico(:,:,1)*C2';
end
%inversing part
Cx = C43;
for j = (count + 2):5
    Ico(:,:,j) = Cx*Ic(:,:,j)*Cx.';
    Cx = C50(:,:,j)*Cx;
end

%Using Huygens-Steiner Formula
%forwarding part
C_for = C05(:,:,count);
for i = count:-1:1
    Io_joint(:,:,i) = Ico(:,:,i) - mass(i).*((get_cross(c_m(:,:,i)-O3))^2);
end

%inversing part
for i = (count + 2):6
    Io_joint(:,:,i) = Ico(:,:,i) - mass(i).*((get_cross(c_m(:,:,i)-O3))^2);
end

%add all the converted tensors
for i = 1:6
   Io_total(:,:,count+1) = (Io_total(:,:,count+1) + Io_joint(:,:,i));
end
count = count + 1;

%wrt origin 4:#############################################################
Ico = sym(zeros(3,3,6)); 
%forwarding part
C_for = C05(:,:,count);
for i = count:-1:1
    Ico(:,:,i) = C_for*Ico(:,:,i)*C_for.';
    if (i > 1)
        C_for = C05(:,:,i - 1) * C_for;
    end
    %Ico(:,:,1) = C2*Ico(:,:,1)*C2.';
end
%inversing part
Cx = C54;
for j = (count + 2):5
    Ico(:,:,j) = Cx*Ic(:,:,j)*Cx.';
    Cx = C50(:,:,j)*Cx;
end

%Using Huygens-Steiner Formula
%forwarding part
C_for = C05(:,:,count);
for i = count:-1:1
    Io_joint(:,:,i) = Ico(:,:,i) - mass(i).*((get_cross(c_m(:,:,i)-O4))^2);
end

%inversing part
for i = (count + 2):6
    Io_joint(:,:,i) = Ico(:,:,i) - mass(i).*((get_cross(c_m(:,:,i)-O4))^2);
end

%add all the converted tensors
for i = 1:6
   Io_total(:,:,count+1) = (Io_total(:,:,count+1) + Io_joint(:,:,i));
end
count = count + 1;

%wrt origin 5:#############################################################
Ico = sym(zeros(3,3,6)); 
%forwarding part
C_for = C05(:,:,count);
for i = count:-1:1
    Ico(:,:,i) = C_for*Ico(:,:,i)*C_for.';
    if (i > 1)
        C_for = C05(:,:,i - 1) * C_for;
    end
    %Ico(:,:,1) = C2*Ico(:,:,1)*C2.';
end
% no inversing part

%Using Huygens-Steiner Formula
%forwarding part
C_for = C05(:,:,count);
for i = count:-1:1
    Io_joint(:,:,i) = Ico(:,:,i) - mass(i).*((get_cross(c_m(:,:,i)-O4))^2);
end

%no inversing part

%add all the converted tensors
for i = 1:6
   Io_total(:,:,count+1) = (Io_total(:,:,count+1) + Io_joint(:,:,i));
end
count = count + 1;


%% Get inertia matrix D(q) = sum(Mi.* Jiv.' * Jiv + Jiw.' * Io * Jiw)
D_q = sym(zeros(6,6));
for i = 1:6
    D_q = D_q + mass(i) .* ((Jacobians(1:3,:,i)).' * Jacobians(1:3,:,i)) + (Jacobians(4:6,:,i)).' * Io_total(:,:,i) * Jacobians(4:6,:,i);
end
%D_q = simplify(D_q); %trying to simplify
%% Getting the kinetic energy

K = 1/2 .* (q_dot.' * D_q * q_dot);

%% Getting the potential energy V = sum(g.' * Rci (coordinate of centre of gravity) * mi)
% not completed, need to think about g
g_v = [0;0;g];
V = 0;
for i = 2:6
    if i > 2 
        V = V + (g * c_m(3,:,i)) * mass(i);
    end
    if i < 6
       V = V + (g * c_l(3,:,i)) * mass_link(i); 
    end
end

%% Get lagrangian and the taus: L = K-V, Tau = d(dL/dq_dot)/dt - dL/dq
L = K - V;

dL_dqd = sym(zeros(6,1));
dL_dq = sym(zeros(6,1));
for i = 1:6
    dL_dqd(i) = diff(L,q_dot(i));
    dL_dq(i) = diff(L,theta(i));
end
dL_dqd = subs(dL_dqd, [q1_dot q2_dot q3_dot q4_dot q5_dot q6_dot], [q1_d(t) q2_d(t) q3_d(t) q4_d(t) q5_d(t) q6_d(t)]);
dL_dqd = subs(dL_dqd, [theta1 theta2 theta3 theta4 theta5 theta6], [q1(t) q2(t) q3(t) q4(t) q5(t) q6(t)]);

%derivative wrt angles


%get time derivative and sub them so that it is easier to do
dL_dq_dt = diff(dL_dqd, t);
dL_dq_dt = subs(dL_dq_dt, [q1_d(t) q2_d(t) q3_d(t) q4_d(t) q5_d(t) q6_d(t)], [q1_dot q2_dot q3_dot q4_dot q5_dot q6_dot]);
dL_dq_dt = subs(dL_dq_dt, [q1(t) q2(t) q3(t) q4(t) q5(t) q6(t)], [theta1 theta2 theta3 theta4 theta5 theta6]);
%sub all time derivatives with our notations
dL_dq_dt = subs(dL_dq_dt, [diff(q1(t),t) diff(q2(t),t) diff(q3(t),t) diff(q4(t),t) diff(q5(t),t) diff(q6(t),t)], [q1_dot q2_dot q3_dot q4_dot q5_dot q6_dot]);
dL_dq_dt = subs(dL_dq_dt, [diff(q1_d(t),t) diff(q2_d(t),t) diff(q3_d(t),t) diff(q4_d(t),t) diff(q5_d(t),t) diff(q6(t),t)], [q1_dd q2_dd q3_dd q4_dd q5_dd q6_dd]);

%getting the tau
Tau = dL_dq_dt - dL_dq;
temp_Tau = Tau;

%to get C(q, q_dot) matrix, first get rid of all the irrelevent terms
delete_dd = subs(temp_Tau, [q1_dd q2_dd q3_dd q4_dd q5_dd q6_dd], [0 0 0 0 0 0]);
delete_dd_g = subs(delete_dd, g, 0);

%get all the coefficient of each tau_i and get rid of ones that doesn.'t
%have qi_dot
C_q = sym(zeros(6,1));
for i = 1:6
    [variable,coefficient] = coeffs(delete_dd_g(i), q_dot(i));
    temp_diff = diff(coefficient, q_dot(i));
    for j = 1:length(temp_diff)
        if (temp_diff(j) ~= 0)
            C_q(i) = C_q(i) + coefficient(j)*variable(j);
        end
    end
end
%C_q = simplify(C_q); %trying to simplify
%% Getting G(q) 
%delete_qd = subs(delete_dd, [q1_dot q2_dot q3_dot q4_dot q5_dot q6_dot], [0 0 0 0 0 0]);
G_q = sym(zeros(6,1));
for i = 1:6
    [variable,coefficient] = coeffs(temp_Tau(i), g);
    temp_diff = diff(coefficient, g);
    for j = 1:length(temp_diff)
        if (temp_diff(j) ~= 0)
            G_q(i) = G_q(i) + coefficient(j)*variable(j);
        end
    end
end
%G_q = simplify(G_q); %trying to simplify
%% generating matlabfunctions
%D_collect = collect(D_q);
Dqfcn = matlabFunction(D_q);
%C_collect = collect(C_q);
Cqfcn = matlabFunction(C_q);
%G_collect = collect(G_q);
Gqfcn = matlabFunction(G_q);











