# Hello World!

Just like every other programming languages, we start learning starting with `Hello World!`

### C Files

- C files always have a .c extension
- A C program must have one entry function called `main`. this is the function C looks for. It is the starting point of you program
- After writing a your code, run `gcc [file name]` to generate an executable file for your program.

`hello.c`

```c
#include <stdio.h>

int main(void)
{
    printf("Hello World!\n");
    return(0);
}
```

### Standard I/O

This is how C collets information (input) and how it displays or return information (output).

In the above code, we can see that an `stdio.h` header file was included in the program. This is because we want to display certain information to the user. In a nutshell, this will just display the information to the terminal (also called console in other programming languages).

- The C language does not have any special syntax for I/O, instead it defines a libraby of functions that support integration with `stdio`.

`getchar()` - For reading input.

_**Synopsis**_:

```c
int getchar(void);
```

_**Description**_:

- Read the next character from standard input[^1] (if available)
- Returns EOF when end of file or error conditions are encountered.

`putchar()` - For writing output.

_**Synopsis**_:

```c
int putchar(int c);
```

_**Description**_:

- Writes the character c to the standard output
- Returns the character that was written.

`printf()` - Displays output in a formatted way to the stdout

_**syntax**_:

- printf(format_str, arg1, arg2, ...)
  - Arguments are the variable to be printed.
  - format_str tells printf how to display these arguments

`scanf()` - Reads formatted input from the stdin

_**syntax**_:

- scanf(format_str, &arg1[^2], &arg2[^2], ...)
  - Arguments are the addresses of variable that will store the read value.
  - format_str tells scanf how the input is formatted

[^1]: Console
[^2]: `&` before a variable name means the address the variable is stored and not the variable itself
