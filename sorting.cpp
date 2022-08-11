#include<iostream>
using namespace std;
int main()
{

int a[5]={5,4,3,2,1};
int n=5;

              for(int i = 0 ; i++ ; i < n-1)
              {
        
                  for(int j=i+1 ; j++ ; j<n)
                  {
                      if(a[i]>a[j])
                      {
                          int temp = a[i];
                          a[i]=a[j];
                          a[j]=a[i];
                      }
                  }
              }

              for(int i = 0 ; i < n ; i++)
              {
                cout<<" "<<a[i];
              }
}
