#include <stdio.h>
#include <stdlib.h>

/* 
	viết app in ra các số tự nhiên từ 1...100
	IPO: 
	I: k cần đầu vào, rõ hết rồi/ cái tao chưa biết để tao làm thì mới là input
	P: 
	O:
*/
int main(int argc, char *argv[]) {
	printf("The list of integers from 1...100\n");
	printf("Using standard FOR\n");
	for (int i = 1; i <= 100; i++)
		printf("%d  ", i);
		
	printf("\n\nUsing different version FOR\n");
	int count = 1;
	for (;;)
	{
		printf("%d  ", count);
		count++;
		if (count == 101)
			break;
	}
	
	printf("\n\nUsing DO-WHILE\n");
	count = 1; // reset lại trước khi dùng
	do 
	{
		printf("%d  ", count);
		count++; // thiếu là toang
	} while(count <= 100);
	
	printf("\n\nUsing different version DO-WHILE\n");
	count = 1;
	do 
	{
		printf("%d  ", count);
		count++;
		if (count == 101)
			break;
	} while(69 < 96);
	
	printf("\n\nUsing WHILE\n");
	count = 1;
	while (count <= 100)
	{
		printf("%d  ", count);
		count++;
	}
	
	printf("\n\nUsing different version WHILE\n");
	count = 1; //reset cho đúng
	while (1 == 1)
	{
		printf("%d  ", count);
		count++;
		if (count == 101)
			break;
	}
	return 0;
}