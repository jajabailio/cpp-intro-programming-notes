# Passing Arguments To Functions
 In this example, the function has a paremeter `int num`. That is like a variable. So in our function call, we should have it like this.

```c++
int addNumbers(int num) {
	cout << "You passed the number: " << num << endl;
	return 0;
}

int main() {
	addNumbers(5);
}
```
> Important to note here is that when we say "argument", we are referring to `5` as the value that we passed into function. So 5 is what we pass as an argument. The `num` is the parameter. It is like the requirement and intialized variable of a function.

Note: Initializing a variable the same name as the parameter will cause an error. This is because the parameter is just like an initialized variable.

## More Parameters
What if there are more parameters in a function? Well, that only means that we also match the number of arguments on a function call

```c++
int addNumbers(int num1, int num2 ) {
	cout << "You passed the number: " << num1 + num2 << endl;
	return 0;
}

int main() {
	addNumbers(5, 10);
}
```

Note: The order of arguments is important. That means the `5` will always be the first parameter, while `10` will be in `num2`. If we interchanged their order, then logically, `10` will be the value of `num1`.

## Passing Variables As Arguments
In our previous example, we have been only passing values. That's static, constant, not changing. We can also pass variables instead, as the argument. What matters most here is that the variables has values.

## Matching Data Types
When passing arguments, the data type of each argument MUST MATCH the parameter.

<br>

[Return to contents](../readme.md#topics-included)