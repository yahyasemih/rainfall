#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int p(){
	char buff[64];

	fflush(stdout);
	gets(buff);
    void *ptr = __builtin_return_address(0);
	if (((unsigned int)ptr & 0xb000000) == 0xb000000){
		printf("(%p)\n", ptr);
		exit(1);
	}
	puts(buff);
	strdup(buff);
}
int main(){
	p();
}
