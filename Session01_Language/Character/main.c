#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	/* 
		kiểu ký tự cho phép xài linh hoạt giữa mã số và ký tự
		thích thì chơi mã ASCII, thích thì chơi phần hiển thị
		cặp nháy đơn dùng cho 1 ký tự
		dùng %c để chỉ cho CPU biết cách on-off
		mò vào chip BIOS/ UEFI trên mainboard để tìm cách
		ánh xạ thành kí tự trên màn hình 
		đây là sự phối hợp của CPU + RAM + Keyboard + Printer + VGA Card 
		+ Monitor + HDD/SSD + BIOS/ UEFI 
	*/
	unsigned char firstLetter = 300;
	printf("The first letter of your name is %c\n", firstLetter);
	printf("The ASCII code of the first letter is %d\n", firstLetter);
	return 0;
}