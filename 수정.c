#include <stdio.h>

enum season
{
    SPRING, SUMMER = 2, FALL, WINTER
};

int main(void)
{
    enum season birthday = FALL;
    printf("birthday : %d \n", birthday);

    printf("birthday : %d \n", FALL);

    return 0;
}

