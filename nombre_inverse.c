#include <stdio.h>
int main() {
	int a, b, c, num;
	printf("entrez le numéro \n");
	scanf("%d", &num);

	a = num % 10;
	num = num / 10;
	b = num % 10;
	num = num / 10;
	c = num % 10;
	
	printf("%d%d%d \n",a ,b, c);
}

