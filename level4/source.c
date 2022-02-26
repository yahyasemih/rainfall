#include <stdio.h>

int m;

void n() {
	char buff[512];
	fgets(buff, 512, stdin);
	p(buff);
	if (m == 16930116){
		system("/bin/cat /home/user/level5/.pass");
	}
}

void p(char *buff){
	printf(buff);
}

int main(){
	n();
}
