#include <stdio.h>

char *auth = NULL;
char *service = NULL;
char buff[128];

int main(){
	while(fgets(buff, 128, stdin) != NULL){
		printf("%p, %p \n", auth , service);
		if (strncmp(buff, "auth ", 5) == 0){
			auth = malloc(sizeof(char *));
			//if (strlen(buff + 5))
			strcpy(auth, "12345678901234567890")
		}
		else if (strlen(buff + 5))
		{
			strncmp(buff, "service", 7) == 0
		}
		else if(strncmp(buff, "reset", 5) == 0){
			free(auth)
		}

	}
}
