# Chapter 1 Summary - Getting Started 

- Definitions 
    1. Stream: is a sequence of characters read from or written to an IO device
    2. Class: defines a type along with a collection of operations related to that type.
    3.  Member function: function that is defined as part of a class.

## 1.1 Writing a Simple C++ Program 

C++ must contain one or more functions. However it must contain a *main* function:

### The components of a function definition
1. return type
2. function name (can be empty)
3. parameter list 
4. function body 
5. block of statements (starting with a curly brace and ending with a curly brace)

```cpp 
int main() // type: int, function name: main, parameter list: ()
{ // the start of a block of statements
    return 0; // return statement
} // the end of a block of statements
```

Where zero indicates a *successful program* and a non-zero return depends on the system that is used.  

### Compiling and executing our program 

1. Compiling: 'bash CC prog1.cc -o prog1'
2. Executing
    - On windows 'bash prog1' 
    - 'bash ./prog1'
3. We obtain the status 
    - On windows 'bash echo %ERRORLEVEL%
    - 'bash echo $?'

## 1.2 First look at Input/Output

Firstly, there is a parent library called **iostream** library that merges both **istream** and **ostream**. Where *istream* is the input library and *ostream* is the output library. 


In Summary:
- iostream library
    - istream library (uses input operator >>)
        - 'cpp cin' referred as standard input
    - ostream library (uses output operator <<)
        - 'cpp cout' referred as standard output
        - 'cpp cerr' referred as standard error
        - 'cpp clog' is used to handle general information about the execution of the program.

## 1.3 Comments

Comments help the human readers of our programs. They are typically used to:
    1. Summarize an algorithm, 
    2. identify the purpose of a variable, 
    3. clarify an otherwise obscure segment of code. 

The compiler ignores comments, so they have no effect on the program’s behavior or performance. Therefore, there are two types of comments *single-lined* (//) and *paired* comments (/* This is a paired comment */).

The main distinction between single-lined and paired comments is that paried comments can span across multiple-lines while a single-lined can only span across a one line. 

## 1.4 Control flow
1. the `while` statement 
    - repeatedly executes a section of code so long as a given condition is true

    ```cpp 

    while (condition) {
       statement
    }

    ```
2. the `for` statement 
    - repeatedly executes a section of code so long as a given condition is true

    ```cpp

    for(initalize the variable; condition; increment/decrement the variable) {
        statement
    }
    ```

3. the `if` statement
    - that supports conditional execution

    ```cpp
    
    if (condition) {
        statements
    } else if (condition) {
        statements
    } else {
        statements
    }

    ```

## 1.5 Introducing Classes
To use a class we need to include its header files (usually ends is `.h` file or less commonly `.H, .hpp, .hxx`)

### Member functions
A member function is a function that is defined as part of a class, and it is used like so, `classType.memberName()`. Where the dot operator is used to access the member function. 

## Common Pitfalls:
1. Nested paired comments. 
2. `=` is for assignment, whule `==` for equality. 