#include <stdlib.h>
#include <cstring>

class N {
		char annotation[100];
		int nb;
	public:

		N(int n) {
			nb = n;
		}
		void setAnnotation(char *str) {
			memcpy(annotation, str, strlen(str));
		}
		int operator+(N &n) {
			return (nb + n.nb);
		}
		int operator-(N &n) {
			return (nb - n.nb);
		}
};

int main(int argc, char **argv) {
	if (argc <= 1)
		exit(1);

	N *n1 = new N(5);
	N *n2 = new N(6);

	N *n1_ptr = n1;
	N *n2_ptr = n2;

	n1_ptr->setAnnotation(argv[1]);
	return (*n2_ptr + *n1_ptr);
}
