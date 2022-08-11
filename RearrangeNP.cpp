#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int *arr,int n)
{
    for(int i = 0 ; i < n ; i++)
    {
  
      cout<<" "<<arr[i];
    }
}
int main()
{

int arr[9]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
int n=9;

for(int i = 0 ; i < n ; i++)
{
    if(arr[i]>0)
    {
        for(int j=i ; j < n ; j++)
        {
              if(arr[i]>0 && arr[j]<0)
              {
                swap(arr[i],arr[j]);
              }
               
        }
    }
}

print(arr,n);


int i = n-1;

while(arr[i]>0){
    i++;
}

int s = i+1;
int e = n;

while(s<e)
{

    swap(arr[s++],arr[e--]);


}
cout<<endl;
print(arr,n);


}
