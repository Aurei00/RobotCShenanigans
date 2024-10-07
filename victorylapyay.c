/* 
Now there is probably a more efficient code that does this better.
But im so new to this I like this and its my magnum opus for now.
I did this for fun without little help i got from the web so if you see this enjoy it!
*/
task main()
{
	int Counter = 0; //This is one of the first time I used this type of variable.

	startMotor(port1, 127); //Would this even work on a real robot?
	wait(10);

	while(Counter < 20) //It seemed like this was the most efficient!
	{
		forward(63);
		wait(5);
		backward(5);
		wait1Msec(500);

		Counter++; //I couldnt tell you how this works.
		wait1Msec(5); //But i can tell you how this works!
		stop();
	}
	if (Counter == 20)
	{
		wait(5);
		swingTurn(right, 127);
		wait(10);
		writeDebugStream("Easy win losers!"); //I was bored quick code for fun. :b
	}
}
