#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

vector < vector <int>> arr 
{{1,2,3},{4,5,6},{7,8,9}};

int n=3;

for(int i = 0 ; i < n ; i++)
{
     for(int j=0; j < n ; j++)
     {
        cout<<arr[i][j];
     }
     cout<<endl;
}

cout<<" -- - - - -- -- - - - - - "<<endl;
for(auto i:arr)
{
    for(auto j : i)
    {
        cout<<j;
    }
    cout<<endl;
}
vector <int> ans;

for(auto i: arr)
{
    for(auto j : i)
    {
          ans.push_back(j);
    }
}

int k = ans.size();

cout<<" ----------------------------------------------------"<<endl;
for(auto i : ans)
{
    cout<<" "<<i;
}

}