function [min,max] = Getmaxmin(Num1,Num2)


    if Num1>Num2
        min = Num2;
        max = Num1;
        
    else
        min = Num1;
        max = Num2;
        
    end
    
    disp(min)
    disp(max)
 