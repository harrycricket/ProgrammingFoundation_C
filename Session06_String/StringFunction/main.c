#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ta tự viết hàm copy 2 chuỗi, độ lại hàm strcpy()
// lý do viết hàm vì ta k được gán trực tiếp 2 mảng cho nhau vì 
// tên 2 mảng là 2 con trỏ má mì, phải chốt/ quản lý đúng mảng của mình, 
// k cho trỏ lung tung như con trỏ thuần chủng khai báo bằng dấu *.
// Lỡ gắn mảng nào, gắn chặt mảng đó
// gán chuỗi cho nhau bản chất là copy value của từng biến char trong mảng này
// gán sang mảng kia
// 2 dãy chung cư đối diện mặt nhau ném đồ sang

//void strcpy160205(char dest[50], char src[50]);		// k hay khi khai báo kiểu này
//void strcpy160205(char dest[], char src[]);			// hay hơn kiểu trên 1 chút
void strcpy160205(char *dest, char *src);				// chuẩn nhất
void removeChar();										// tạm thời dùng trong nội bộ hàm cho dễ hiểu
void removeCharV2();
void removeCharV3();	 								// cho tao chỗ mày muốn xóa, tao xóa đúng ký tự, truyền tham số int pos muốn xóa	
void removeCharV4();									// cho chuỗi Ahihi123DoNgok, hãy xóa tất cả các con số trong chuỗi

int main(int argc, char *argv[]) {
//	char name[50], n[50] = "Ahihi do ngoc";
//	// muốn copy Ahihi do ngoc sang mảng name
//	// k cho dùng dấu "=" gán mảng thì dùng hàm strcpy() của người ta hoặc dùng hàm strcpy160205() của mình tự tạo 
////	strcpy(name, n);		// hàm nhà người ta
//	strcpy160205(name, n);	// hàm nhà mình
//	printf("Your name: ");
//	puts(name);
	removeCharV4();
	return 0;
}

// xóa tất cả các con số trong mảng, xóa nhiều lần, dồn nhiều lần
// dùng for duyệt từng [i] để biết có cần xóa k, nếu cần thì xóa
// dồn lên là 1 vòng for từ pos đến cuối mảng
// for ngoài lấy được từng ký tự, để biết có cần xóa [i] k

void removeCharV4(){
	char n[50] = "Ahihi123DoNgok";
	int pos, i;
	for (int i = 0; i < strlen(n); i++)		// đi hết mảng để hỏi từng ký tự có là số hay k
		if (n[i] >= '0' && n[i] <= '9')		// mày là số, xứng đáng xóa tại vị trí i = pos đó
		{	
			for (int j = i; j < strlen(n) ; j++)		// i là pos nên j bắt đầu từ i
				n[j] = n[j + 1];
				// dồn xong rồi thì theo lẽ thường i sẽ đi tiếp qua thằng kế
				// nhưng tình huống này có thể là thằng i-pos được dồn lên lại là một con số
				// i đi tiếp trong chuỗi là bị sót con số vừa dồn lên đúng vị trí i
				// k cho i đi lên sau khi dồn vì đề phòng chỗ pos lại có con số, xảy ra khi nhiều số gần nhau
			i--;
		}
	printf("After removing numbers in the string: ");
	puts(n);	
	
}

void removeCharV3(){
	char n[50] = "SOS$#Ahihi"; 		// tui muốn xóa #, vị trí 4 tính từ 0
	int pos = 4; 					//scanf (vị trí muốn xóa)
	for (int i = pos; i < strlen(n); i++)
		n[i] = n[i + 1];
	printf("After removing #: ");
	puts(n);
}

void removeCharV2(){
	char n[50] = "A1hihi";
	for (int i = 1; i < strlen(n); i++)
		n[i] = n[i + 1];
	printf("After removing 1: ");
	puts(n);
}

void removeChar(){
	char n[50] = "A1hihi";	// dài 6, xài 7 vì còn NULL ở cuối	-	A 1 h i h i NULL
	// xóa số 1, biết trước tại vị trí 1
	// n[0] giữ nguyên
	n[1] = n[2]; 	// chỗ số 1 thay bằng thằng đứng sau, chữ h đi lên chỗ [1] nhưng h ở [2] vẫn còn
					// vùng RAM nằm cố định tỏng RAM, biến cố định tọa độ nhưng value được đổi
	n[2] = n[3];
	n[3] = n[4];
	n[4] = n[5];
	n[5] = n[6];
	printf("After removing 1: ");
	puts(n);
}

// dest: sẽ trỏ vào đầu 1 mảng cần đổ data vào
// src: trỏ mảng đang có data, chữ, cần ném cho ai đó
// con trỏ: tao trỏ đầu mảng

// TRUYỀN THAM CHIẾU VÌ HÀM SỬA BÊN NGOÀI BỊ ẢNH HƯỞNG
void strcpy160205(char *dest, char *src){
	// đi từ đầu đến cuối chuỗi gốc rồi bế từng cháu qua bên kia
	for (int i = 0; i <= strlen(src); i++)
		dest[i] = src[i];
}
