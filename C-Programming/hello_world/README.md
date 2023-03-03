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
