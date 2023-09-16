#include <stdio.h>
int main (){
  int num;
    printf("entre nombre :\n");
    scanf("%d", &num);
    
    /* for(int i= 2 ; i < num;i++){
      
       if( (num % i) != 0){
         printf("%d pair \n",num);
         break;
      }else
       printf("%d not \n",num);
    }
    //printf("%d premier \n", num); */
    if ( num == 2 || num ==)
    for(int i=2 ;i <= num/2 ; i++){
      if(num % i != 0 ){
        printf("%d est premier",num);;
      }
      if(num == i){
        printf("%d est n'est premier",num);
      }
    }
    return 0;
}

  