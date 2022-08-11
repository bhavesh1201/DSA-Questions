#include<iostream>
using namespace std;
int main()
{
 int n =5;
 int ans=0;
 while(n>0)
 {
   int ans=n%2;
   n=n>>2;


 }
cout<<ans;
}