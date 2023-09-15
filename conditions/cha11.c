#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
      srand(time(NULL));
	int chois = rand() % 7;
	switch (chois ) {
	case  0 :
		printf("lundi \n");
		break;
	case  1 :
		printf(" mardi \n");
	case  2 :
		printf("mercredi \n");
		break;
	case  3 :
		printf("jeudi \n");
		break;
	case 4 :
		printf("vendredi \n");
		break;
	case 5 :
		printf("samedi \n");
		break;
	case 6 :
		printf("dimanche");
		break;
	
}
	return 0;
}
