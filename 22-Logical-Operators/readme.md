# Logical Operators
Logical operators are symbols we can use when we want to make more than 1 comparison between values. So, most of our conditions examples that we had before are only comparing 2 values

```c++
	int a = 10;
	int b = 20;

	if(a < b) {
		if(b > 100) {
			cout << "In this output" << endl;
		}
	}
```

So far, this is what we know about conditions. We are only comparing the value of variables 'a' and 'b'. THERE IS ONLY ONE EXPRESSION. And then in that if, the next condition compares the value of variable b, and 100. So, using logical operators, we can actually turn this into only one condition. We can use the AND operator with the symbol `&&`. So that would be

```c++
	int a = 10;
	int b = 20;

	if(a < b && b > 100) {
		cout << "In this output" << endl;
	}
```

When you read this condition, we're saying that if a is less than b, AND if b > 100, then we do this condition.

What's worth noting here is that with the && operator, both comparisons of values / conditions, need to be true.


## OR Operator
There is also another Logical Operator called the OR operator with the symbol "||" (two vertical dashes). So the difference between the OR and AND is that, the AND operator needs both or all the conditions to be true. Going back to the example, condition 1 and 2 needs to be true for the entire condition to be true. THe OR operator however, only needs one condition to be true for it to be true.
```c++
	int a = 10;
	int b = 20;

	if(a < b || b > 100) {
		cout << "In this output" << endl;
	}
```
### Another example
Let's have another example. Let's say we want to make a program that verifies that a number the user enters is between 1 and 100

```c++
	int num;

	cout << "Enter a number: ";
	cin >> num;

	if(num >= 1 && num <= 100) {
		cout << "Number entered is between 1 and 100" << endl;
	} else {
		if(num < 1) {
			cout << "Number is less than a 1" << endl;
		} else {
			cout << "Number is greater than 100" << endl;
		}
	}
```

<br>

[Return to contents](../readme.md#topics-included)
