# [Betty](https://github.com/holbertonschool/Betty/wiki)

Betty describes a coding style/conventions for C. Its a convention developed by [Holberton School](https://www.holbertonschool.com/).
i can pretty much define my own rules/style but since i'm learning from ALX SE, betty is the codding style i must follow.

### TOC

- [Coding Style](#coding-style)

  - [Indentation](#indentation)
  - [Breaking long lines and strings](#breaking-long-lines-and-strings)
  - [Placing braces](#placing-braces)
  - [Placing spaces](#placing-spaces)
  - [Naming](#naming)
  - [Functions](#functions)
  - [Commenting](#commenting)
  - [Macros and Enums](#macros-and-enums)
  - [Header files](#header-files)

- [Documentation](#documentation)
  - [Functiomns](#functions)
  - [Data Structures](#data-structures)

####**Coding Style**

- ##### Indentation

  Use `Tabs` for indentation. In a case of a switch statement, we can ease multiple indentation by aligning the switch statement and its subordinnate case keyword on the same level.
  E.g:

  ```c
  int simple_function(char suffix)
  {
      int var;

      var = 0;
      switch(suffix)
      {
      case 'G':
      case 'g':
          var = 30;
          break;
      case 'M':
      case 'm':
          var = 20;
          break;
      case 'K':
      case 'k':
          var = 10;
      default:
          break;
      }
      return(var)
  }
  ```

  Put multiple statements on different lines

```c
    if (condition) do_this;
   do_something_everytime;
```

---

Outside of comments and documentation, spaces are never used for indentation, and the above example is deliberately broken.

Get a decent editor and don't leave whitespace at the end of lines.

- ##### Breaking long lines and strings
  > Coding style is all about readability and maintainability using commonly available tools.
  > The limit on the length of lines is 80 columns and this is a strongly preferred limit.

Statements longer than 80 columns will be broken into sensible chunks, unless exceeding 80 columns significantly increases readability and does not hide information.
Descendants are always substantially shorter than the parent and are placed substantially to the right. The same applies to function headers with a long argument list.

- ##### Placing braces
  Opening and closing brace must be on a new line.

```c
if (x == 1)
{
	some_code = here;
}
```

_**Exception**_

```c
do {
	body of do-loop
} while (condition);
```

```c
if (condition)
	do_this();
else
	do_that();
```

- ##### Placing spaces
  Use a space after (most) keywords.
  The notable exceptions are `sizeof`, `typeof`, `alignof`, and `__attribute__`, which look somewhat like functions.
  So use a space after these keywords:

```c
if, else if, switch, case, for, while, return
```

Do not add spaces around (inside) parenthesized expressions.
This example is bad:

```c
s = sizeof( struct file );
```

- ##### Naming
  C is a Spartan language, and so should your naming be.
  Unlike Modula-2 and Pascal programmers, C programmers do not use cute names like

```c
ThisVariableIsATemporaryCounter
```

A C programmer would call that variable

```c
tmp
```

**HOWEVER**, while mixed-case names are frowned upon, descriptive names for global variables are a must.
To call a global function foo is a shooting offense.

**GLOBAL** variables (to be used only if you really need them) need to have descriptive names, as do global functions.
If you have a function that counts the number of active users, you should call that

```c
count_active_users()
```

or similar, you should not call it

```c
cntusr()
```

**LOCAL** variable names should be short, and to the point.
Uses an underscore naming convention just like PHP

- ##### Functions

  Functions should be short and sweet, and do just one thing.
  They must fit on 40 lines, and do one thing and do that well.
  Another measure of the function is the number of local variables.

  They shouldn't exceed 5-10, or you're doing something wrong.
  Re-think the function, and split it into smaller pieces.
  A human brain can generally easily keep track of about 7 different things, anything more and it gets confused.
  You know you're brilliant, but maybe you'd like to understand what you did 2 weeks from now.

- ##### Commenting

  Comments are good, but there is also a danger of over-commenting.
  NEVER try to explain HOW your code works in a comment: it's much better to write the code so that the working is obvious, and it's a waste of time to explain badly written code.

  Generally, you want your comments to tell WHAT your code does, not HOW. Also, try to avoid putting comments inside a function body: if the function is so complex that you need to separately comment parts of it, you should probably go back to chapter 6 for a while.
  You can make small comments to note or warn about something particularly clever (or ugly), but try to avoid excess.
  Instead, put the comments at the head of the function, telling people what it does, and possibly WHY it does it.

  Betty style for comments is the C89 style.

  ```c
  /* Use this */
  ```

  The preferred style for long (multi-line) comments is:

  ```c
  /**

    * This is the preferred style for multi-line
    * comments in C source code.
    * Please use it consistently.
    *
    * Description: A column of asterisks on the left side,
    * with beginning and ending almost-blank lines.
  */
  ```

- ##### Macros and Enums

  Names of macros defining constants and labels in enums are capitalized.

  ```c
  #define CONSTANT 0x12345
  ```

  and

  ```c
  enum sample
  {
      FIRST = 1,
      SECOND,
      THIRD
  };
  ```

- ##### Header files

  ###### **Function prototypes**

  All your function prototypes must be declared in header files.

  ```c
  /* this prototype has to be declared in a header file */
  void sample_func(int);
  ```

  ###### **Structs, Enum, Unions definitions**

  All your structs, enums and union must be defined in header files.

  ```c
  struct sample_struct
  {
     int val;
     char *str;
  };
  ```

  ```c
  enum sample_enum
  {
     FIRST = 1,
     SECOND,
     THIRD
  };
  ```

  ```c
  union color
  {
     unsigned int ui32_value;
     unsigned char[4] rgba;
  };
  ```

  ###### **Typedefs**

  All your typedefs must be defined in header files.

  ```c
  typedef unsigned char uchar;
  typedef struct sample_struct
  {
  int value;
  char *str;
  } sample_struct;
  ```

  ###### **Double inclusion**

  To prevent double inclusion, we expect you to protect your header files by defining a macro, only if the header file hasn't been included yet.

  Example for a file named `sample_header.h`:

  ```c
     #ifndef _SAMPLE_HEADER_H_
     #define _SAMPLE_HEADER_H_

     /*
     * Structs, enums and unions definitions
     * Typedefs
     * Function prototypes
     */

     #endif /* _SAMPLE_HEADER_H_ */
  ```

####**Documentation**

- ###### Functions
  In order to keep your code maintainable and readable, you'll be asked to document every single function of all your source files.

**How to document functions**
To document a function, you simply need to insert a comment block above it. Instead of a regular C multiline comment, the comment block must begin with the following line:

```
/**
```

with two stars.
Then, each line of the block must start with a star, followed by a space:

```
*
```

The block must end exactly like a C multiline comment, with a multiline comment closer:

```
*/
```

**Format of the documentation block**
In the following description:

`(...)?` signifies optional structure.
`(...)*` signifies 0 or more structure elements
The format of a documentation block is the following one:

```c
/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
```

So the trivial example would be:

```c
/**
 * my_function - This is a description
 */
void my_function(void)
{
	do_something();
}
```

If the function must returns a value (anything but void), the Return: header tag is mandatory:

```c
/**
 * print_hello - Prints "Hello"
 */
void print_hello(void)
{
	printf("Hello");
}

/**
 * is_positive - Check if a number is greater than 0
 * @nb: The number to be checked
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int is_positive(int nb)
{
	return (nb > 0);
}
```

If there is one or more parameter described, then there must be a blank line after their specification (Only if there is something to describe after the parameters):

```c
/**
 * op_add - Makes the sum of two numbers
 * @arg1: First operand
 * @arg2: Second operand
 *
 * Return: The sum of the two parameters
 */
int op_add(int arg1, int arg2)
{
	return (arg1 + arg2);
}

/**
 * print_arg - Prints a string using printf
 * @arg: The string to be printed
 */
void print_arg(char *arg)
{
	print_string(arg);
}
```

Example for the Description header (longer description)

```c
/**
 * op_add - Makes the sum of two numbers
 * @arg1: First operand
 * @arg2: Second operand
 *
 * Description: This is a longer description.
 * Don't forget that a line should not exceed 80 characters.
 * But you're totally free to use several lines to properly
 * describe your function
 * Return: The sum of the two parameters
 */
int op_add(int arg1, int arg2)
{
	return (arg1 + arg2);
}
```

You can also add additional sections. For example, you can add a section Example on which you can give an example of usage when it's relevant.

```c
/**
 * op_add - Makes the sum of two numbers
 * @arg1: First operand
 * @arg2: Second operand
 *
 * Example:
 *    op_add(90, 8); --> 98
 */
int op_add(int arg1, int arg2)
{
	return (arg1 + arg2);
}
```

- ###### Data Structures
  Besides functions you can also write documentation for structs, unions, enums and typedefs.
  Instead of the function name you must write the name of the declaration;
  the struct/union/enum/typedef must always precede the name. Nesting of declarations is not supported.
  Use the argument mechanism to document members or constants.

Example:

```c
/**
 * struct my_struct - Short description
 * @a: First member
 * @b: Second member
 * @c: Third member
 *
 * Description: Longer description
 */
struct my_struct
{
	int a;
	int b;
	int c;
};
```

For really longs structs, you can also describe arguments inside the body of the struct.

Example:

```c
/**
 * struct my_struct - Short description
 * @a: First member
 * @b: Second member
 *
 * Description: Longer description
 */
struct my_struct
{
	int a;
	int b;
	/**
	 * @c: This is longer description of C
	 *
	 * Description: You can use paragraphs to describe arguments
	 * using this method.
	 */
	int c;
};
```

This should be use only for struct/enum members.

Example for a typedef:

```c
/**
 * u_int - Typedef for unsigned int
 */
typedef unsigned int u_int;
```
