#include <stdio.h>

int main ()
{
    int c;
    printf("enterz la moyenne de \n");
    scanf("%d", &c);

    if (c >= 0 && c <= 20 ){
         if(c < 10)
        printf(" il est recale\n ");    
    else if(c >= 10 && c < 12) 
        printf("il obtient la mention passable\n");   
    else if(c >= 12 && c < 14)
        printf(" il obtient la mention assez bien.\n");
    else if (c >= 14 && c < 16) 
        printf("il obtient la mention  \n");
     else if ( c > 16) 
        printf("il obtient la mention très bien\n");
    }else{
      printf("entrer une moyenne\n "); 

    }

    return 0;
}

