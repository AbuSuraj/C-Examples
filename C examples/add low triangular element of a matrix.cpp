#include<stdio.h>
#define m 5
int main()
{
    int a[m][m],i,j,sum,r,c,s=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    sum=0;
       for(i=0;i<r;i++){
        for(j=0;j<c;j++){
                if(i<=j){
                        sum+=a[i][j];}

        if(i>=j){
            s+=a[i][j];
        }
        }
        }
      printf("%d\n lower %d\n",sum,s);
}
