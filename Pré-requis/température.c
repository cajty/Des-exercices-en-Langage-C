#include <stdio.h>

int main() {
    float cels;
    float fahr;

    printf("quel estla température?\n");
    scanf("%f", &fahr);

	cels = (fahr - 32) / 1.8;

    printf("la température en Celsius : %.2f ",cels);

    if(cels < 5)
	printf("trés froid \n");
    else if (cels > 5 && cels < 15)
	printf("froid\n");
    else if (cels > 15 && cels < 25)
     	printf("chaud \n");
    else
     	printf("trés chaud \n");

    return 0;
}
