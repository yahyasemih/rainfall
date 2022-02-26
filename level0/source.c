#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int ac, char *av[]){
	if (atoi(av[1]) == 0x1a7){ // 423
		char *args[2];
		args[0] = strdup("/bin/sh");
		args[1] = NULL;
		int gid = getegid();
		int uid = geteuid();
		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		execv("/bin/sh", args);
	} else
		fwrite("No !\n", 1, 5, stderr);
	return 0;
}
