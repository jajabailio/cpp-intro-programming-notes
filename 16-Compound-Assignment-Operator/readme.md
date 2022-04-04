# Compound Assignment Operators
Compound assignment operators are just assignment operators but with math expressions.

Let's have an example that best explains this.

```c++

	int num = 10;
	num = 12;

	cout << num << endl;

	num = num * 2;	// substitute num with its value
					// 12 * 2 = new num value
	
	cout << "new num: " << num;

```

Now this is good and all, but we're not seeing the compound assignment operator anywhere. Let's bring that in. So, we know that we want to reassign the value of num with its current value and by 2. So, since the first term in this expression involves its own variable, we can change this with instead `num *= 2`

We can also have it in other operators like +, -. *, / and even %

<br>

[Return to contents](../readme.md#topics-included)
