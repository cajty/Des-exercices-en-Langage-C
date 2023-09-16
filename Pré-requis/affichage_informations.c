#include <stdio.h>

int main() {
	int age, numéro ;
	char prénom[25] , nom[25] , sexe[25] ;
	printf("prénom :\n");
	scanf("%[\n]",prénom );

	printf("nom :\n");
	scanf("%[\n]",nom );
	
	printf("sexe :\n");
	scanf("%[\n]",sexe );

	printf("age :\n");
	scanf("%d\n",&age );

	printf("numéro :\n");
	scanf("%d\n",&numéro );

	printf("%s   %s %s    %d   %d",nom , prénom, sexe ,age, numéro); 
	return 0;
}
