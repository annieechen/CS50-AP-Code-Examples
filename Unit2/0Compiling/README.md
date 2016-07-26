# Compiling, Source, and Object Code

## Compiling

The command that CS50 uses is 

```
clang -ggdb3 -O0 -std=c99 -Wall -Werror  <program>.c  -lcs50 -lm -o <program>
```
where running `make <program>` fills in the proper name of the program.

This turns our source code (the C program) to object code (if you try to open an executable file in the text editor, you'll see gibberish).

But there are steps in between. Code is first *preprocessed*, then *compiled*, and then *assembled*.  We can use specific commands to break down and look at what's happening with each step.

The files in this folder show each step of the process of turning `hello.c` into an executable.

### Preprocessing

We can run 
```
clang -E hello.c
```
 and will end with a really long and complicated output, which you can view in `preprocessed.c`. You can see that the contents of `stdio.h` are literally stuck in at the top of the file. If we scroll all the way to the bottom, we'll see the code that was in `hello.c`. 

### Compiling

This is the step where `clang` compiles the code down from C (what we write our programs in) to assembly code. We can see the output of this step by running 

```
clang -S hello.c
```
which will give us a file called `hello.s`. Take a look at the file, and you'll notice the language looks unfamiliar. Assembly code is processor specific, and there are no control structures (like `if`, `while`, and `for`). 

### Assembling

This is the step that takes assembly code and outputs machine code (also known as object code). This is the sequence of `0`s and `1`s that the CPU can underestand. 

We can turn our assembly code (`hello.s`) into object code by running

```
clang -c hello.s
```

which will give us the file `hello.o`. Try and open the file. You'll notice that the IDE gives you an error. It can't even open a `.o` file!

But because hello.c didn't require linking any other libraries, it turns out that `hello.o` is the same as the executable `hello` that would have been created had you run `make hello`. So go ahead and open `hello`. Not even words!

### Linking

This step combines multiple object code files into a single object code file (for instance, the `-lm` in our usual `clang` command links in the math library). If we had included math functions in our hello.c file, we could have linked the math library to our hello.o file by running

```
clang hello.o -lm
```
