# Do, Do-While and For Loops
There are 3 ways to create loops. Syntaxes Do, Do-while and For. Let's start with while loop

## While Loop
While loop uses the syntax `while` followed by a condition

```c++

	int count = 0;

	while(count < 100) {
		cout << "Counter: " << count << endl;

		// add later
		count++;
	}

```
> condition is followed after the `while` syntax. Whatever is inside the curly braces of the while statement will be repeated. When the condition is TRUE, the sequence will run.

Problem in example: It's an infinite loop.

> IMPORTANT: There should be something in the loop that will stop it at some point.