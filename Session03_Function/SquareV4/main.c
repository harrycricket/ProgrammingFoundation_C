#include <stdio.h>
#include <stdlib.h>

/* 
	viết đoạn code theo style hàm tính bình phương của 1 con số
	IPO
	I: 1 con số x
	P: x * x
	O: y = x * x
*/
int fV4(int x); //100% tương thích hàm toán học y = f(x) = x^2
				//chỉ còn thiếu phần bình phương
				//lát hồi ở dưới ta làm nốt
				
int main(int argc, char *argv[]) {
	// xài hàm có giá trị trả về, vẫn gọi tên em
//	int result = fV4(5);
//	printf("result: %d\n", result);
//	printf("result: %d\n", fV4(10));
//  linh hoạt value đầu vào thì phải nhập từ bàn phím
	int n;
	printf("Input a number to get ^2: ");
	scanf("%d", &n);
	printf("result: %d\n", fV4(n));
	
	return 0;
}

int fV4(int x)
{
	// coi như x đã có rồi, quy ước hàm nhận vào x, cứ giả bộ x sẽ có sau
	// cứ xử lí trên x tương đương với tương lai sẽ xử lí trên value thật
	// xử lí trên công thức chính là xử lí trên value thật sau này
	// khi xài hàm thì phải đưa x vào. Y chang xài máy xay sinh tố
	// đưa trái cây, giả bộ trái cây có rồi, ta lôi ra xài
	// chỉ có thằng ngáo mới scanf(x) ở đây
//	int y = x * x;  // mày đưa x tao bình phương, nhận kết quả đi
//	return y;		// tao ném ra bình phương
	return x * x; 	// cần value để gán cho tên hàm 
					// 2 biến 2 con số nhân nhau thì ra một value int
}