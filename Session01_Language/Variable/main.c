#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// tính tuổi của bạn khi có trong tay năm sinh

int main(int argc, char *argv[]) {
	int yob = 2002; 
	/* 
		yob là 1 variable vì chứa value khác nhau theo từng người
		máy tính lưu giùm tui năm sinh 2002 qua tên gọi yob, 
		cất ở trong RAM dưới dạng ON/OFF nhị phân 
	*/
	printf("Your year of birth is: %d\n", yob); 
	
	int grade = 10;
	printf("Your current score is: %d\n", grade);
	
	/* 
		hỏi xem 2 con số nằm ở đoạn nào trong RAM
		địa chỉ của biến, vùng đất 4 byte nằm ở đoạn nào trong RAM, tọa độ biến
	*/
	printf("The location of yob is: %u\n", &yob);
	//biến yob bắt đầu từ byte số mấy
	printf("The location of grade is: %u\n", &grade);
	//biến grade bắt đầu từ byte số mấy
	
	int age = 2022 - yob;
	/*
		gán giá trị cho biến/ vùng ram - on/ off vùng ram
		"=": assign operator - toán tử/ phép toán cho ai giá trị 
		int age: xin vùng ram, DECLARE A VARIABLE 
		phép toán, tính toán trên biến
	*/
	printf("As I guess, your age is %d\n", age);
	/*
		cách viết này gọi là hard code - code cứng value/ cố định 
		
	*/
	return 0;
}