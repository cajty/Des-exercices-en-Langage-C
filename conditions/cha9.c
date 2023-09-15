#include <stdio.h>

int main ()
{
    char c;
    printf("enterz um  caractere\n");
    scanf("%c", &c);


    if((int) c >= 65 && (int) c <= 90){
        printf("%c est  un alphabet majuscule \n ", c);
    }
    else if ( (int) c >= 97 && (int) c <= 122){
         printf("%c est  un alphabet minuscule \n ", c);
    }
    else {
        printf(" %c not alphabet \n",c);
    }
    return 0;
}
