#include<iostream>
using namespace std;
int main()
{

int n =5;


int digit = 0;
 
 while(n>0)
 {
    
    int lastdigit = n/2;
   digit= digit*10 + lastdigit;
   n=n/2;
    

 }

 cout<<digit;
}