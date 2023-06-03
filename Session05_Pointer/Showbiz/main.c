#include <stdio.h>
#include <stdlib.h>

// Trấn Thành đem 5k$ đi Mỹ, cùng Hari sắm đồ
// Trấn Thành xài tiền là bình thường
// Hari lấy ví của TT xài tiền cũng bt luôn

int main(int argc, char *argv[]) {
	int tt = 5000; //5k đem đi dùng
	// giả bộ TT mua 1 bộ đồ tốn 1K hỏi TT còn bao nhiêu?
	// mô phỏng được việc TT tiêu biến
	tt -= 1000;
	
	// Hari xài thì ví TT phải giảm
	// TT đưa ví cho Hari tự do mua
	int* hari = &tt; // hành động đưa ví cho ai đó
					 // &tt tọa độ, địa chỉ của hộp tt đang chứa 4k
					 // cho vị trí của ví 
	// int* là 1 data type mới dùng để đại diện, lưu trữ danh bạ hay địa chỉ của biến khác
	// int khác. Địa chỉ của biến cũng là con số, k phải số bt mà còn mang ý nghĩa địa chỉ
	// ktra xem đúng Hari nắm trong tay cái ví TT chưa khi đã chỉ vị trí
	printf("TT's wallet at: %u\n", &tt);
	printf("TT's wallet at: %u\n", hari);
	return 0;
}