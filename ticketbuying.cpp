#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,n;
  cin>>n;

  int flag=0;
  int sum=0,r=0;
  while(n--){

    cin>>a;



   if(a==25){
        r=a;
     sum+=r;
     r=0;

   cout<<sum<<endl;
   }

   else if(a==50){

     if(sum>=25){
            sum+=(sum-25);
       //sum+=r;
       r=0;
       cout<<r<<endl;




      //  sum+=sum

        cout<<sum<<endl;

     }
     else {
       flag=-1;
       }
   }
     else if(a==100){

       if(sum>=75){
            sum+=sum-75;
           // sum+=r;
            r=0;
         //sum+=re;

         cout<<sum<<endl;



       }
       else {
       flag =-1;
       }
     }




  }
   if(flag==-1){
     cout<<"NO"<<endl;


   }
   else {



   cout<<sum<<endl;
    cout<<"YES"<<endl;




}
}
