#include <stdio.h>

int main () {
	int annee;
	int chois;
	printf("enter année :\n");
	scanf("%d", &annee);
	printf("menu de convertir:\n1-mois\n2-jours\n3-heures\n4-minuter\n");
	scanf("%d", &chois);
	switch (chois ) {
	case  1 :
		printf("convertir en mois: %d \n", annee * 12);
		break;
	case  2 :
		printf("convertir en jours: %d \n", annee * 30 * 12);
	case  3 :
		printf("convertir en heures: %d \n", annee * 12 * 30 * 24);
		break;
	case  4 :
		printf("convertir en minuter: %d \n", annee * 30 * 12 *24* 60 );
		break;
	default: printf("not option\n");
}
	return 0;
}
