#include<iostream>
using namespace std;
int arrSum(int arr[],int n)
{

if(n==0)
{
    int second=arr[0];
    return second;


}

int sum=arr[n];  
sum += arrSum(arr,n-1);
return sum;





 

}
int main()


{

    int arr[5]={10,10,10,10,10};
    int n=4;

 cout<<" "<<arrSum(arr,4);
}