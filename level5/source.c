#include <stdio.h>

void o() {
	system("/bin/sh");
	exit(1);
}

void n() {
	char buff[512];
	fgets(buff, 512, stdin);
	printf(buff);
	exit(1);
}

int main() {
	n();
}
