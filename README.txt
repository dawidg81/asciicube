        /.\*/.\*/.\*/.\*/.\*/.\*/.\*/.\*/\/.\
        ###           asciicube            ##
        ###**============================**##

A terminal-based clone of ClassiCube or Minecraft
Classic.

=== Instructions for building and usage ===

## How to clone ##

You need to have Git installed.

Clone the repository using this command:

git clone https://www.github.com/dawidg81/asciicube

It should create a new directory called `asciicube`
located in the directory where you've executed the
command.

## How to build ##

Go to the root of asciicube repository:

	cd asciicube

To build the binary from source, use this command
while in root directory of the repository:
(you need to have GCC/clang/g++/MinGW installed)

	g++ src/main.cpp -o bin/asciicube

where you can include your platform name to the output
file name. So far `main.cpp` is the only file of
asciicube code.

This command should create an executable with the
given output file name in the `bin` directory. If you
are building this on Windows, the executable should
have `.exe` contained at the end of the output file
name.

		===================

################# Run! #################

Start asciicube:

./asciicube

* Done! Welcome! *
