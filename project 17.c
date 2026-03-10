/* 17.	Entered a number in decimal and print it in octal and hexadecimal.*/
#include <stdio.h>

int main() {
    int num;
    printf("Output of CSIT assignment QN.17 by Bikram Bohara\n");
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Octal: %o\n", num);
    printf("Hexadecimal: %X\n", num);

    return 0;
}
