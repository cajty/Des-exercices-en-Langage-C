#include <stdio.h>

int main() {
    int num, some, max;

    printf("  enter une série d'entiers positifs inferieurs à 100 terminee par 0 :\n");

    while (1) {
        scanf("%d", &num);

        
        if (num == 0) {
            break;
        }

        
        if (num > 100) {
            printf("%d négliger.\n", num);
            continue;
        }

        some += num;

        
        if (1) {
            max++;
        }
    }

    printf(" la somme est : %d \n le max des elements %d\n", some, max);

    return 0;
}
