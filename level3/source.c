#include <stdio.h>

int m;

void v() {
	char buff[512];

	fget(buff, 512, stdin);
	printf(buff);
	if (m == 64) {
		fwrite("Wait what?!\n", 1, 12, stdout);
		system("/bin/sh");
	}
}

int main() {
	v();
}
