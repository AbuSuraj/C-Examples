#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,c;
char s[101],a[60],j,k;
scanf("%d ",&n);
gets(s);
j='a';
for(i=0;i<26;i++){
    a[i]=j;
    j++;
}
j='A';
for(i=26;i<52;i++){
   a[i]=j;j++;
}

for(i=0;i<n;i++){
        for(k=0;k<52;k++){
    if(s[i]==a[k]){
        c=0;}

    else {c=1;}}
}

if(c==0){
          cout<<"YES\n";

}
else //if(c==1)
{
     cout<<"NO\n";

}
return 0;
}
