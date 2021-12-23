#include<bits/stdc++.h>
using namespace std;
inline int read(){
  int ans=0,f=1;char chr=getchar();
  while(!isdigit(chr)){if(chr=='-')f=-1;chr=getchar();}
  while(isdigit(chr)){ans=(ans<<3)+(ans<<1)+chr-48;chr=getchar();}
  return ans*f;
}
const int M = 3e5+5;
string s;
int main(){
  int T=read();
  while(T--){
    cin>>s;
    if(s.size()%2==1){puts("NO");continue;}
    if(s.substr(0,s.size()/2)==s.substr(s.size()/2))puts("YES");
    else puts("NO");
  }
  return 0;
}
