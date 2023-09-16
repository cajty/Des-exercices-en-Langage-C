#include <stdio.h>

int main() {
    char nom[25];
    char prénom[45];
    char sexe[25];
    int age;
    long téléphone;

    printf("quel est votre nom?\n");
    scanf("%[^\n]", nom);

    printf("quel est votre prénom?\n");
    scanf("%s", prénom);

    printf("quel est votre âge?\n");
    scanf("%d", &age);

    printf("quel est votre sexe?\n");
    scanf("%s", sexe);

    printf("quel est votre numéro de téléphone?\n");
    scanf("%ld", &téléphone);

    printf("nom de famille: %s\n", nom);
    printf("prénom: %s\n", prénom);
    printf("age: %d\n", age);
    printf("sexe: %s\n", sexe);
    printf("téléphone: %ld\n", téléphone);

    return 0;
}
