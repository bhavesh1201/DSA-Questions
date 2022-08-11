#include<iostream>
using namespace std;

int add(int n)
{

if(n==0 )
{

    return 1;
}
if(n<0)
{

    return 0;


}

int ans= add(n-2)+add(n-3);
return ans;


}
int main()
{

    int n=10;


    int ans = add(n);
    cout<<ans;
}