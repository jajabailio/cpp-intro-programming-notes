# Initializing or Defining Variables
Before we talk about variable definition, we should first talk about what variables are.

## What Are Variables?
Variables are sort of like containers that holds or will hold a value. If you don't yet understand it, I think an example will best explain it.

```c++
int main () {

	string name;
	int age;
	char gender;
	bool isAwesome;
	float mathGrade;
	// can also use double

	return 0;
}
```
As you can see, when we define a variable, we need to first say what this variable's data type going to be. Is it going to be a string? an integer? will have a true or false value or a boolean?

As mentioned before, variables are like containers that hold values. But, as you can see from the examples, there are no values for each variable yet. This is because I want to talk about something called the "Assignment Operator".

## Naming Variable Rules
There are a couple of rules to following when naming variables
- No spaces
- No special characters
- If there are 2 words for your variable name, you can use `"_"` underscore for the spaces. Or you can use camelCase
- The first letter must always be a small letter (this isn't really strict, you can start it an uppercase BUT it's not conventional. When a pro programmer sees a variable that starts with an uppercase, they will most probably think it's not a variable)
- Don't start with underscore (also not required but unconventional)

<br>

[Return to contents](../readme.md#topics-included)
