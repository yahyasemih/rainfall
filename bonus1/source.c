#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(int argc, char *argv[]) {
	int		n;
	char	buffer[40];

	n = atoi(argv[1]);
	if (n > 9)
		return 1;
	memcpy(buffer, argv[2], n * 4);
	if (n == 0x574f4c46)
		execl("/bin/sh", "sh", NULL);
	return 0;
}
