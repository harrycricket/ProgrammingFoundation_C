#include <stdio.h>
#include <stdlib.h>

int yob; //biến toàn cục, gắn giá trị lúc khai báo hoặc gán sau đều được
// yob = 2002;		mày phải thuộc một hàm nào đó

void printYob();
void printfCurrentYob();

int main(int argc, char *argv[]) {
	printYob(); // hàm của ta xem như là 1 lệnh printf(), scanf()
	printfCurrentYob(); // in năm sinh mới nhất
	printf("You yob in main %d\n", yob);
	return 0;
}

void printYob()
{
	yob = 2002; //biến toàn cục hàm có quyền xài
	printf("Your yob = %d\n", yob);
}

void printfCurrentYob()
{
	yob = 2003; // tui cũng có quyền xài biến cục bộ
	printf("Your current yob: %d\n", yob);
}