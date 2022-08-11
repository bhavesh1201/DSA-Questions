#include<iostream>
using namespace std;

void binaryLeft(int s ,int ans, int e,  int arr[],int key)
{
   int mid = s+ (e-s)/2;

    if(s > e)
    {  
        
       cout<<ans;
        return;
    }

    
   

   if(arr[mid]==key)
   {
      ans = mid;
      binaryLeft(s,ans,mid-1,arr,key);
   }
   else if(arr[mid]>key)
   {
      binaryLeft(s,ans,mid-1,arr,key);
       
   }
   else{
    binaryLeft(mid+1,ans,e,arr,key);
   }

    


}
int main()
{
 int arr[6]={1,2,2,3,4,2};
 int key = 2;
 int n = 6;
 int s = 0;
 int e = n;
int ans=-1;
binaryLeft(s,ans,e,arr,key);


}