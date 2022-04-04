# Return Statement
The return statement is pretty much what the function gives back to where it was called. Also worth noting that the return statement usually means that it's the end part of the function. You cannot put anything after the return because it will not be executed, because the flow of the compiler will return back to where it was called. I'll try to explain it clearer later. But let's have an example for now.

```c++
int sayHello() {
	cout << "Hello World!" << endl;
	return 0;
}

int main() {
	cout << sayHello() << endl;

	return 1;
}

```

## Using another Data Type for the Function
Instead of returning a 0, why not return the string "Hello World" and then display it on the main function?

```c++
string sayHello() {
	return "Hello World!";
}

int main() {
	cout << sayHello() << endl;

	return 1;
}	
```

## Assign Function Call to Variable
We can also assign a function call to a variable. One thing worth noting here is that we can make use of whatever the function returns, as the function returns a value. Here's an example.


```c++
string sayHello() {
	return "Hello World!";
}

int main() {
	string greeting = sayHello();
	cout << greeting << endl;

	return 1;
}	
```
As you can see, the return string "Hello World" is then assigned into the variable `greeting`. We can then display `greeting` as such.

<br>

[Return to contents](../readme.md#topics-included)