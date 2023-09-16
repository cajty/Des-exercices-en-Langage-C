#include <stdio.h>

int main() {
    int a;
    int b;

    printf("enterz le numéro 1 \n");
    scanf("%d",&a);

    printf("entrez le numéro 2\n");
    scanf("%d", &b);
    printf("\n");

	printf(" plus:%d\n", a + b);
	printf("  soustraction:%d\n", a - b);
	printf(" multiplition: %d\n", a * b);
	printf(" division: %d\n", a / b);
	printf(" le reste de la division: %d\n", a % b);

}
