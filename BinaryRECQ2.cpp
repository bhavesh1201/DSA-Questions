#include<bits/stdc++.h>
using namespace std;
void left(int  arr[], int s, int e, int k,int ans)
{
 
    if(s>=e)
    {
    
           cout<<ans;
           return;
          }
    
    
  int mid = s+ (e-s)/2;
     if(arr[mid]==k)
     {
                   ans=mid;
                //    cout<<ans;
                
           left(arr,s,mid,k,ans);
           
     }

    else if(arr[mid]<k)
     {            
        // cout<<" left"<< arr[mid]<<endl;
             left(arr,mid+1,e,k,ans);    
     }
    else
    { left(arr,s,mid,k,ans);
 
            }
    
    

}
void right(int  arr[], int s, int e, int k,int ans)
{
 
    if(s>=e)
    {
        
        
           cout<<ans;
           return;
          }
    
    
  int mid = s+ (e-s)/2;
     if(arr[mid]==k)
     {
                   ans=mid;
           left(arr,mid+1,e,k,ans);
           
     }

    else if(arr[mid]<k)
     {
             left(arr,mid+1,e,k,ans);    
     }
    else
    { left(arr,s,mid-1,k,ans);
 
            }
    
    

}
int main()
{

int ans = -1;
int arr[6] ={2,2,5,0,3};
int e =6;
int s =0;
int k=3;
left(arr,s,e,k,ans);
right(arr,s,e,k,ans);



}