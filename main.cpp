#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a>>b;

   while (b!=0)
   {
       if (a%10==0)
       {
           a=a/10;
       }
       else{
           a-=1;
       }
       b--;
   }
   
    cout<<a<<endl;
}