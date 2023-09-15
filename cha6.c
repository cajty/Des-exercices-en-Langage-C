#include <stdio.h>

int main ()
{
    int num;
    printf("enterz um numero\n");
    scanf("%d", &num);

    if(num > 0){
        printf(" le nombre donne est positif\n ");
    }
     else if(num < 0) {
        printf(" le nombre donne est le nombre donné est  negatif\n");
    }
    else {
        printf(" le nombre donne est positif nul\n");
    }
    return 0;
}
