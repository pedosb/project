#include <stdio.h>
int mul(int i, int j) {
	return (i * j);
}

int add(int i, int j) {
	return(i + j);
}

int main(int argc, char **argv) 
{
	printf("Multiply 3 and 2 equals %d\n", mul(3, 2));
	printf("Hello %s\n", argv[1]);
	printf("Add 3 and 2 equals %d\n", add(3, 2));
}
