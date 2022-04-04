# Variables Vs Values (Dynamic VS Static)
Now that you know what an assignment operator is, we should know terminologies in terms of variables and values. I want to emphasize this as much as I can so that you will get the explanation.

## Variable
Think of variables like containers that can either hold something, or nothing at all. That something, is the value. This is very similar in algebra. We have x as a term that can be any number. That number the number we substitute with 'x' will be the "value".

## Value
The value is the raw data itself. So it's not the container, but rather what is inside the container.

# Static and Dynamic
Something worth noting is that value is "static" which means not changing, or constant. Dynamic however, means that it can be changed or can be different

## Case Sensitive
Normally, in programming, everything is case sensitive. This means that the value `"Janssen"` is not the same as `"janssen"`. And variables `int myNumber` is not the same as `int MyNumber`. That's what case sensitive means.

```c++
	int num = 10;

	cout << 10 << endl;
	cout << 10 << endl;
	cout << 10 << endl;
	cout << 10 << endl;


	// cout << num << endl;
	// cout << num << endl;
	// cout << num << endl;
	// cout << num << endl;
```

<br>

[Return to contents](../readme.md#topics-included)
