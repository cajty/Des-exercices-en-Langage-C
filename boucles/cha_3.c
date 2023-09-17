#include <stdio.h>
#include <math.h>
int main (){
  int num;
    printf("entre nombre :\n");
    scanf("%d", &num);
  
    if(num == 2 || num == 1){
        printf("prmier\n");
        return 0;
    }
      for(int i=3 ;i < num ; i++){
      if(num % i == 0 ){
          printf("%d  not  Pprmier\n", num);
          return 0; 
          //break; 
    }
    }
      for(int i=3 ;i <= num ; i++){
      if(num % i != 0 ){
          printf("%d prmier\n", num);
          break;  
    }
      }
    return 0;
}

  