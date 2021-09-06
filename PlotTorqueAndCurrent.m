figure;
hold on; 
plot(timeout,curr1,timeout,Tcalc1);
axis([32,66,-25,25]);
xlabel('Time [s]');
legend('CAN Reply Current [Amps?]' , 'Calculated Torque [Nm]');
title('Hip Motor (Motor 1) Current & Torque');
hold off;

figure;
hold on;
plot(timeout,curr1,timeout,Tcalc1);
axis([55.65,55.75,-15,25]);
xlabel('Time [s]');
legend('CAN Reply Current [Amps?]' , 'Calculated Torque [Nm]');
title('Hip Motor (Motor 1) Current & Torque During Hop');
hold off;

figure;
hold on; 
plot(timeout,curr2,timeout,Tcalc2);
axis([32,66,-25,25]);
xlabel('Time [s]');
legend('CAN Reply Current [Amps?]' , 'Calculated Torque [Nm]', 'Location', 'Best');
title('Knee Motor (Motor 2) Current & Torque');
hold off;

figure;
hold on;
plot(timeout,curr2,timeout,Tcalc2);
axis([55.65,55.75,-25,25]);
xlabel('Time [s]');
legend('CAN Reply Current [Amps?]' , 'Calculated Torque [Nm]', 'Location', 'Best');
title('Knee Motor (Motor 2) Current & Torque During Hop');
hold off;

