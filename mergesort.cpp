#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int s , int e)
{
    int mid = (s+e)/2;
    int arr1_size=mid-s+1;
    int arr2_size=e-mid;

    int *arr1= new int[arr1_size];
    int *arr2=new int[arr2_size];

    int k=s;
    for(int i  =0 ; i < arr1_size; i++) // i ki jhaga k lik kr dekna abhhi
    {
        arr1[i]=arr[k++];
    }
    k=mid+1;
         
    for(int i = 0 ; i< arr2_size;i++) // same
    {
        arr2[i]=arr[k++];
    }

     int arr1_index=0;
     int arr2_index=0;
      k=s;

     while(arr1_index < arr1_size && arr2_index < arr2_size)
     {
        if(arr1[arr1_index]<arr2[arr2_index])
        {
         arr[k++]=arr1[arr1_index++];   
        }
        else{
            arr[k++]=arr2[arr2_index++];
        }

     }
     while(arr1_index<arr1_size)
     {
        arr[k++]=arr1[arr1_index++];
     }
     while(arr2_index < arr2_size)
     {
        arr[k++]=arr2[arr2_index++];
     }

       
}
void mergesort(int *arr,int s , int e)
{
    if(s>=e)
    {
        return;
    }
    

    int mid = s+(e-s)/2;

    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
    int arr[5]={5,2,32,4,1};
    
      
    int n=5;
   
    int s = 0;
    int e = n-1;


    mergesort(arr,s,e);

    for(auto i : arr) cout<<i<<" ";
    
}