#include<bits/stdc++.h>
using namespace std;
int main()

{

    int arr[5]={6,4,2,1,5};
    int n = 5;
    int i = 1;
   while(i < n)
   {
    int j = i -1;

    int temp =arr[i];
    for(; j >= 0 ; j--)
    {
        if(arr[j] > temp)
        {
                  arr[j+1] = arr[j];
        }
        else{

            break;
        }
    }
    i++;
        arr[j+1]=temp;
    
   }

   for(auto k : arr)
   {
    cout<<" "<<k;
   }

}