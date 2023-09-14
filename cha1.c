#include <stdio.h>
int main() {
	int a;
	printf("entrez le numéro \n");
	scanf("%d", &a);
      if (a % 2 == 0){
     	printf("numéro %d est paire \n",a);
      }      
      else {
     	printf("numéro %d est impaire \n", a);
      }      
}

