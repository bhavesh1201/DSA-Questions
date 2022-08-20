#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int org = n;
    int temp = org;
    int count = 1;

    while(n > 0)
    {
    for(int i = 1 ; i <= org  ; i++)
    {  
          
        if( i <= n)
        {
        cout<<i;

        }
        else {
            cout<<"*";
        }
        
    }


    for(int j = org ; j  > 0 ; j--)
    {
         if(j > n)
         {
            cout<<"*";
         }
         else{
            if(count == 1)
         {
            cout<<--j;
            count--;
         }
            
            else 
            cout<<j;

         }
    }
    cout<<endl;
    n--;

    }
}