#include<iostream>
using namespace std;


 void rev(string s,int n,int st)
 {
          if(st>=n)
          { 
            string k = s;
             cout<<" "<<k;
             return;
             
          }

          swap(s[st],s[n]);
          rev(s,n-1,st+1);

 }

 int main()
 {  

    string s="abcde";
    int n= s.length()-1;
    int st=0;

    rev(s,n,st);
    cout<<" st "<<s;


 }