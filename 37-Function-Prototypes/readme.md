# Function Prototypes
This is a declaration (in C and C++) of a function, its name, parameters and return type before its actual declaration.

## How Will It Affect Our Code?
Prototypes will tell the compiler what to expect from the function. Basically, it makes it better for the compiler to flag any functions that don't contain the expected information. You can read more about the benefits of prototypes in details [here](https://bit.ly/37elHJ7)

My takeaway here is that, it's already telling the compiler what we're going to have. With this, it will solve the issue of who gets initialized first from our previous example. This is because the compiler already expects the functions even though they were not offically initialized yet. So, even if we change the order of the prototype, it will not throw an error because the compiler is just like, saving it for later, if that makes sense. This way, it's not gonna say that the `sayHello()` is not yet initialized, because the compiler already expects this function.

```c++
int sayGoodbye();
int sayHello();

int main() {
        
    sayGoodbye();
    return 0;
}

int sayGoodbye() {
    cout << "Goodbye!" << endl;
    sayHello();
    return 0;
}

int sayHello() {
    cout << "Hello World!" << endl;
    return 0;
}

```

<br>

[Return to contents](../readme.md#topics-included)