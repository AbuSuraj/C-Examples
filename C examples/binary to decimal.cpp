#include<stdio.h>
#include<math.h>
int main()
{
   int i=0,n,rem,dec;
   scanf("%d",&n);
   dec=0;
   while(n!=0){
    rem=n%10;
    dec+=rem*pow(2,i);
    n/=10;
    i++;
   }
   printf("%d \n",dec);
}
