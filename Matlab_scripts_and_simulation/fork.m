function [Ti_end, J] = fork(theta, d, a, alpha)
    k0 = [0;0;1];
    O0=[0;0;0];
    J = [];
    Ti = (zeros(4,4,2)); 
    Qi = (zeros(3,3,2)); k_vectors = (zeros(3,1,2)); 
    origins = (zeros(3,1,2)); %store all the origins
    Qi_end=(eye(3));
    Ti_end = (eye(4)); 
    
    for iter = 1:length(theta)
        [T_temp, Q_now] = DH_homog(theta(iter), d(iter), a(iter), alpha(iter));
        Ti_end = Ti_end*T_temp; 
        Qi_end = Qi_end*Q_now;
        Qi(:,:,iter) = Q_now;
        Ti(:,:,iter) = T_temp; 

        k_vectors(:,:,iter) = Qi_end(1:3,3);
        origins(:,:,iter) = Ti_end(1:3,4);
    end    
    
    for iter = 1:length(theta) % this loop is to get the jacobian
        if iter==1
            J = [J, [cross(k0, origins(:,:,2)-O0); k0]];
        else
            J = [J, [cross(k_vectors(:,:,iter-1), origins(:,:,2)-origins(:,:,iter-1)); k_vectors(:,:,iter-1)]];
        end
    end
end