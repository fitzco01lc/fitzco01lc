#include <stdio.h>
#include "islower.h"

int main(int argc, char* argv[]) {

	char c;

	c = getchar();

	while (c != EOF) {
		c = islower(c);
		printf("%c", c);
		c =getchar();
}
	return c;
}
