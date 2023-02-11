MyEle(1)=Simulink.BusElement; %Creating an object 
MyEle(1).Name = 'Volt';     %assigning the name then the data type
MyEle(1).DataType = 'uint8';


MyEle(2)=Simulink.BusElement; %Creating an object 
MyEle(2).Name = 'Temp';     %assigning the name then the data type
MyEle(2).DataType = 'boolean';


MyEle(3)=Simulink.BusElement; %Creating an object 
MyEle(3).Name = 'Current';     %assigning the name then the data type
MyEle(3).DataType = 'boolean';

Fault = Simulink.Bus;
Fault.Elements = MyEle;