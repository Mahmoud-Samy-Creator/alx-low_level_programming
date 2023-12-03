# 0x00. C - Hello, World

## Learning reasorses
* [Everything you need to know to start with C.pdf ](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231203%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231203T154418Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=9e8fcaa38ebcb371380d79fad98d6578037f408fde316c55d8426b554fff0544)
* [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
* [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
* [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
* [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
* [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
* [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
* [Betty Coding Style](https://github.com/alx-tools/Betty/wiki)
* [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040)
* [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus)

## man or help (read the manual of):
* `gcc`
* `printf (3)`
* `puts`
* `putchar`

## Learning Objectives
### General
* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type gcc main.c
* What is an entry point
* What is main
* How to print text using printf, puts and putchar
* How to get the size of a specific type using the unary operator sizeof
* How to compile using gcc
* What is the default program name when compiling with gcc
* What is the official C coding style and how to check your code with betty-style
* How to find the right header to include in your source code when using a standard library function
* How does the main function influence the return value of the program

## Requirements
### C
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file at the root of the repo, containing a description of the repository
* A README.md file, at the root of the folder of this project, containing a description of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use system
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

### Shell Scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your scripts should be exactly two lines long (`$ wc -l file` should print 2)
* All your files should end with a new line
* The first line of all your files should be exactly `#!/bin/bash`

## More Info
### Betty linter
To run the Betty linter just with command betty <filename>:

* Go to the [Betty](https://github.com/alx-tools/Betty) repository
* Clone the [repo](https://github.com/alx-tools/Betty) to your local machine
* `cd` into the Betty directory
* Install the linter with `sudo ./install.sh`
* `emacs` or `vi` a new file called `betty`, and copy the script below:

```
    #!/bin/bash
    # Simply a wrapper script to keep you from having to use betty-style
    # and betty-doc separately on every item.
    # Originally by Tim Britton (@wintermanc3r), multiargument added by
    # Larry Madeo (@hillmonkey)

    BIN_PATH="/usr/local/bin"
    BETTY_STYLE="betty-style"
    BETTY_DOC="betty-doc"

    if [ "$#" = "0" ]; then
        echo "No arguments passed."
        exit 1
    fi

    for argument in "$@" ; do
        echo -e "\n========== $argument =========="
        ${BIN_PATH}/${BETTY_STYLE} "$argument"
        ${BIN_PATH}/${BETTY_DOC} "$argument"
    done
```


* Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
* Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`

You can now type betty <filename> to run the Betty linter!
## Tasks
* 0-preprocessor - A script that runs a C file through the preprocessor and save the result into another file.
* 1-compiler -   A script that compiles a C file but does not link.
* 2-assembler - A script that generates the assembly code of a C code and save it in an output file.
* 3-name - a script that compiles a C file and creates an executable named cisfun.
* 4-puts.c - A C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
* 5-printf.c -  A C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
* 6-size.c - A C program that prints the size of various types on the computer it is compiled and run on.
* 100-intel - A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
* 101-quote.c -  A C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.