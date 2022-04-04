# Nested If Statements
Nested if statements simply mean that we have an if statement within an if statement. That's pretty much it.

Let's have an example here.

```c++
	int a = 10;
	int b = 20;

	if(a < b) {
		cout << "a is less than b" << endl;

		if(b > 100) {
			cout << "b is greater than 100" << endl;
		} // add this as small exercise
		else {
			cout << "b is less than 100" << endl;
		}
	} else {
		cout << "a is greater than b" << endl;

		if(a > 50) {
			cout << "a is greater than 50";
		}
	}
```

Let's have a small exercise. What if when b is greater than a, but not greater than 100. What do you need to add to be able to output saying that b is less than 100? Pause the video and spend around 5 minutes to solve this.

<br>

[Return to contents](../readme.md#topics-included)
