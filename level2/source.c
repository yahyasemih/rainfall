#include <stdio.h>

int run(){
	char buff[80];

	fflush(stdout);
	gets(buff);
	if (buff == 0xb000000){
		printf("(%p)\n")
	}
	else{
		puts(buff);
		strdup(buff);
	}
}
int main(){
	p();
}
