#include <stdio.h>

enum Week
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    enum Week today;

    today = Friday;

    printf("Value of Friday = %d\n", today);

    return 0;
}