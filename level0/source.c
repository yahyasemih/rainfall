#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char *av[]){
	if (atoi(av[1]) == 423){
		char *shell = strdup("/bin/sh");
		int GUID = getegid();
		char *const parmList[] = {shell , NULL};
		execv(shell, parmList);
	}else
		write(1, "No !\n", 5);
}
