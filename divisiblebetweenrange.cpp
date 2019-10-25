#include<bits/stdc++.h>
using namespace std;
int main(){
  long long a,b,c;
  int n;
  cin>>n;
  while(n--){
  cin>>a>>b>>c;
  if(a%c==0){
    cout<<(b/c-a/c)+1<<endl;

  }
  else{
   cout<<(b/c-a/c)<<endl;
  }
  }


}
