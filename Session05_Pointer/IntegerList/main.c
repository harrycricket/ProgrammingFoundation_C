#include <stdio.h>
#include <stdlib.h>

// hãy lưu mảng 5 con số nguyên 5, -10, 15, 20, -25
void printIntegerList();

// phiên bản oanh tạc tự do, xin vùng RAM chưa ai khám phá --> HEAP
// xin RAM, éo phải khai báo biến
// xin RAM để lưu dữ liệu, k cần đặt tên vùng RAM, biến như bên STACK
// vùng HEAP gọi là vùng nhớ biến động - dynamic - vùng nhớ OBJECT của OOP
// vùng STACK windows quản lí cực kì chặt chẽ - hoạt động theo nguyên tắc 
// LIFO - LAST IN FIRST OUT
// hàm vừa chạy xong, hủy ngay các biến local

void printIntegerListHEAP();
void printIntegerListHEAPV2();

int main(int argc, char *argv[]) {
//	printIntegerList();
	printIntegerListHEAPV2();
	return 0;
}

void printIntegerListHEAPV2()
{
	int *p;	
	p = (int*)malloc(20);
	*p = 5;			//p[0] = 5, 4 bytes đầu = 5
	*(p + 1) = 10;	//p++ được nhưng tui thích p chốt đầu mảng!!! con trỏ tự do nên dùng được
	*(p + 2) = 15;
	*(p + 3) = 20;
	*(p + 4) = 25;

	// in HEAP, lúc này xem mảng
	printf("The array has values of HEAP\n");
	for (int i = 0; i < 5; i++)
	//	printf("%d ", p[i]);
		printf("%d ", *(p + i));
}

void printIntegerListHEAP()
{
	int *p;	//p: pointer, e là cái hộp, biến, e lưu giá trị đặc biệt
			// sẽ trỏ tới cái nào đó, biến int thường sẽ lưu tọa độ của biến int khác
			// = &ten_bien_int_khac
			
			// (int*) địa_chỉ_nào_đó   		(int*)600000;
			// p nằm trong STACK, khai báo trong hàm là nằm trong STACK
			// vấn đề là tao muốn trỏ vượt STACK lên HEAP
//	int tt = 5000;
//	p = &tt;		// trỏ quanh quẩn trong STACK
//	p = (int*)malloc(số_byte_muốn_xin);
//				nên xin bội số của data type mà con trỏ đang trỏ
	p = (int*)malloc(20);	//p = malloc(20);	//20 bytes đã được cấp cho con trỏ int
	// hàm trả về tọa độ của byte đầu tiên trong 20 bytes đã xin
	// hàm trả về địa chỉ của byte đầu trong 20 bytes đã xin
			// malloc là hàm, lệnh xin RAM trên HEAP, khia hoang
			
	// gán giá trị cho các cụm byte (4 bytes 1 cụm)
	p[0] = 1;
	p[1] = 1;
	p[2] = 2;
	p[3] = 3;
	p[4] = 5;
	// in HEAP, lúc này xem mảng
	printf("The array has values of HEAP\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", p[i]);
}


void printIntegerList()
{
	int a[] = {5, -10, 15, 20, -25};	//5 biến * 4 bytes = 20 bytes
	// mảng tĩnh, nằm trong hàm thì sẽ nằm trong STACK
	printf("The array has values of\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", *(a  + i));
	printf("\n");
}