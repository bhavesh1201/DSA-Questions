#include<iostream>
#include<vector>
using namespace std;

int gs(string s) {
   vector<int> freq(256);
   
   for(char ch : s)
    freq[ch]++;
   
   int ans = 0;
   for(char ch = 'a'; ch <= 'z'; ++ch)
       if(freq[ch] > freq[ch - 32])
           ans--;
       else if(freq[ch] < freq[ch - 32])
           ans++;
   
   return ans;
}
int main()

{


string s="AABae";
cout<<" "<<gs(s);



}