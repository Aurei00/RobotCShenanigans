
task main()
{
	startMotor(port1, 127); //Wheels
	startMotor(port10, 127); //Wheels aswell
	startMotor(port6, 127); //Claw
	startMotor(port7, 127); //Claw Arm
	
	wait(10);
	
	int Counter = 0; //Just saying the Counter is 0
	while(Counter < 2) //The Counter will stop doing this if it greater than 2
		{
			forward(63.5); //Goes Forward at half speed
			wait(2);
			backward(63.5); //Goes Backward at half speed 
			wait1Msec(2000);
		
			motor[port6] = 50; //Opens the claw
			wait(1); //Will stop after one second
			motor[port6] = 0; //Closes the claw
			wait(1); //Will stop after one second

			Counter++; //Counter +1
			wait1Msec(5);
			stop(); //After the few runs of this same code it will stop
		
		}
	if (Counter == 2) //When the Counter reaches number 2 which it will after running the code twice plays this code
		{
		wait(5);
		swingTurn(right, 127); //Just a turn for 5 seconds
		wait(5);
		}
	
}
