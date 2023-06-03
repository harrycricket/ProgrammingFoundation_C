#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int yob;
	printf("Input year of birth: ");
	scanf("%d", &yob);
	int age = 2022 - yob; // công thức loài người chế ra
	
	if (age >= 18)
		printf("K say k ve. Say thi sao ve. Let's chill\n");
	else // bao hàm việc if (age < 18)
		printf("Hey rich kid. Go home now!!!\n");
		/* else có thêm tính chất loại trừ
			nghĩa là nếu CPU chạy vào hẻm if, 
			xong if thì nó đi luôn, k hỏi else
			khác hoàn toàn việc xài 2 lệnh if độc lập
		*/
	return 0;
}