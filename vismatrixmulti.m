clc;
clear all;

f1=importdata("ijkdata.csv");
f2=importdata("jikdata.csv");
f3=importdata("kijdata.csv");
f4=importdata("ikjdata.csv");
f5=importdata("jkidata.csv");
f6=importdata("kjidata.csv");

figure(1);

plot(f1(:,1),f1(:,2),'m'); 
hold on;

plot(f2(:,1),f2(:,2),'c');  set(gca,'YScale','log')

plot(f3(:,1),f3(:,2),'r');

plot(f4(:,1),f4(:,2),'g');

plot(f5(:,1),f5(:,2),'b');

plot(f6(:,1),f6(:,2),'k');
xlabel('Array Size (N)');
ylabel('Cycles per Loop Iteration');
legend('IJK','JIK','KIJ','IKJ','JKI','KJI');
hold off;