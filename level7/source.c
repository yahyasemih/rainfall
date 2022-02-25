#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

char c[68];

struct user {
	int id;
	char *name;
};

void m(){
	printf("%s - %d\n", c, time(0));
}

int main(int ac, char *av[]){
	
	struct user *ptr1;
	struct user	*ptr2;
	

	ptr1 = malloc(sizeof(struct user));
	ptr1->id = 1;
	ptr1->name = malloc(8);
	
	ptr2 = malloc(sizeof(struct user));
	ptr2->id = 2;
	ptr2->name = malloc(8);

	strcpy(ptr1->name, av[1]);
	strcpy(ptr2->name, av[2]);
	
	FILE *f = fopen("/home/user/level8/.pass", "r"); 
	fgets(c, 68, f);

	puts("~~");
	return 0;
}
