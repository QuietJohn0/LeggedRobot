out = sim('TorqueSim');
N = length(out.tout);

r = [out.L2,out.L1];
theta = [(out.th2-(pi/2 - out.th1))*-1,(pi/2 - out.th1)];

c = cos(theta);
s = sin(theta);
x_coord = zeros(length(c),length(r)+1);
y_coord = zeros(length(c),length(r)+1); 
for i = (1:length(r))
    x_coord(:,i+1) = x_coord(:,i) + r(i).*c(:,i);
    y_coord(:,i+1) = y_coord(:,i) + r(i).*s(:,i);
end
x_coord = x_coord - x_coord(:,3)


 for  i = (1:length(c))
    fill([-10 10 10 -10],[-10 -10 0 0],[0.5 0.5 0.5]);
    hold('on');
    plot ( x_coord(i,:) , y_coord(i,:),'linewidth',2) ; 
    ylim([-.8,.8]);
    xlim([-.8,.8]);
    axis equal;
    hold off;
    drawnow;
    pause(.001);

    
 end

