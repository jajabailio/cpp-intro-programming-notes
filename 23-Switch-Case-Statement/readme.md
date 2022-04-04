# Switch Case Statement
The switch-case statement is very similar to if and else statement. The word "case" kind of explains that certain codes will run depending on a case. That case will be depending on a value. If my description is a little hard to understand, then again, we can have an example here that will help us better understand switch-case statements

```c++
	
	char gender;

	cout << "Enter your gender at birth (m/f): " ;
	cin >> gender;

	switch (gender) {
		case 'm': {
			cout << "You are male!" << endl;
		}
		case 'f': {
			cout << "You are female" << endl;
		}
		// add afterwards
		case 'M': {
			cout << "You are male!" << endl;
		}
		case 'F': {
			cout << "You are female" << endl;
		}
		default: {
			cout << "Your input is invalid" << endl;
		}
	}

```
<br>

[Return to contents](../readme.md#topics-included)
