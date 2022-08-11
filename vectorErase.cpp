#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector <int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);

  int n = vec.size()-1;
  int k = n/2;


  vec.erase(vec.begin()+k);
  
  for(int i = 0 ; i < n ;i++)
  {

    cout<<" "<<vec[i];
  }


}