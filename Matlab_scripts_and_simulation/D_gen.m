function Dm = D_gen(theta_t)
   Dm = zeros(6);
   Dqfcn = evalin('base', 'Dqfcn');
   Jrotor = evalin('base', 'Jrotor');
    Dm = Dqfcn(theta_t(1), theta_t(2), theta_t(3), theta_t(4), theta_t(5)) + Jrotor;
end