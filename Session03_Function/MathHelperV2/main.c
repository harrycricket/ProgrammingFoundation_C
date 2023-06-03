#include <stdio.h>
#include <stdlib.h>

// viết app mô phỏng cái app Calculator của Windows
// mời user chọn 1 món trong nhiều món
// IPO: 
// I: đầu tiên, bạn chọn gì, lưu lại/ mời gọi
// int choice;

void printMenu();
double computeDiskArea(double radius);
double computeRectangleArea(double length, double weight);

int main(int argc, char *argv[]) {
	int choice;
	double radius, area;
	double length, weight;
	do
	{
		printMenu();
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
				printf("You choose to compute the disk's area\n");
				printf("Input a radius: ");
				scanf("%lf", &radius);
				printf("The disk's with radius = %.2lf has the area of %.2lf\n", radius, computeDiskArea(radius));
				break;
			case 2:
				printf("You choose to compute the rectangle's area\n");
				do 
				{
					printf("Input the length and weight of the rectangle (length > weight): ");
					scanf("%lf%lf", &length, &weight);
				} while (length <= weight);
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

double computeDiskArea(double radius)
{
	double area = 3.14 * radius * radius;
	return area;
}

double computeRectangleArea(double length, double weight)
{
	double area = length * weight;
	return area;
}

void printMenu()
{
	printf("\n\n*************************************************\n");
	printf("* Welcome to Math Helper Program				 \n");
	printf("* Choose the following functions to play with:   \n");
	printf("* 1. Compute the disk's area 					 \n");
	printf("* 2. Compute the rectangle's area 				 \n");
	printf("* 3. Compute the triangle's area 				 \n");
	printf("* 4. Quit 										 \n");
	printf("Choose 1 to 4: ");
}

