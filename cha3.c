#include <stdio.h>
#include <math.h>
int main (){
	int a, b;
	printf("enter le numéro 1: \n");
	scanf("%d", &a);
	
	printf("enter le numéro : \n");
	scanf("%d", &b);

	if( a == b)
		printf("le triple some de a et b est : %f", pow(( a + b) , 3));
	else 
		printf("la some de a et b est %d ", a + b);
	
	return 0;


	}

