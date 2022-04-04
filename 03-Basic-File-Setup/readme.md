# Basic File Setup
Normally when we create a new CPP file, this is what we get. Don't focus too much first on the default codes cause it will get confusing.

## The main function
First of all, the word "main" here just means that this is the starting point. When the compiler runs, this is where it will start to compile from top to bottom. For now, I want you to ignore the other syntaxes and let's focus on what's inside of the curly braces. Let's also ignore the "return 0" for now cause I will talk about it later. All I want you to focus on, is what's inside the curly braces and before the **return**.

## Running the program
Let's run the program. Normally, there will be some sort of build/run button in your IDE so you can look for that. It can also be something that looks like a play button. In xcode, it's this button right here. Once we run the program this is what we get. The output is down here, and it just says Hello World!

## About the Include
Now that we were able to run our first program, I want to talk about this #include iostream section at the top. So, in C++, an "include" means that we are adding something to our program. In this case, we are saying that we add the iostream. This iostream is very common in C++ beginners, as it will let us have an input and an output. We'll talk about input and output in the next section. So, just like in this simple program, we made it output the words "Hello World". Don't worry about this "\n" character for now. That's just there to add a line break.

## Using namespace
Another thing I want to talk about in this section is the "Using namespace std". So, I wont' go into full details about this, you can research all about it yourself if you want to, but adding this `using namespace std` after the `#include <iostream>` will allow us to remove the `std` after every output and input.

``` c++
// Before 
#include <iostream>

int main() {
    
    std::cout << "Hello World!\n";	// with std prefix
    return 0;
}

// After

#include <iostream>
using namespace std;

int main() {
    
    cout << "Hello World!\n";	// no more 'std' prefix
    return 0;
}


```

## Ending in semi-colons
Most of the time, we end each statement with a semi-colon. This is something you have to keep in mind. Not all the time, but most of the time. You'll get used to it.

<br>

[Return to contents](../readme.md#topics-included)