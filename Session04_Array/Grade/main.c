#include <stdio.h>
#include <stdlib.h>

// tui muốn lưu 10 cột điểm của môn học

int main(int argc, char *argv[]) {
	float c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
	// khai báo lẻ dễ làm nhưng tốn sức, tốn thời gian 
	float c[10]; 	// giống cách trên là có được 10 biến, cực nhanh 
						// muốn bao nhiêu biến chỉ thay trong [bao nhiêu biến?]
	c[0] = 10.0;
	c[1] = 9.0;
	c[2] = 8.0;
	
	printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", c[0], c[1], c[2], c[3], c[4]);
	return 0;
}