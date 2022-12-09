clc;    % Clear the command window.
clearvars;
close all
workspace;  % Make sure the workspace panel is showing.
format long g;
format compact;
% Make the background as a rounded rectangle
% with pure black ('k') color.
rectangle(...
	'Position', [0 0 2 4], ...
	'Curvature', 0.2, ...
	'FaceColor', 'k')
axis equal
hold on;
% Define dark gray colors - color when that light is off.
darkGray = [0.2, 0.2, 0.2];
green = [0, 132, 80] / 255;
yellow = [239, 183, 0] / 255;
red = [184, 29, 19] / 255;
% Put up the three dark gray "off" lights.
pos = [0.5 2.75 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
pos = [0.5 1.5 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
pos = [0.5 0.25 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)   
title('Traffic Lights', 'FontSize', 24);
xlim([-0.5, 2.5]);
ylim([-0.5, 4.5]);
while 1
pos = [0.5 2.75 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', red)
pause(2);
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
pos = [0.5 1.5 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', yellow)
pause(2);
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
pos = [0.5 0.25 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', green)
pause(2);
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
end
