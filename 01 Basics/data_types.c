#include <stdio.h>

int main()
{
    int number = 10;
    float price = 99.99;
    double pi = 3.1415926535;
    char letter = 'H';

    printf("Integer : %d\n", number);
    printf("Float   : %.2f\n", price);
    printf("Double  : %.10lf\n", pi);
    printf("Character : %c\n", letter);

    return 0;
}