#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={20,2,3,4,2};
    int n = 5;
    int i = 0;
    while(i < n)
    {
        for(int j = 0 ; j < n - i ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        i++;
    }

    for(auto i : arr) cout<<endl<<i;
}