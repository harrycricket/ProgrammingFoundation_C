#include <stdio.h>
#include <stdlib.h>

/*
	viết app nho nhỏ in ra các số chẵn từ 1...100
	IPO: 
	I: rõ rồi
	P: tìm ra được số chẵn từ 1...100
		nhỏ nhất là 2 rồi nhảy cách 2
	O: in ra các số chẵn đó
*/
int main(int argc, char *argv[]) {
	printf("The list of even numbers from 1..100\n");
//	k mang ý nghĩa của số chẵn
	for (int i = 2; i <= 100; i += 2)
	{
		printf("%d", i);
		if (i < 100)
			printf("; ");
	}
	printf("\n");

	for(int i = 1; i <= 100; i++)
		if (i % 2 == 0)
			printf("%5d", i);
	return 0;
}