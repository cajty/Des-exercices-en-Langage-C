#include <stdio.h>
#include <math.h>
int main () {
        int a, b, c, delt;
        float sol1, sol2, sqde;
        printf("L'�quation du second degr� est une �quation polynomiale de la forme : ax^2 + bx + c = 0\n");

        printf("enter a: \n");
        scanf("%d", &a);

        printf("enter b:\n");
        scanf("%d", &b);

        printf("enter c: \n");
        scanf("%d", &c);

        printf("voter equation est %dX^2 + %dX + %d = 0\n", a, b, c);

        delt = pow(b, 2) - (4 * a * c) ;
        sqde = sqrt(fabs(delt));
        printf("delta est %d\n", delt );

        if ( delt > 0) {

                sol2 =  (-b + sqde) / (2*a) ;
                sol1 =  (-b - sqde) / (2*a) ;
                printf(" les solutions possible est %.2f et %.2f ",sol1 ,sol2);

        }
        else if ( delt < 0) {
                printf("pas de solutions \n");
        }
        else {
                sol1 = -b / (2*a);
                sol2 = -b / (2*a);
                printf(" les solutions possible est %.2f et %.2f\n ", sol1, sol2);

        }



}
