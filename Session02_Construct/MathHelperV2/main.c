#include <stdio.h>
#include <stdlib.h>

/* 	viết app hỗ trợ bé làm các phép toán cơ bản
	app sẽ cung cấp tính năng menu, 1, 2, 3, 4,..., quit
	ai muốn chơi tính năng nào thì chọn con số đó
	1. tính diện tích hình tròn      IPO
	2. tính diện tích hình chữ nhật  IPO
	3. tính ...						 IPO
	10. quit
	IPO của cả bài
	cần gì bài menu này tổng quát???
	I: cho tao cái lựa chọn của mày
	O: tùy chọn gì thì sẽ có output tương ứng
	biến là danh từ choice/ option/ menuItem
	P: xử lí, tùy choice là gì thì ta hành xử tương ứng menu
	có nhiều choice 1 2 3 4 5... -> switch case/ if else
*/
int main(int argc, char *argv[]) {
	
	int choice;
	float radius, area;
	
	do 
	{
		printf("Welcome to Math Helper Program\n");
		printf("Please choose the following functions to play with\n");
		printf("1. Compute the disk area\n");
		printf("2. Compute the rectangle area\n");
		printf("4. Quit\n");
		printf("\nChoose 1 to 4: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("You choose 1 to compute the disk area\n");
				printf("Please input a disk's radius: ");
				scanf("%f", &radius);
				area = 3.14 * radius * radius;
				printf("The disk with r = %.2f has the area of %.2f\n", radius, area);
				break;
				
			case 2:
				break;
				
			case 3:
				break;
				
			case 4:
				printf("Bye, see you next time\n");
				break;
				
			default:
				printf("Please choose 1 to 4\n\n");
		}
	} while (choice != 4);
	// choice đúng là chưa bằng 4 thì ăn/ chơi tiếp 
	
	
	
	
	
	
	return 0;
}