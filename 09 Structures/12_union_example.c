#include <stdio.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data data;

    data.i = 100;
    printf("Integer : %d\n", data.i);

    data.f = 25.75;
    printf("Float   : %.2f\n", data.f);

    printf("Integer after float assignment : %d\n", data.i);

    return 0;
}