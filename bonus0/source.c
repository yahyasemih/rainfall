#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*p(char *str, char *header)
{
	char	buffer[4096];

	puts(header);
	read(0, buffer, 4096);
	*strchr(buffer, '\n') = 0;
	return (strncpy(str, buffer, 20));
}

char	*pp(char *buff)
{
	char			buff1[20];
	char			buff2[20];
	unsigned int	len;

	p(buff2, " - ");
	p(buff1, " - ");
	strcpy(buff, buff2);
	len = strlen(buff);
	buff[len] = ' ';
	buff[len + 1] = 0;
	return (strcat(buff, buff1));
}

int	main(void)
{
	char	buff[42];

	pp(buff);
	puts(buff);
	return (0);
}
