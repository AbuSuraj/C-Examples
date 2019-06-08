#include<bits/stdc++.h>
using namespace std;
int main()
{
    int id,i,n;
    double cg;
    cin>>n;
    pair<double,int>p[n];
    for(i=0;i<n;i++){
        cin>>id>>cg;
        p[i].first=cg;
        p[i].second=id;

    }
    sort(p,p+n);
    for(i=0;i<n;i++){
        cout<<p[i].second<<" "<<p[i].first<<endl;
    }
}
