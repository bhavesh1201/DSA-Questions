#include<iostream>
using namespace std;
bool LinerSea(int arr[],int key , int n)
{
 if(n<0)
 {
    return false;
 }

 if(arr[n]==key)
 {
    return true;
 }
 else
 {
    bool FinalAns = LinerSea(arr,key,n-1);
    return FinalAns;
 }

}
int main()
{
    int arr[5]={1,2,6,8,5};
    int key=3;
    int n=4;

    cout<<" "<<LinerSea(arr,key,n);
}