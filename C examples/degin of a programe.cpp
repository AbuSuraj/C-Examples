#include<stdio.h>
int main()
{
    char s[]="Cprograming";
    int i,j;
    for(i=0;i<=11;i++){
        j=i+1;
        printf("%-.*s\n",j,s);
    }
}
