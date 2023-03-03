# Introduction to C Programing

C is a general-purpose computer programming language. It was created by [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie) at [AT&T Bell Labs](https://en.wikipedia.org/wiki/Bell_Labs) in 1972.  
Despite been old, C is very popular and remains very widely used and influential. C is strongly associated with [UNIX](https://en.wikipedia.org/wiki/Unix) as it was developed to write the UNIX operating system.
C is a an imparative (procedural[^1][^2]) language and all its codes has to be inside a function called `main`. C is also a compiled[^3] language, and also considered a low-level programming language[^4].

### Why Learn C?

Listed below are possible reasons why one should learn C.

- It is one of the most popular programming languages in the world.
- If you know C, you will have no problem learning other popular programming languages such as Java, Python, C++, C#, etc, as the syntax is similar.
- Programming languages like Java, Javascript are based on C.
- C is fast compared to other programming languages.
- C is very versatile; it can be used in both applications and technologies
- C can be used to build an operating system. ([kernel](<https://en.wikipedia.org/wiki/Kernel_(operating*system)>) development for example\*)
- Writing code in C will utimately tell you how a computer works. (_memory management and allocation, gabage collection_) and helps you appreciate higher languages like **`Python`**, **`Javascript`** and **`C#`**
- It is in high demand
- C allow us program very close to the hardware. Embedded Programming[^5]

### C standardization

- `K&R C` - This was the first publication/discription of the C programming language. This is a [book](https://en.wikipedia.org/wiki/K%26R) to document how to use/write C which was made public.
- `ANSI C` - [_Read more_](https://en.wikipedia.org/wiki/ANSI_C)

### Getting Started with C

To start using C, you need two things:

- A text editor, like Notepad, to write C code
- A compiler, like GCC, to translate the C code into a language that the computer will understand
  There are many text editors and compilers to choose from. i will be using them vim editor.

### Compiler

We are going to be using the gcc compiler to create our c executable.
On Mac you should already have the gcc compiler installed. Just type `gcc -v`

### Compilation Process [Video](https://www.youtube.com/watch?v=VDslRumKvRA)

The process of how a compiler works to produce an executable.
A compiler is a program that comprises of different modules. The compiling steps include -

- **`Preprocessor`** : This takes the source code[^6] processes it and generate some intermediate files which is given to the compiler.
  - Remove comments
  - Includes header files codes into the source code
  - Replaces macro names with code[^9]

```c
#include <stdio.h>
#define PI 3.1415

int main()
{
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    // Notice, the use of PI
    area = PI*radius*radius;

    printf("Area=%.2f",area);
    return 0;
}
```

The file generated becomes the intermediate file.

- **`Compiler`** : This then takes the intermediate files from the preprocessor and generates an **Assembly Code**[^7]
- **`Assembler`** : This takes the assembly codes and converts it into **object Code**[^8]
- **`Linker`** : When write programs, we use library/modules, linker helps to link the object code with the library codes and generate one executable file.

[^1]: A procedural language is a type of computer programming language that specifies a series of well-structured steps and procedures within its programming context to compose a program. It contains a systematic order of statements, functions and commands to complete a computational task or program. Procedural language is also known as imperative language.
[^2]: A procedural language is a computer programming language that follows, in order, a set of commands.
[^3]: This means that once you write your C program, you must run it through a C compiler to turn your program into an executable that the computer can run (execute).
[^4]: A low-level programming language is a programming language that provides little or no abstraction from a computer's instruction set architecture—commands or functions in the language map that are structurally similar to processor's instructions. Generally, this refers to either machine code or assembly language.
[^5]: What is an embedded programming language? An embedded programming language is a programming language that developers use in embedded systems. In general, the languages offer low-level access to the device hardware. Developers use several common programming languages for embedded systems.
[^6]: A source code are the codes written in C in a file with the extension `.c`
[^7]: An assembly language is a type of low-level programming language that is intended to communicate directly with a computer's hardware. **`Note`**: These are not machine codes, machine language also called binary language is what is understood by the machine.
[^8]: Object code is a set of instruction codes that is understood by a computer at the lowest hardware level. Object code is usually produced by a compiler that reads some higher level computer language source instructions and translates them into equivalent machine language instructions.
[^9]: A macro is a fragment of code that is given a name. You can define a macro in C using the #define preprocessor directive. A macro is a piece of code in a program that is replaced by the value of the macro
