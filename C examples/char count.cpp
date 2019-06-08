#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



int cnt[200];///cnt array must be declear out of the main function

int main()
{
    //ios_base::sync_with_stdio(0);

    char s[2000];
    gets(s);//="AaaaBccdEfghigakllmnoooozzAZZZkorckdAABBBBCcccaa";

    for(int i=0; i<strlen(s); i++)
        cnt[s[i]]++;

    for(char i='a'; i<='z'; i++)
        cout<<i<<": "<<cnt[i]<<endl;


}
