#include<iostream>
using namespace std;

int voi(int a , int b)
{

    if(b==1)
    {
        return a;

    }
    int ans = a* voi(a,b-1);
    return ans;

}

int main()
{
 cout<<voi(2,4);
}