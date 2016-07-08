#include <stdio.h>
int mul(int i, int j) {
	return (i * j);
}

int main(int argc, char **argv) 
{
	printf("Mulply 3 and 2 equals %d\n", mul(3, 2));
	printf("Hello %s\n", argv[1]);
}
