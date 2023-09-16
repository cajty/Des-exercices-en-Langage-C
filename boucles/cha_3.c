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
      int a = sqrt(num);
      for(int i=2 ;i <= a ; i++){
      if(num % i == 0 ){
          printf("%d NOT Pprmier",num);;
          break;  
    }
    }
      for(int i=2 ;i <= a ; i++){
      if(num % i != a ){
          printf("%dprmier",num);
          break;  
    }
    }
    return 0;
}

  