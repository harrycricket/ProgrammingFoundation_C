#include <stdio.h>
#include <stdlib.h>

// cho 1 mảng các số tự nhiên 5, 10, 15, 23, 25, 3, 5, 7, 11, 13
// in ra các snt xuất hiện trong mảng
// I: 5, 10, 15, 23, 25, 3, 5, 7, 11, 13
// P: quét mảng khắp các phần tử trong mảng
// 	  lặp lại 1 câu chuyện: x, mày có ntố k?
// O: 5, 23, 3, 5, 7, 11, 13

// void isPrime(int n); // in ra mày là ntố hay k
int isPrime(int n);
// nhận vào 1 con stn, trả về 1 nếu là snt
// 					   trả về 0 nếu k là snt
void printPrimeList(int a[], int size);


int main(int argc, char *argv[]) {
//	printf("5? %d\n", isPrime(5));
//	int result = isPrime(10);
//	printf("10? %d\n", result);
	
	int a[] = {5, 10, 15, 23, 25, 3, 5, 7, 11, 13};
	printPrimeList(a, 11);
	return 0;
}

void printPrimeList(int a[], int size)
{
	int result;
	
	printf("The array has the values of\n");
	for (int i = 0; i < size; i++)
		printf("%d ", *(a + i));
		
	printf("\nThe list of prime numbers found in this array\n");
	for (int i = 0; i < size; i++)
	{
		result = isPrime(a[i]);
		if (result == 1)		// if (isPrime(a[i]))
			printf("%d ", a[i]);
	}
}

int isPrime(int n)
{
	int divisorCount = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			divisorCount++; // nếu có chia hết cho i thì count++
	// hết for rồi, xét hết ước số rồi
	if (divisorCount == 2)
		return 1;
	return 0;
}