#include<stdio.h>
int main()
{
    float a1, an , sn ;
    int n ;
    printf(" a1 :  ");
    scanf("%f" , &a1);

    printf(" an :");
    scanf("%f", &an);

    printf("value n: ");
    scanf("%d", &n);

    sn = (a1 + an)*n/2 ;
    printf(" the value of sn : %f\n," , sn );
    return 0;
}