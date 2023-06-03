#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /*
					mở cốp xe lấy hàng - cái hòm chứa đồ chơi dùng nhiều lần				
					đây là tập tin trên HDD, SSD chứa các hàm
					các xử lí có sẵn mà ta lôi ra xài
					ta cần biết hòm nào chứa đồ gì
					tên hòm.h ~~ các cốp xe chứa đồ chơi
					tên món đồ chơi là các hàm nằm trong cốp xe
					ctype.h, string.h, math.h...
					~~ các cốp xe chứa các loại hàng khác nhau
					đã mở thì lấy hàm ra mà xài
					.h được gọi là LIBRARY - Thư viện/ nơi chứa nhiều đồ chơi dùng chung 
					để xài lại nhiều lần
				  */

/*  viết app nho nhỏ in ra tính cách của bạn dựa theo tên gọi
	dùng kí tự đầu trong tên gọi để luận ra tính cách
	áp dụng công thức IPO
	để bói được tính cách, làm được bài này, ta cần gì?
	INPUT: kí tự đầu trong tên!!!
	PROCESS: tùy kí tự tên là gì: A, B, C, D... 
			 thì ra sẽ in/ ghép với tính cách đã được tổng kết
		if (chữ cái là A) thì tính cách là...
		if (chữ cái tên đúng là B) thì tính cách là...
		
	OUPUT: in ra tính cách tương ứng - printf("câu gì đó");
	TIPS: cứ có bao nhiêu input là ta cần bấy nhiêu biến
		  cứ có output thì sẽ có xác suất cần thêm biến để lưu output
		  (trừ trường hợp output là in câu gì đó thì k cần biến)
		  phần thuật toán xử lí/ process có khả năng cần thêm biến trung gian 
		  để lưu các giá trị trong quá trình tính toắn
		  
*/	
int main(int argc, char *argv[]) {
	// input: chữ cái đầu trong tên gọi
	char fL; //firstLetter - camel case notation
	/*  process: có tên thì if tương ứng và in ra 
		ouput: chỉ in kq, k cần biến
		có biến thì cần value: hoặc gán ngay - hard code hoặc  nhập từ bàn phím
	*/
	printf("Welcome to MAC diviner.\n");
	printf("You are required to input the first letter in your first name.\n");
	printf("Then I will show you your destiny\n");
	printf("Input your char: ");
	scanf("%c", &fL); /* nếu gõ hoa thì ok nhưng gõ thường thì phải convert thành hoa rồi if
					  if (thường) - 32 về Hoa
					  */
	fL = tolower(fL); //hàm là quy tắc biến đổi cái gì đó để ra được cái gì mới
	if (fL == 'a')
		printf("You are not good at joking\n");
		
	if (fL == 'b')
		printf("You are very emotional\n");
		
	if (fL == 'c')
		printf("You are very friendly and approachable\n");
		
	// code chạy sai nếu gõ a thường, k in ra tính cách
	// lỗi do ta chỉ hỏi/ xét chữ A, A khác a về mặt ON_OFF trong mã ASCII
	return 0;
}