#include<iostream>
#include<stack>
using namespace std;
int main()
{

stack <int> s;
string a = "Hello";
for(int i = 0 ; i < a.size();i++)
{
  
  s.push(a[i]);

}
  string ans= " ";
  while ( !s.empty())

  {
       char ch = s.top();
        ans.push_back(ch);
        s.pop();
  }
cout<<ans;


}