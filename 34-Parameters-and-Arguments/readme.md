# Parameters and Arguments
These 2 are a bit misused. Sometimes people will say parameter when they mean argument. But let's talk about them one by one and have examples for it.

## Parameters
Parameters are like initializing variables but inside the function's parameter when we initialize them.

```c++
int addNumbers(int num) {
	cout << "You passed the number: " << num << endl;
	return 0;
}
```
### Notes:
- A paremeter is like saying what you can pass into the function.
- The parameters are just variables
- Separated by a comma `","`

## Argument
So, what about the argument? Well the argument is what we pass into from the function call. When there is a parameter specified in a function, we can pass a value during a function call and the value of that parameter, will be the argument. I know this might be confusing for you by now, so let's dive in more about arguments and how we pass them to functions in the next part.

<br>

[Return to contents](../readme.md#topics-included)