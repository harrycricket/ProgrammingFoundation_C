#include <stdio.h>
#include <stdlib.h>

// viết app mô phỏng cái app Calculator của Windows
// mời user chọn 1 món trong nhiều món
// IPO: 
// I: đầu tiên, bạn chọn gì, lưu lại/ mời gọi
// int choice;

double computeRectangleArea(double length, double weight);

int main(int argc, char *argv[]) {
	int choice;
	double radius, area;
	double length, weight;
	do
	{
		printf("\n\n*************************************************\n");
		printf("* Welcome to Math Helper Program				 \n");
		printf("* Choose the following functions to play with:   \n");
		printf("* 1. Compute the disk's area 					 \n");
		printf("* 2. Compute the rectangle's area 				 \n");
		printf("* 3. Compute the triangle's area 				 \n");
		printf("* 4. Quit 										 \n");
		printf("Choose 1 to 4: ");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
				printf("You choose to compute the disk's area\n");
				printf("Input a radius: ");
				scanf("%lf", &radius);
				area = 3.14 * radius * radius;
				printf("The disk's with radius = %.2lf has the area of %.2lf\n", radius, area);
				break;
			case 2:
				printf("You choose to compute the rectangle's area\n");
				printf("Input the length and weight of the rectangle: ");
				scanf("%lf%lf", &length, &weight);
				printf("The rectangle's are = %.3lf", computeRectangleArea(length, weight));
				break;
			case 3:
				printf("You choose to compute the triangle's area\n");
				break;
			case 4: 
				printf("See you next time!\n");
				break;
			default:
				printf("Please choose 1 to 4!\n");
				break;
		}
	} while (choice != 4);

	
	return 0;
}

double computeRectangleArea(double length, double weight)
{
	double area = length * weight;
	return area;
}