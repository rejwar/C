#include<stdio.h>
int main(){
    printf("Enter the value of a: /n");
    scanf("%d", &a);
    //3||5
    if(a % 3 == 0 || a % 5 == 0){
        printf("the number is indivisible by 3 or 5" );

    }else{
        printf("the number is not indivisible by 3 or 5")
    
    
    return 0;
}