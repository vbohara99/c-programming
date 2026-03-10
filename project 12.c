//12.	Write a program that asks three coefficients of a quadratic equation and calculate its root.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, r1, r2;
    printf("Output of CSIT assignment QN.12 by Bikram Bohara\n");

    printf("\nA = ");
    scanf("%f", &a);
    printf("B = ");
    scanf("%f", &b);
    printf("C = ");
    scanf("%f", &c);

    if (a != 0) {
        D = b*b - 4*a*c;

        if (D > 0) {
            r1 = (-b + sqrt(D)) / (2*a);
            r2 = (-b - sqrt(D)) / (2*a);
            printf("\nRoot 1 = %.2f", r1);
            printf("\nRoot 2 = %.2f\n", r2);
        }
        else if (D == 0) {
            r1 = -b / (2*a);
            printf("\nRoots are equal: %.2f\n", r1);
        }
        else {
            float realPart = -b / (2*a);
            float imagPart = sqrt(-D) / (2*a);
            printf("\nRoot 1 = %.2f + %.2fi", realPart, imagPart);
            printf("\nRoot 2 = %.2f - %.2fi\n", realPart, imagPart);
        }
    } else {
        printf("\nNot a quadratic equation\n");
    }

    return 0;
}
