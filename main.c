#include <stdio.h>

int add(int i, int j) {
	return(i + j);
}

int main(int argc, char **argv) 
{
	printf("Hello %s\n", argv[1]);
	printf("Add 3 + 2 equals %d\n", add(3, 2));
}
