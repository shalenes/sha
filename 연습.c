#include <stdio.h>
#include <math.h>



struct person
{
    int number ;
    char name[20];
    double age;
};

int main(void)
{
    struct person A = {};
    
    printf("입력 : ");
    scanf("%d %s %lf", &A.number, A.name, &A.age);
   
    printf("%d %s %lf \n", A.number, A.name, A.age);

    return 0;

}
