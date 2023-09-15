#include <stdio.h>

int main ()
{
    int c;
    printf("enterz la moyenne de ses notes\n");
    scanf("%d", &c);

    if (c >= 0 && c <= 20 ){
         if(num > 0){
        printf(" le nombre donne est positif\n ");
    }
     else if(num < 0) {
        printf(" le nombre donne est le nombre donné est  negatif\n");
    }
    else {
        printf(" le nombre donne est positif nul\n");
    }

    }else{
        printf("la moyenne de ses notes est no valid")
    }

    return 0;
}
