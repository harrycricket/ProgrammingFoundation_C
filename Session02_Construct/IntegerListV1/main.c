#include <stdio.h>
#include <stdlib.h>

/* 
	in ra các con số từ 1...100
	IPO:
	I: k cần đầu vào vì mọi thứ đã rõ, in từ 1...100
	P: printf();
	O: in ra thôi
*/
int main(int argc, char *argv[]) {
	printf("The list of integers from 1 to 100\n");
	
	for (int i = 1; i <= 100; i++)
	// i: index, chỉ mục, số đếm
	// biến siêu cục bộ - local, chỉ dùng trong for
	// hết for hết biến 
	{
		printf("%d", i);
		if (i < 100)
			printf("; ");
	}
	return 0;
}