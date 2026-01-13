    /.\*/.\*/.\*/.\*/.\*/.\*/.\*/.\*/\/.\
    ###           asciicube            ##
    ###**============================**##

A terminal-based clone of ClassiCube or Minecraft Classic.

=== Instructions for building and usage ===
## How to clone ##
You need to have Git installed. Clone the repository using this
command:

git clone https://www.github.com/dawidg81/asciicube

It should create a new directory called `asciicube` located in
the directory where you've executed the command.

## How to build ##
Go to the root of asciicube repository:

	cd asciicube

To build the binary from source, use this command while in root
directory of the repository (you need to have
GCC/clang/g++/MinGW installed):

	g++ src/main.cpp -o bin/asciicube

where you can include your platform name to the output file
name. So far `main.cpp` is the only file of asciicube code.
This command should create an executable with the given output
file name in the `bin` directory. If you are building this on
Windows, the executable should have `.exe` contained at the end
of the output file name.

 (Information on binaries already included in
 the repository tree OR in repository releases):
     `asciicube.exe` - an executable compiled for
                       Windows, by MinGW g++ compiler,
		       for x86_64 architecture.
		       No libraries.
     `asciicube-android`
                     - an executable compiled for
		       Android/Linux/other POSIX
       		       based system, on Termux,
		       by g++ compiler from
		       GNU Compiler Collection,
		       for aarch64 architecture.
		       No libraries.
     `asciicube`     - the old binary compiled for
                       Linux, no longer maintained, no longer
		       up to date.

     Choose one of already compiler binaries that
     meet your system requirements or build
     asciicube for your processor architecture
     and system.

		===================

################# Run! #################

Start asciicube:

./asciicube

* Done! Welcome! *

## Usage ##
At the start you see a menu in a shell-like functioning. The
most helpful command is `help`. Entering it into the menu will
give you a list of available to use commands.
