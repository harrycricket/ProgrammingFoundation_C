#include <stdio.h>
#include <stdlib.h>

// viết app in ra tổng của dãy số sau: 1! + 2! + 3! + 4! + 5!
// bài phức tạp, ta chẻ nhỏ ra, sự lặp lại của role tinhGiaiThua() - tách hàm

int getFactorial(int n); 

int main(int argc, char *argv[]) {
//	printf("0! = %d\n", getFactorial(0));
	printf("5! = %d\n", getFactorial(5));
//	getFactorial(5);

//	REUSE bắt đầu
// tính tổng 1! + 2! + 3! + 4! + 5!
	int sum = getFactorial(1) + getFactorial(2) + getFactorial(3) + getFactorial(4) + getFactorial(5);
	
	printf("Sum of factorial chain from 1! to 5! = %d\n", sum);
	return 0;
}
int getFactorial(int n)
{
	int acc = 1;
	if (n == 0 || n == 1)
		return 1;
	
	for (int i = 2; i <= n; i++)
		acc *= i;
	
	printf("print inside a function: %d! = %d\n", n, acc);
	// câu lệnh in kq xử lí trong hàm có return
	// là k nên vì ảnh hưởng đến tính reuse
	return acc;
}

/*
int getFactorial(int n)
{
	int acc = 1;
	if (n == 0 || n == 1)
		return 1;
	
	for (int i = 2; i <= n; i++) // chưa xét n < 0
		acc *= i;
		
	return acc;
}
*/