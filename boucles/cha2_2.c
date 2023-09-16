#include <stdio.h>
int main (){
  int num;
    printf("entre nombre :\n");
    scanf("%d",&num);
 
    for(int i= 0;i <= num;i++){
        
     for (int c = 0; c < num - i ; c++)
        {
            printf(" ");
        }

        for (int a = 0; a <= i * 2 ; a++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}
  
