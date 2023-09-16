#include <stdio.h>
#include <math.h>
int main() {
    int x1;
    int x2;
    int y1;
    int y2;
    int some;
    printf("enterz  x1 \n");
    scanf("%d",&x1);

    printf("entrez le x2\n");
    scanf("%d", &x2);

    printf("entrez y1\n");
    scanf("%d", &y1);

    printf("entrez y2\n");
    scanf("%d", &y2);
    printf("\n");

    some = pow(x2 - x1, 2) + pow(y2 - y1, 2);
    some = sqrt(some);

	printf(" distance:%.2f\n", some);

}
