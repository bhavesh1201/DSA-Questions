#include<iostream>
using namespace std;

bool BinarySearch(int *arr, int k , int s , int e)
{
  if(s >= e)
  {
    return false;
  }

  int mid = s + (e-s)/2;
  
   if(arr[mid]==k)
   {
          return true;
   }
   else if(arr[mid]<k)
   {
 
        int right= BinarySearch(arr,k,mid+1,e);
        return right;
   }
   else
   {
         int left = BinarySearch(arr,k,s,mid-1);
         return left;

   }



}


int main()
{
    int arr[5]={1,2,3,4,5};
int k = -1;
int n = 5;
int s=0;
int e=n;

cout<<BinarySearch(arr,k,s,e);
}