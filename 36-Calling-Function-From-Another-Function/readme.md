# Calling Function From Another Function
We can call functions from another function the same way as we call our function from the main function. Here's an example.

```c++
int sayGoodbye() {
    cout << "Goodbye!" << endl;
    return 0;
}

int sayHello() {
    cout << "Hello World!" << endl;
    sayGoodbye();
    return 0;
}

int main() {
        
    sayHello();
    return 0;
}
```

### The Problem With Former Example
What if we want to do it the other way around. Let's call the `sayGoodbye()` function and then call the `sayHello()` function in the `sayGoodbye()` function. We get an error. It's saying that the `sayHello` function is not declared yet. So, we can solve this by changing again the order of functions. But then again, this isn't very practical. We need a way to solve this issue without changing the order of the function's declaration. Luckily, there is a way. We can make use of something called "Prototypes". That's what we'll talk about next.


<br>

[Return to contents](../readme.md#topics-included)