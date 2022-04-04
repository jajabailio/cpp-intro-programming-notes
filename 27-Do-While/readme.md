# Do-While and For Loop
Do-while and For loops are another way of making loops. Let's first take a look at Do-While loops

# Do-While loop
Do while loop is very similar to while loop. The only difference is where we place what's inside of the curly braces, and the use of the syntax `do`.

```c++

	int num = 1;

	while(num < 10) {
		cout << "num: " << num << endl;
	}


	// do while

	do {
		cout << "num: " << num << endl;
	} while(num < 10);


```

### While and Do-While Difference
What's the difference then with do-while and while? Well, it's the order in which we execute the code and checking the condition.

In a while loop, before we execute what's inside the loop, we have to check first the condition. If condition is met, we do the loop. In do-while loop however, we first execute what's inside of our curly braces, AND THEN check the condition. This means, that regardless whether condition is met, the do-while will always run at least once. 

>💡 Change num to 500 to see the difference between while and do-while

<br>

[Return to contents](../readme.md#topics-included)
