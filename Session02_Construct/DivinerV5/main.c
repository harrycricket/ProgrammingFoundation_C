#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main(int argc, char *argv[]) {
	// input: chữ cái đầu trong tên gọi
	char fL; //firstLetter - camel case notation

	printf("Welcome to MAC diviner.\n");
	printf("You are required to input the first letter in your first name.\n");
	printf("Then I will show you your destiny\n");
	printf("Input your char: ");
	
	scanf("%c", &fL); 
	fL = toupper(fL);
	
	if (fL == 'A')
		printf("You are not good at joking\n");
		/*
			if tiếp vì có quá nhiều thứ kí tự trong else
			sure k phải là A, a, còn nhiều kí tự khác
		 */
	else
	{ //fL = BbCcDd...@#$...
		if (fL == 'B')
		//hỏi hẹp hơn, biết mày khác Aa rồi nhưng có phải là Bb k?
			printf("You are very emotional\n");
		// ngược lại của k bằng Bb sẽ là gì
		else // fL = k phải AaBb
		{
			// có phải mày là Cc k?
			if (fL == 'C')
				printf("You are very friendly and approachable\n");
			else // k phải ABCabc
				printf("Coming soon...");	
		}
	}
		
	

	return 0;
}