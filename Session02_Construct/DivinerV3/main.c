#include <stdio.h>
#include <stdlib.h>

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
	scanf("%c", &fL);
	//lf = 'A'...'Z', 'a'...'z', @, #, $, ?...
	//coi A với a đều là a nói chung
	//ta chỉ cần so sánh fL với A là đủ, nếu gõ a thì t convert thành A luôn
	
	if (fL >= 'a' && fL <= 'z')
	// nếu là thường thì convert thành hoa
		fL -= 32;
			
	if (fL == 'A')
		printf("You are not good at joking\n");
		
	if (fL == 'B')
		printf("You are very emotional\n");
		
	if (fL == 'C')
		printf("You are very friendly and approachable\n");
	else 
		printf("Coming soon...\n");
		
	// code chạy sai nếu gõ a thường, k in ra tính cách
	// lỗi do ta chỉ hỏi/ xét chữ A, A khác a về mặt ON_OFF trong mã ASCII
	return 0;
}