#include <stdio.h>
#include <string.h>

// viết code trực tiếp trong main, k tách hàm
// so sánh 2 chuỗi xem 2 chuỗi thắng thua ra sao
// mục tiêu sau này sắp xếp danh sách sinh viên theo tên
// nếu tên thứ [i] > tên thứ [j] thì đổi tên cho nhau
// tên người thì là mảng char[]

// tên người thì là mảng char[]
// so sánh 2 mảng thế nào
int main(int argc, char** argv) {
	char s1[50] = "Ahihi";
	char s2[50] = "Ahihi";
	int r = s1 == s2;		// so sánh 2 tên xem sao
	// == là phép so sánh, kết quả trả về phải là 0 (sai) 
	printf("r1: %d\n", r);	// móa, k bằng nhau dù 2 chuỗi y chang
	// 2 tên mảng, trỏ 2 địa chỉ khác nhau, bằng thế éo nào được
	// CẤM TUYỆT ĐỐI XÀI TÊN MẢNG ĐEM ĐI SO SÁNH VÌ SO SÁNH 2 ĐỊA CHỈ K CÓ Ý NGHĨA
	r = strcmp(s1, s2);
	printf("r2: %d\n", r);	//sure chúng mày phải bằng nhau vì cùng là Ahihi
							// hàm nhận vào mảng, tự for(i) để kiểm tra
	// r = 0 phải hiểu là đây là hiệu của 2 phần tử mảng trừ nhau
	// nếu trừ nhau == 0 nghĩa là 2 mảng bằng nhau
	// so sánh này có phân biệt hoa thường
//	s1 = "Ahihi";	// tên mảng là địa chỉ/ cần địa chỉ chứ k cần chuỗi
					// gắn lúc khai báo hoặc dùng hàm
	strcpy(s1, "Ahihi");
	strcpy(s2, "AHihi");	
	r = strcmp(s1, s2);		// so từ trái sang phải, nếu khác thì dừng và k quan tâm phần còn lại
	printf("r3: %d\n", r);
	
	strcpy(s1, "Ahihi");
	strcpy(s2, "z");	
	r = strcmp(s1, s2);	
	printf("r4: %d\n", r);
	
	strcpy(s1, "Ah1");
	strcpy(s2, "Ah");	
	r = strcmp(s1, s2);	
	printf("r5: %d\n", r);
	
	strcpy(s1, "Hello");
	strcpy(s2, "HELLO");	
	r = strcmp(s1, s2);	
	printf("r6 - case sensitive: %d\n", r);
	
	r = stricmp(s1, s2);	
	printf("r7 - ignore case: %d\n", r);
	
//	if (strcmp(s1, s2) > 0) hàm ý s1 > s2
//	swap 2 tên cho nhau
	return 0;
}