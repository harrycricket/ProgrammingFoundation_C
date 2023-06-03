#include <stdio.h>
#include <stdlib.h>

// vẫn viết hàm/ những lệnh chỉ làm 1 việc gì đó/ function
// vẫn biết hàm bình phương

int fV3(); //int fV4(int x);
void fV1();

int main(int argc, char *argv[]) {
//	fV3();
// hàm loại 1 gọi tên em là đủ 				f()
// hàm loại 2 gọi tên em kèm đầu vào là đủ  f(5)
// hàm loại 3 gọi tên em chưa đủ!!! vì em là 1 value
// qua tên hàm và qua lệnh return
//	int result = fV3();
	// giống lệnh char fL = toupper(fL);
//	printf("Result: %d\n", result);
	// vì hàm là 1 value int nào đó nên tao có thể xài mày trong các biểu thức, câu lệnh khác
	// định luật bắc cầu trong toán học ~ value ~ đổ ngang giá trị
	// a = b; b = c -> a = c
//	printf("Result: %d\n", fV3()); // vì hàm là một giá trị
	printf("Result: %d\n", fV1());
	fV1();
	return 0;
}

//int fV3()
//{
//	// vì k có chỉ định rõ đầu vào ở () 
//	// do đó ta phải khai báo đầu vào ở trong hàm và scanf()
//	// k có input lấy cái mẹ gì tính?
//	int x, y;
//	printf("Input an integer to get ^2: ");
//	scanf("%d", &x);
//	
//	y = x * x;
//	printf("The function y = f(x) = x^2; y = f(%d) = %d\n", x, y);
//}

void fV1()
{
	printf("This function returns no value. It's a void function\n");
}

int fV3() 
{
	// vì k có chỉ định rõ đầu vào ở () 
	// do đó ta phải khai báo đầu vào ở trong hàm và scanf()
	// k có input lấy cái mẹ gì tính?
	int x, y;
	printf("Input an integer to get ^2: ");
	scanf("%d", &x);
	
	y = x * x;
	printf("The function y = f(x) = x^2; y = f(%d) = %d\n", x, y);
	return y;   // tên hàm ở trên là một biến, mang giá trị của y 
				// y = f(...) = xử lí đi = retur value
				// fV3() chính là 1 value, 1 con số, 1 biến mang value
				// qua lệnh return, return chính là dấu = gán giá trị
				// cho tên hàm
				// tao xử lí info và tao ném cho mày kết quả cầm nắm được
	// hành động k printf() kết quả mà chỉ return thì nó ~~ ngoài đời
	
}


