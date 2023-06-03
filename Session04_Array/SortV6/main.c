#include <stdio.h>
#include <stdlib.h>

// sắp xếp mảng các số nguyên giảm dần
// hoán đổi thân xác - dùng biến trung gian để lưu giá trị cũ
//void swap(int a, int b); // đưa cho tao 2 con số rồi tao hoán đổi cho
//				5	   10
//			x = 5	y = 10
// truyền tham trị - pass by value
// bản gốc k đổi x, y mà chỉ đổi trong hàm a, b mà thôi
void swap(int *a, int *b);
// 	 main()		&x		&y
// 	 main()		&a		&b

// SẮP XẾP 1 MẢNG GIẢM DẦN
void sortArray(int a[], int size);
// hàm nhận vào 1 mảng có size phần tử
// k có size phần tử thì sao dùng for đc


int main(int argc, char *argv[]) {
//	int x = 10, y = 100;
//	printf("Before swapping, x = %d; y = %d\n", x, y);
//	swap(&x, &y);
//	printf("After swapping, x = %d; y = %d\n", x, y);
	int a[] = {5, -10, 15, -20, 25, 1000, 1};
	sortArray(a, 7);
	return 0;
}
// PASS BY REFERENCE/ POINTER

void swap(int *a, int *b)
{
	int t = *a; 	// lưu lại giá trị cũ của biến ở xa xa x ngoài main()
	*a = *b;
	*b = t;
}

//void sortArray(int a[], int size)
//{
//	printf("The array before sorting:\n");
//	for (int i = 0; i < size; i++)
//		printf("%d  ", a[i]);
//	for (int i = 0; i < size - 1; i++)
//		for (int j = i + 1; j < size; j++)
//			if (a[i] < a[j])
//			{
//				int t = a[i];
//				a[i] = a[j];
//				a[j] = t;	
//			}	
//				
//	printf("\nThe array after sorting:\n");
//	for (int i = 0; i < size; i++)
//		printf("%d  ", *(a + i));
//				
//}

void sortArray(int a[], int size)
{
	printf("The array before sorting:\n");
	for (int i = 0; i < size; i++)
		printf("%d  ", a[i]);
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (a[i] < a[j])
				swap(&a[i], &a[j]);
				
	printf("\nThe array after sorting:\n");
	for (int i = 0; i < size; i++)
		printf("%d  ", *(a + i));
				
}