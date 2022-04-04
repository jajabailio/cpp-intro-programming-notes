# Exercise 7 (Fibonacci Sequence)
A fibonacci sequence is a set of numbers that starts with 0 and 1. The way it works is that we always add the latest number with the previous one. By default, the first 0 and 1 will have a sum of 1, so the sequence we have now is `0, 1, 1`. The next we keep adding the latest number with the second least number (or previous number, if you will). So we add `1 + 1` and the new sequence will be `0, 1, 1, 2`. Then we add again the latest number with the previous number and that would result to the new sequence of `0, 1, 1, 2, 3, 5, 8...` and so on and so forth.

## Create a fibonacci sequence with loops
Create a fibonacci sequence using any loop. The last number in the sequence should be less than or equal to 5000. Also, we want to display the sequence in a string. The expected output should be something like this. `0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...` 

> Hint: You can add strings together like this

```c++
	string display = "";

	int num1 = 5;

	display += num1 + ", ";
	
	int num2 = 10;
	display += num2 + ", ";

	cout << display << endl;

	// Output
	//5, 10, 

	// This is hint is for you to display the fibonacci sequence in one string
```
<br>

[Return to contents](../readme.md#topics-included)