#include<iostream>
using namespace std;
void reverse (int arr[] , int n)
{
   int s = 0;
   int e = n-1;
   while(s < e)
   {
    swap(arr[s++],arr[e--]);

   }
   


}
void print(int arr[],int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<" "<<arr[i];
    }
}
int main()
{
   int n;
   cout<<"Enter Your Array";
   cin>>n;
   int arr[n];
   cout<<"Enter Arrays";
   for(int i = 0 ; i < n ; i++)
   {
     cin>>arr[i];

   }
   reverse(arr,n);
   print(arr,n);



   
}