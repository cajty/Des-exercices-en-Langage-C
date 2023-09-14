#include <stdio.h>

int main (){
	char c;
	printf("enter un caractér: \n");
	scanf("%c", &c);
	switch (c) {
		case 'a':
			printf(" a est une voyelle \n");
			break;
		case 'i':
			printf(" i est une voyelle \n");
			break;
		case 'u':
			printf(" a est une voyelle \n");
			break;
		case 'o':
			printf(" o est une voyelle \n");
			break;
		case 'e':
			printf(" e est une voyelle \n");
			break;
		default:
			printf(" nom voyelle \n");
	}
	return 0;
}
