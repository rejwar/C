#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[]="Anisul ";
    char s2[]="Islam";

    int i=0,j=0,len=0;

    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    while (s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;
    }
    printf("String=%s\n",s1);
    return 0;
    

}