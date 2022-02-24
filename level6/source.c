#include <stdlib.h>
#include <string.h>
void n(){
	system("/bin/cat /home/user/level7/.pass");
}

void m(){
	puts("Nope");
}

int main(int ac , char *av[]){
	char* ptr = malloc(64);
	void (**fun_ptr)(void) = malloc(4);
	*fun_ptr = &m;
	strcpy(ptr, av[1]);
	(*fun_ptr)();
}
