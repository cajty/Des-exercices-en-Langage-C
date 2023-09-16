#include <stdio.h>

int main () {
	int num;
	int a;
	printf("enter number \n");
	scanf("%d", &num);

	while((num % 10) != 0 ){
	a = num % 10;
	num = num / 10;
	printf("%d",a);
	}
	printf("\n");
	return 0;
}
