#include "islower.h"

int islower(char c) {

	if (c >= 'A' && c <= 'Z')
		c = c + 32;
		return c;

	if (c >= 'a' && c <= 'z')
		return c;
		
	return 1;
}
