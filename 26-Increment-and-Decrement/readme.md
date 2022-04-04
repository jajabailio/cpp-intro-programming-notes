# Incrememnt and Decrement
Increment and Decrement just means that we either add increase a number by 1, or decrease a number by 1. For example, if we increment 10, that's 11. If we decrement 20, that's 19. In C++ (and pretty much in a lot of other languages) the syntax for it is either `++` or `--`.

## Increment sample
Let's have an example of increment

```c++

	int num = 5;
	cout << "num before increment: " << num << endl;

	// increment
	num++;
	cout << "num after increment: " << num << endl;

	num = 50;
	cout << "num before decrement: " << num << endl;

	num--;
	cout << "num after decrement: " << num << endl;

```

## Pre and Post Increment/Decrement
So actually, if we go back to our code, most of our increment and decrements are post, and that is because we placed the syntax after our variables, hence "post". But, there is such a thing as a pre-increment or pre-decrement. So, I can just pretty much change the placement of the symbols ++ and -- to the beginning of the variable, and in this particular program, the output will pretty much be the same.

Now you might ask, what's the difference then with the use of pre and post increment/decrement? Well, the way I describe it is, when do you want to apply the increment/decrement of a variable's value before a given action is executed. What do I mean by "action". Well, let's look at the `cout` syntaxes used. The action here is that we are displaying the variable `num`.

```c++

	int num = 5;
	cout << "num before increment: " << ++num << endl;

	// here, before the display happens, we increment the value of num

	int num = 5;
	cout << "num before increment: " << num++ << endl;

	// here, the action is done first before we increment, therefore, the display is still 5.

```

## Another example
Let's have another example. Let's say in a loop we have the following:

```c++
	
	int count = 1;

	while(count <= 10) {
		cout << count++ << endl;

		// if it's post, then the display of count will start at 1.
	}
```

<br>

[Return to contents](../readme.md#topics-included)
