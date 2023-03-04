# [GCC, the GNU Compiler Collection](https://gcc.gnu.org/)

This is a collection of program that compiles source code for different programming languages. For this case we will be compiling for C.

`$ gcc -flag [options] [source files]

#### Flags

- `-o [value]` - Specify the output filename of the executable.
  ```sh
  gcc main.c -o filename
  ```
- `-Wall` - Enable every warning with -Wall
  If you want to print every warning so that you can examine your code and make it better than ever, use the `-Wall` flag.
  ```sh
  gcc -Wall main.c -o Result
  ```
- `-l` - Link with a shared library using -l
  To link the C program with a shared library, all you have to do is append the name of the shared library with the `-l` flag

  For example, here I have linked the code main.c with the shared library pthread to produce the final executable Result:

  ```sh
  gcc main.c -o Hello -lpthread
  ```

  But what if you want to link the external libraries? In that case, you'd have to specify the location of the external library using the `-L`.

  For example, here, I have linked the shared library “LHB” stored in `/home/user/LHB`:

  ```sh
  gcc -L/home/user/LHB -o main.c Results -lLHB
  ```

- `-E` - Get the preprocessor output only
  The pre-processing is the first stage of compilation and if you are only concerned with what happens to your code in the first stage, you can use the `-E` flag.
  ```sh
  gcc -E main.c -o c
  ```
- `-S` - Get the assembly code only
  If you are concerned with the assembly output during the compilation, it can easily be produced using the `-S` flag.
  ```sh
  gcc -S main.c -o c
  ```
- `-C` - Get the assembly code only
  To get compiled code without any linking, all you have to do is use the `-C` flag.
  ```bash
  gcc -C main.c -o c
  ```
- `-save-temps` - Produce all the intermediate files using -save-temps
  Previously, I explained how you can get the pre-processed, assembly, and compiled output but what if I tell you that you can have all of them at once?

  It is quite easy and can easily be produced using `-save-temps` flag.

  ```bash
  gcc -save-temps main.c
  ```

- `-Werror` - Convert warnings into errors
  While testing, we programmers tend to ignore the warnings which may indicate the loopholes and security threats in your application.

  To make your code rock solid, I would suggest you convert your warnings to the errors using the `-Werror` flag.

  ```sh
  gcc -Wall -Werror main.c -o Result
  ```

- `-v` - Get the verbose output of compilation
  If you want to know what is GCC doing with your code line by line, you can use the `-V` flag to have verbose output.

  ```sh
  gcc -Wall -v main.c -o Result
  ```

- `@[filename]` - Apply GCC flags using the file
  If you are using the same set of flags to compile the program, having a file containing the necessary option can save you a lot of time.

  ```sh
  echo "-Wall -Werror -save-temps" > Flags
  ```

  Once you are done with adding flags, all you have to do is append the text file with @ symbol:

  ```sh
  gcc main.c @Flags
  ```
