#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*	
	viết app tính diện tích CM và in ra kết quả
	Formula: S = length * width  
*/
int main(int argc, char *argv[]) {
	int width, length, area;
	printf("You are required to input the size of a rectangle \n");
	printf("Input the width: ");
	scanf("%d", &width);
	printf("Input the length: ");
	scanf("%d", &length);
	area = width * length;
	printf("The area of rectangle(%d, %d) is %d\n", width, length, area);
	
	return 0;
}