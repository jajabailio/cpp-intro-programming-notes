# For Loops
For loop is probably the most common loop out there (correct me if I'm wrong). I think it may be because of how it constructed. Before we dive into how it's written, let's take a look for a second at the previous loops we've done so far.

```c++
	int count = 1;

	while(count <= 10) {
		cout << "count: " << count++ << endl;
	}
```

There are 3 things here that I want you to consider.

- A counter: This will be like a starting point. In this example, we have count here that starts at 1.
- A condition: Next is the condition. The condition will determine whether it will loop through the code or not. If it's true, it will run the loop, if false, it will not do the loop anymore.
- An increment/decrement: Just like in the example, we have this count++ post-increment. This is so that we can stop our loop at some point.

> This example is very specific and there will be times when loops aren't really structured like this, but for simplicity, let's stick with this.

## For Loop example
Now for the for loop, we can take those three things and put them into one line of code. 

```c++
	for(int count = 1; count < 10; count++) {
		cout << "count: " << count << endl;
	}
```
Notes:

- Count needs to be initialized, that's why we put an `int` to specify the data type
- Each part is separated by a semi colon `;`
- First part is the counter, the second is the condition, the third is the increment
- Within the sequence of codes in the loop, there is no need to increment the count (else it will increment twice)

## For Loop example
Now for the for loop, we can take those three things and put them into one line of code. 

```c++
	for(int count = 10; count < 1; count--) {
		cout << "count: " << count << endl;
	}
```


<br>

[Return to contents](../readme.md#topics-included)
