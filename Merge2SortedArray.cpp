#include<bits/stdc++.h>
using namespace std;
void print(vector<int> arr )
{
    for(int i = 0 ; i < arr.size() ; i ++)
    {
        cout<<" "<<arr[i];

    }
}
void copy(vector<int> arr,int n , vector <int> arr2,int m)
{
    for(int i =0 ; i < m ;i++)
    {
        arr2[i]=arr[i];
    }

}

void merge(vector <int>& s1 , int n , vector <int> s2 , int m)
{
   
   int i = n-1, j = m-1 , k = n + m -1;
   while( i >= 0 && j >= 0)
   {
       if(s1[i]>s2[j])
       {
          s1[k]=s1[i];
          k--,i--;

       }

        else
        s1[k]=s2[j];
        {
            k--,j--;
        }

   }
   while(i >= 0)
   {
        s1[k--]=s1[i--];

   }

    while(j>=0)
      {
         s1[k--]=s2[j--];
      }   

    
    



}


int main()
{
    vector <int> s1; // first vector
    vector<int> s2; // second vector
    int n,m;  // size of vector
    cout<<" Enter The Size of first vector";
    cin>>n;
    cout<<"Enter the vector";
    int a;//temporary element
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a;
        s1.push_back(a);
    }
    cout<<" Enter The Size of second vector";
    cin>>m;
    cout<<"Enter the second array";
    for(int i = 0 ; i < m ; i++)
    {
        cin>>a;
        s2.push_back(a);
    }
    
    merge(s1,n,s2,m);
    

    print(s1);
    
    // print(s2);



}