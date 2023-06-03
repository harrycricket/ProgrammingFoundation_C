#include <stdio.h>
#include <stdlib.h>

// tao có 2,3tr VND
// mày có 100$
// đổi nhau để xài đi --> swap 

int main(int argc, char *argv[]) {
	int tao = 23;
	int may = 100;
	printf("Before swapping, tao: %d; may: %d\n", tao, may);
	// gán giá trị cho nhau
	tao = may;
	may = tao;
	printf("After swapping, tao: %d; may: %d\n", tao, may);
	return 0;
}