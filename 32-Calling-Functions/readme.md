# Calling Functions
We figured out how to initialize a function, now let's try calling them. Previously, we couldn't see the "Hello World" output from this function. That is because we need to be able to call it from our main function.

## How To Call A Function

```c++
int sayHello() {
	cout << "Hello World!" << endl;
	return 0;
}

int main() {
	sayHello();

	return 1;
}

```

Calling it is very simple. In our main function, we simply just put the name of the function, and put in the `()` as well.


### Notes
- You should not put data types on function calls. Once you put a data type, it becomes a function definition/intialization. It's the same as creating a new function.
- Not having a parenthesis when calling the function does not make it a function call. Instead, the compiler will read it as a variable.

### What about the return?
You noticed that both our functions have this return but we don't really know what they're doing for now. That's what we'll talk about next.

<br>

[Return to contents](../readme.md#topics-included)