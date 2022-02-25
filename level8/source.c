#include <stdio.h>

char *auth = NULL;
char *service = NULL;
char buff[128];

int main(int ac ,char *av[]){
	while(fgets(buff, 128, stdin) != NULL){
		printf("%p, %p \n", auth , service);
		if (strcmp())
	}
	return 0;
}
