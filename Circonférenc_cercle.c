#include <stdio.h>

int main() {
     float pi = 3.14;
     float r;

    printf("quel est le rayon du cercle\n");
    scanf("%f", &r);

    printf("cironférence du cercle: %.2f\n", 2 * pi * r);
    return 0;
}
