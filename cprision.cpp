#include<bits/stdc++.h>
using namespace std;
int main(){
  int  n,m;
  cin>>n>>m;
  int l,r;
  int ma=0;
  int mi=100000;
  for(int i=1;i<=m;i++){
    cin>>l>>r;
    ma=max(ma,l);
    mi=min(mi,r);


  }
  int cnt =0;
  for(int i=1;i<=n;i++){
    if(i>=ma&&i<=mi){

        cnt++;
    }
  }

cout<<cnt<<endl;








}
