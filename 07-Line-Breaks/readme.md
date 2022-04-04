# Line Breaks
Let's talk about line breaks because I will be using them in most of my examples. Line break just means that we are creating a new line segment. Take this hello world program for example. If you notice, at the end of the text, I added this backslash "n" characters. This is so that the next text will appear on a new line. If you look at the console, you can see that the text "Program ended with exit code: 0" is on a new line. As opposed if I removed this "\n", look what happens. The "Program ended..." is just right beside the "Hello World" text.

We can also put the "\n" character anywhere else, **as long as** it is somewhere inside a double quotes. Anything inside of a double quotes is called a "String" (which will get into next time), but again, just know that the "\n" should always be inside of a double quote.

```c++
#include <iostream>
using namespace std;

int main() {
    
    cout << "Hello\n World!\n";
    return 0;
}

```

## The "endl" syntax
The endl is a reserved keyword for C++ which basically means "End Line". This works similarly to the "\n" but used differently. In this example, we can use the "endl" keyword as a separate output. Like so.

```c++
#include <iostream>
using namespace std;

int main() {
    
    cout << "Hello World";
	cout << endl;
    return 0;
}

```

## Chaining outputs
We can actually chain outputs in one line. So lets take this current example, but instead of having it in two lines, I can add the << after the "Hello World" String and it will have the same output. So, this just means that we are chaining the output in one line.

<br>

[Return to contents](../readme.md#topics-included)