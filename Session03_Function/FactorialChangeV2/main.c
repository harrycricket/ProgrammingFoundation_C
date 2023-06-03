#include <stdio.h>
#include <stdlib.h>

// viết app in ra tổng của dãy số sau: 1! + 2! + 3! + 4! + 5!
// bài phức tạp, ta chẻ nhỏ ra, sự lặp lại của role tinhGiaiThua() - tách hàm

int getFactorial(int n); 

int main(int argc, char *argv[]) {

	int sum = 0;
	for (int i = 1; i <= 5; i++)
		sum += getFactorial(i);
		
//	int sum = getFactorial(1) + getFactorial(2) + getFactorial(3) + getFactorial(4) + getFactorial(5);
	
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
	
	return acc;
}
