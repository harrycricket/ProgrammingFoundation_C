#include <stdio.h>
#include <stdlib.h>

// lưu trữ một bài thơ trên đĩa cứng HDD/SSD
// ta làm 2 hàm void, trọn vẹn trong hàm cho gọn gàng để thí nghiệm
// làm chuẩn thì ta phải có tham số hàm đẻ mang tính linh hoạt/ reuse - bàn sau

void writeAPoem();		// tạo mới tập tin có data là bài thơ, lưu trên đĩa
void readAPoem();		// mở bài thơ sẵn có trên đĩa, in ra màn hình - Ctrl-Open

int main(int argc, char *argv[]) {
//	writeAPoem();
	readAPoem();
	return 0;
}

void readAPoem()
{
	FILE *f = fopen("Tu-ay.txt", "r");	// e muốn xem data từ đĩa
	char ch;	// biến dùng để đọc từng chữ trong bài thơ
				// đọc đến đâu thì in đến đó
	do 
	{
		ch = fgetc(f);	// hàm đọc từng ký tự từ tập tin, trả về ký tự đọc được
		printf("%c", ch);
		
	} while (ch != EOF); 	//End of file
	fclose(f);
}

void writeAPoem()
{
	FILE *f = fopen("Tu-ay.txt", "a");	// mở, tạo 1 tập tin
	fprintf(f, "Tu ay trong toi bung code gao\n");
	fprintf(f, "Man hinh mau do cua con tim\n");
	fprintf(f, "Hoi toi ngap tran do-for-if\n");
	fprintf(f, "Rat nhi phan va ron tieng do la\n");
	fclose(f);	// đóng tập tin lại
	printf("The poem is saved successfully.\n");
}
