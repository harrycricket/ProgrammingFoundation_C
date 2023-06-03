#include <stdio.h>
#include <stdlib.h>

int getFactorialV4(int n); // soái ca

int main(int argc, char *argv[]) {
//	printf("x! = %d\n", getFactorialV4(0));
//						// mày là 1 value, xài luôn, khỏi cần gán biến khác
//	printf("x! = %d\n", getFactorialV4(6));
	getFactorialVWrong(10);
	return 0;
}

int getFactorialVWrong(int n)	
{
	int acc = 1;
	
	if (n == 0 || n == 1)
		acc = 1; // xử lí, k return sớm thì sao! thì phía sau vẫn chạy cho n >= 2

	printf("CPU is still here of n >= 2!!!");	
	for (int i = 2; i <= n; i++)
		acc *= i;
	//	printf("%d! = %d\n", n, acc); // k nên in khi hàm trả về giá trị
	return acc;

}
	
int getFactorialV4(int n)	
{
	int acc = 1;
	
	if (n == 0 || n == 1)
		return 1; // biết ngay 0! = 1! = 1, thoát luôn
		
	// bỏ else luôn mới ngầu!! Return sớm bao hàm sự loại trừ, thoát luôn
	// phần còn lại là else rồi, k cần else nữa
	
	for (int i = 2; i <= n; i++)
		acc *= i;
	//	printf("%d! = %d\n", n, acc); // k nên in khi hàm trả về giá trị
	return acc;

}	

/*
int getFactorialV4(int n)	
{
	int acc = 1;
	return 69; // vừa vàm hàm có giá trị luôn, k care phần còn lại
	
	if (n == 0 || n == 1)
		return 1; // biết ngay 0! = 1! = 1, thoát luôn
	else
	{
		for (int i = 2; i <= n; i++)
			acc *= i;
		//	printf("%d! = %d\n", n, acc); // k nên in khi hàm trả về giá trị
		return acc;
	}
	printf("Cho anh gan em them chut nua!");
	// câu lệnh này CPU k chạm được do đã return ở trên rồi	
}	
*/

/*
	
int getFactorialV4(int n)	
{
	int acc = 1;

	if (n == 0 || n == 1)
		acc = 1;
	else
		for (int i = 2; i <= n; i++)
			acc *= i;
	
//	printf("%d! = %d\n", n, acc); // k nên in khi hàm trả về giá trị
	return acc;
}	
*/
	



