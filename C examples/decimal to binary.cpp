#include<stdio.h>
int main()
{
    int b[100],i,j,c,n,temp,rem;
    scanf("%d",&n);
    temp=n;i=0;
    while(temp!=0){
        rem=temp%2;
        b[i++]=rem;
        temp=temp/2;
    }
    for(j=i-1;j>=0;j--){
        printf("%d",b[j]);
    }
    printf("\n");

}
