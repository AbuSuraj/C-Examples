#include<stdio.h>
#include<math.h>
int main()
{
    int n,n2,i,c,len,rem,n1,num;
    scanf("%d",&n);len=0;num=0;
    n1=n;
    n2=n;
    while(n!=0){
        n/=10;
        len++;
    }
   while(n1!=0){
    rem=n1%10;
    num+=pow(rem,len);
    n1/=10;
   }
   if(n2==num){printf("%d is armstrong number\n ",n2);}
   else printf("%d is not armstrong number\n",n2);
}
