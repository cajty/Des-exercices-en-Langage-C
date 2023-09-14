#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int d;
    int some;
    printf("enterz le numéro 1 \n");
    scanf("%d",&a);

    printf("entrez le numéro 2\n");
    scanf("%d", &b);

    printf("entrez le numéro 3\n");
    scanf("%d", &c);

    printf("entrez le numéro 4\n");
    scanf("%d", &c);
    printf("\n");

    some = a + b + c + d;

	printf(" some:%d\n", some);
	printf("  moyenne:%.2f\n", some / 4.0);

}
