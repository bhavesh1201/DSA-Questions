#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int n= 7;
    int ans[n];
    int k =2;
    int z=0;
    for(int i = 0 ; i < n ; i++)
    {
        if(k+i < n)
        {
        ans[k+i]=arr[i];
        }
        else{
            
            ans[z]=arr[i];
            z++;
        }
    }
    for(int i =0; i < n ; i++)
    {
        cout<<" "<<ans[i];
        
    }


}