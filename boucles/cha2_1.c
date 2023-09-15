#include <stdio.h>
int main (){
  int num;
    printf("entre nombre :\n");
    scanf("%d",&num);
    
    for(int i=0 ; i <= 10;i++){
        printf("%d * %d = %d \n",num,i, num*i);
    }
}
  