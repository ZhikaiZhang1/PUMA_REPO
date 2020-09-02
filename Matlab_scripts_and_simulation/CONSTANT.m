%clear all;
%code for codegen: codegen -d G_q_lib -config:lib  G_q -args {0,0,0,0,0}
Amp1n    = [-3.125 -92];
Amp1d    = [0.25 8];
AmpSat1  = 12;
BIG = 1e6;               % General purpose large number
SML = 1e-6;              % General purpose small number
CtlSat1  = 1024;
termL = 0;
KV = [400 0 0 0 0 0; 0 470 0 0 0 0; 0 0 550 0 0 0; 0 0 0 370*5/1.5 0 0; 0 0 0 0 60*5/1.5 0; 0 0 0 0 0 180*5/1.5];
KP = [700 0 0 0 0 0; 0 670 0 0 0 0; 0 0 650 0 0 0; 0 0 0 400*5/1.5 0 0; 0 0 0 0 540*5/1.5 0; 0 0 0 0 0 210*5/1.5];
Starting_Pos = [0;3.1415926/5;3.1415926/6;3.1415926/10;3.1415926/7;3.1415926/2];
PWM_CONV = 12.0/1024.0;
PWM_CONV_OTHER = 1.0/1024.0;
%[8.73e-05 1.13];
termR1 = 1.7;
termR2 = 5;
%termL = 8.73e-05;
%termR = 1.13;
% Motor Dynamics
Elec1n   = 1;                % Numerator
Elec1d   = [termL, termR1];                % Denominator
Elec2d   = [termL, termR2]; 

Mech1n   = 1;                % Numerator
Mech1d   = 1;                % Denominator

TConst_s  = 0.630371462;
TConst1 = 1.207;
TConst2 = 0.5324;
TConst3 = 0.089240515;
BackEMF1 = (12 - 38.1*0.2)/(40*2*pi/60);
BackEMF2 = 0.32;
BackEMF3 = 0.00091;
%Jrotor = T/(W1 - W0)dt 
Jr_123 = 7.84532/(40*2*pi/60);
Jr_45  = 3.726/(121*2*pi/60);
Jr_r   = 0.2157463/(789*2*pi/60);
Jrotor = [Jr_123 0 0 0 0 0; 0 Jr_123 0 0 0 0; 0 0 Jr_123 0 0 0; 0 0 0 Jr_45 0 0; 0 0 0 0 Jr_45 0; 0 0 0 0 0 Jr_r];
%F_kf = 2 * K_T * I_noload / w_noload;	
%J_system = J_link + 2 * J_motor + J_rotor;	
% Inertia Resulting from Motor 1 and Counter Weight
%J_obj = 1/3 * Weight_obj * (LinkOff + Length_m)^2;								% Extend motor 1 and counter weight into 1 connected long cylinder
% Inertial Resulting from Imaginary Part
%J_img = 1/3 * Weight_img * (LinkOff)^2;											% Inertia of the imaginary extension between motor 1 and counter weight
% Resulting inertia
%J_motor = J_obj - J_img; 														% By superposition, the inertia of these components is the whole object subtract the imaginary extension

% Motor Rotor Inertia
%J_rotor = MotorParam(RotJ) / 1e4 / 1000 ;										% Convert from g cm^2 to (kg m^2)