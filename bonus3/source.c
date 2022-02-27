#include <stdio.h>

int main(int argc,char *argv[]) {
    char pass[66];
    char buff[65];

    FILE *f = fopen("/home/user/end/.pass","r");

    if ((!f) || (argc != 2))
        return -1;

    fread(pass, 1, 66, f);
    pass[atoi(argv[1])] = 0;

    fread(buff, 1, 65, f);
    fclose(f);

    if (strcmp(pass, argv[1]) == 0)
        execl("/bin/sh", "sh", 0);
    else
        puts(buff);

    return 0;
}
