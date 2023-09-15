#include <stdio.h>

int main () {
	int annee;
	int mois;
	int jour;
	printf("enter date de four: jour mois annee :\n");
	scanf("%d", &annee);
	scanf("%d",&mois);
	scanf("%d", &jour);
	switch (mois)  {
	case  1 :
		printf("la date est : %d-janvier-%d \n", jour, annee);
		break;
	case  2 :
		printf("la date est : %d-fevrier-%d \n", jour, annee);
	case  3 :
		printf("la date est : %d-mars-%d \n", jour, annee);
		break;
	case  4 :
		printf("la date est : %d-avrill-%d \n", jour, annee);
		break;
	case 5 :
		printf("la date est : %d-mai-%d \n", jour, annee);
		break;
	case 6 :
		printf("la date est : %d-juin-%d \n", jour, annee);
		break;
	case 7 :
		printf("la date est : %d-juillet-%d \n", jour, annee);
		break;
	case 8 :
		printf("la date est : %d-aout-%d \n", jour, annee);
		break;
	case 9 :
		printf("la date est : %d-septembre-%d \n", jour, annee);
		break;
	case 10 :
		printf("la date est : %d-octobre-%d \n", jour, annee);
		break;
	case 11 :
		printf("la date est : %d-novembre-%d \n", jour, annee);
		break;
	case 12 :
		printf("la date est : %d-decembre-%d \n", jour, annee);
		break;

	default: printf("not option\n");
}
	return 0;
}
