#include<bits/stdc++.h>
using namespace std;

void prin(vector <int> s1 )
{
    for(int i = 0 ; i < s1.size();i++)
    {
        cout<<" "<<s1[i];
    }
}

void MoveZeroLeft(vector<int>& s1 , int n)
{
    int i = n-1;
    for(int j = n-1 ; j >= 0; j++)
    {
        if(s1[j] != 0)
           swap(s1[j],s1[i--]);
    }
    //  prin(s1);
}

void MoveZeroRight(vector<int>& s1, int n)
{

    int i = 0;
    for(int j = 0 ; j < n ; j++)
    {
        if(s1[j] != 0)
             swap(s1[j],s1[i++]);
    }
    // prin(s1);
}
int main()
{
  vector <int> s1;
   int n;
   cout<<"Enter Your Array Size";
   cin>>n;
   cout<<"Enter Your Array";
   int k;
   for(int i = 0 ; i < n ; i++)
   { 
    cin>>k;
    s1.push_back(k);
   }

   
    prin(s1);

//    MoveZeroLeft(s1,n);
//     prin(s1);
   MoveZeroRight(s1,n); 
    prin(s1);


}