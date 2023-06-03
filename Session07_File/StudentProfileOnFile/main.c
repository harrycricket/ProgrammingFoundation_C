#include <stdio.h>
#include <stdlib.h>

// hôm nay ta sẽ lưu 1 hồ sơ sv xuống tập tin
// --> Write/ tạo tập tin với data được lưu lại
// Ngày mai ta sẽ mở hồ sơ này ra xem
// --> Đọc thông tin từ tập tin đem vào RAM xử lí tiếp

void saveAChar();
void openAChar(); 	// mở tập tin char.txt xem có gì, xem bằng code chứ k xem bằng notepad
					// in ra màn hình, READ VÀO RAM CTRL-OPEN
void openChars();	// đọc nhiều hơn 1 kí tự, vì tập tin sẽ có nhiều kí tự
					// hàm đọc tập tin fgetc chỉ đọc 1 kí tự từ đầu tập tin thôi
					// muốn đọc nhiều kí tự thì gọi hàm này nhiều lần --> tức là LOOP
void openCharsV2();
void saveADocument();	// hàm lưu luôn một đoạn văn. Đoạn văn nhập từ bàn phím 
						// nâng cấp so với save 1 ký tự

int main(int argc, char *argv[]) {
//	saveAChar();
//	openAChar();
//	openChars();
//	openCharsV2();
	saveADocument();

	return 0;
}

// gõ 1 đoạn văn từ bàn phím, lưu xuống đĩa
// khó: khi nào thì kết thúc nhập? Dấu hiệu nào để biết dừng nhập
// dùng ký tự $ # cũng là 1 cách, k hay vì $, # cũng là ký tự xứng đáng xuất hiện trong văn bản 
// có cách kết thúc mà k ảnh hưởng tới content đã gõ
// lí tự đánh dấu mà k ảnh hưởng nội dung
// Ctrl + S chơi ngầu luôn, dùng kết thúc việc nhập
// tìm cách bắt cụm phím Ctrl + S, Ctrl phím nào đó được gọi là NON-PRINTABLE 
// gõ mà k in ra màn hình, gõ mang ý nghĩa lệnh nào đó, tín hiệu nào đó
// theo thiết kế PC, thì tổ hợp phím cũng phải có 1 mã số nào đó
// máy còn biết làm gì tiếp

// mình gõ bài thơ, cái đơn thì scanf phải ấn enter sau mỗi cú gõ
// còn loại lệnh khác: cứ gõ sẽ gán biến mà chưa cần nhấn enter --> getchar();

void saveADocument()
{
	char ch;		// đón từng kí tự từ bàn phím
	FILE *f = fopen("den_vau.txt", "w");
	printf("Input your document. Ctrl-S to stop & save your document.\n");
	do {
		ch = getchar();		// cứ gõ, k cần nhấn enter
		// có được từng kí tự rồi thì đẩy ra tập tin ngay
//		fprintf(f, "%c", ch);
		fputc(ch, f);	// y chang lệnh fprintf();
	} while (ch != 19); // còn chưa gõ tổ hợp Ctrl S thì cứ nhập tiếp đi
				// nhập đến đâu thì in ra tập tin đến đó
				// lệnh fprintf() chạy liên tục cho từng kí tự
				// có thể dùng lệnh khác: fputc();
	fclose(f);
	printf("The document is save successfully!\n");
}

void openCharsV2()
{
	char ch;
	FILE *f = fopen("char.txt", "r");
	printf("The char .txt contents: %c\n", ch);
	do 
	{
		ch = fgetc(f);
		printf("%c", ch);
	} while (ch != EOF);
	fclose(f);
}

void openChars()
{
	char ch;
	FILE *f = fopen("char.txt", "r");
	printf("The char .txt contents:\n");
	ch = fgetc(f);		// đọc 1 kí tự rồi in ra
	printf("%c", ch);
	
	ch = fgetc(f);		// đọc thêm 1 kí tự nữa kế bên rồi in ra
	printf("%c", ch);
	fclose(f);
}

void openAChar()
{
	char ch;
	FILE *f = fopen("char.txt", "r"); 	// e muốn xem tập tin/ read
	// nhớ ktra f có NULL k, tính sau, coi như chạm được vào tập tin
	ch = fgetc(f);	// hàm đọc 1 kí tự từ tập tin, trả về mã ASCII
	printf("The char .txt contents: %c\n", ch);
	fclose(f);
}

void saveAChar()
{
	char ch = '$';
	FILE *f = fopen("char.txt", "a"); 	// trỏ vào 1 dãy byte để sẵn sàng save data
										// w: tạo mới tập tin trển đĩa
										// nếu tập tin có sẵn thì xóa cũ => hết sức lưu ý khi chơi với w			
	// "a" append: nhẹ nhàng hơn, tinh tế hơn
	// a" nếu tập tin chưa có thì tạo mới
	// nếu có rồi thì giữ data cũ, data mới được nối vào đuôi, cuối tập tin
	// CÓ MỘT TÌNH HUỐNG K XIN ĐƯỢC CON TRỎ, F K TRỎ ĐƯỢC VÀO DÃY BYTE
	// LÚC NÀY f == NULL, ý nghĩa con trỏ k trỏ được vào dãy byte của tập tin - học thêm sau
	// giờ ta coi như là xin được, tập trung vào việc lưu info
	fprintf(f, "%c", ch);	// nếu muốn ghi nhiều ký tự thì nhiều fprintf()
							// xài như printf() xưa nay, printf() thì in ra màn hình, fprintf() in ra file
	fclose(f);				// báo cho OS đã xong
}