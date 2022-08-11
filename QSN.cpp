#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int binary(string str , int n)
{
    int s= 0;
    int e = pow(2,n);
    int mid = s + (e -s)/2;
    int ans =0;
     
   
   for(int i = 0 ; i < n ; i ++)
   {
    if(str[i]=='L')
   {
      
      e=mid-1;

   }
   else 
   {
    s=mid+1;
   }
   mid = s+(e-s)/2;
   ans=mid;
   }
    
    return ans;

    


}
int main()
{
    string str = "LRRLLL";
    int n = str.length();
   cout<<binary(str,n);
}