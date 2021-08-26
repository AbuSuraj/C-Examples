#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100000],i, n , max_sum= INT_MIN, x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        x=x+arr[i];
        if(max_sum<x)
            max_sum = x;
        if(x<0)
            x = 0;
    }
    cout<<max_sum<<endl;
return 0;
}
