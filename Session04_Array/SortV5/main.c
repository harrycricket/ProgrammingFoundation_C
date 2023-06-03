#include <stdio.h>
#include <stdlib.h>

// cho mảng 5 con số, hãy sắp xếp theo thứ tự tăng dần

int main(int argc, char *argv[]) {
	int a[] = {5, -10, 15, -20, 25, -500, 10, 2000, -3000};
	int t;
	// ta lấy [0], quét từ [1]
	// ta lấy [1], quét từ [2]
	// ta lấy [2], quét từ [3]
	// ta lấy [3], quét từ [4]	
	// dừng vì [3] là gần sát cuối, so với cuối nữa là xong
	// lấy đến áp chót và quét với chót mảng là xong
	printf("The array before sorting ascending\n");
	for (int i = 0; i < 9; i++)
		printf("%5d", a[i]);
	for (int i = 0; i < 9 - 1; i++)
	{
		for (int j = i + 1; j < 9; j++)
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	}
	printf("\nThe array after sorting ascending\n");
	for (int i = 0; i < 9; i++)
		printf("%5d", a[i]);
	return 0;
}