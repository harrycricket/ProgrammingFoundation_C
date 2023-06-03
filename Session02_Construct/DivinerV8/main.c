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
	//if thay bằng switch
	switch (fL)
	{
		case 'A':
			printf("You are not good at joking\n");
			break;
		case 'B':
			printf("You are very emotional\n");
			break;
		case 'C':
			printf("You are very friendly and approachable\n");
			break;
		case 'D':
			printf("Your love is so passionate and intense");
			break;
		default: 
			printf("Coming soon...\n");
	}
/*	
	if (fL == 'A')
		printf("You are not good at joking\n");
	else if (fL == 'B')
		printf("You are very emotional\n");
	else if (fL == 'C')
		printf("You are very friendly and approachable\n");
	else
		printf("Coming soon...");	
*/
	return 0;
}