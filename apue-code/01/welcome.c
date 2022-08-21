#include <stdio.h>
#include <unistd.h>

///
/// need add include file unistd.h, otherwise the program will core dump

int
main() {
	printf("Welcome to CS631 Advanced Programming in the UNIX Environment, %s!\n", getlogin());
}
