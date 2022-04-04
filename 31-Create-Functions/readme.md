# Creating Functions
In C++, there are 2 ways we can create functions, but for now, let's create them in a way where it also works in other languages. Say we have our main function right? Well, up above our main function, let's go up here and create our own function.

## Naming functions
Our function needs a name. Normally, when we name functions, we name them according to what their tasks are supposed to be. Let's say in this example, our function is just to greet to the user. So, we'll call this `sayHello` function.

- Before putting the name of the function, put the data type of the function (just like a variable). In a way, we can also say that we are initializing/defining a function. Just like with variables
- We put the name of the function
- We put an open and close parenthesis after our function name
- Put open and close curly braces after our parenthesis
- You can put any code you want inside the function (Within the curly braces)
- At the end of the function (before the closing curly brace), you have to `return` a value. This will depend on the data type (Note: `return` is not always required on some other languages)

```c++
	int sayHello() {
		cout << "Hello World!" << endl;
		return 1;
	}
```

It's starting to look like our main function when we started our lessons, doesn't it? Well, let's try running this program and see what we get.

## Not Getting Any Output?
Remember that the compiler starts at our main function. It doesn't start at the sayHello function. And in our main function, we don't have anything referencing this function. We need a way to call this function. And that's what we'll talk about next, function calls.

<br>

[Return to contents](../readme.md#topics-included)

