#include<bits/stdc++.h>
using namespace std;
void maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int mini= INT_MAX;
        for(int i = 0 ; i < n ; i++)
        {
            mini=min(mini,prices[i]);      
        }
        cout<<" MINI IS :"<< mini<<endl;
        int i = 0;
        for(i = 0 ; i < n ;i++)
        {
         if(mini== prices[i])
         { 
            cout<<" I ON BREAK IS"<<i<<endl;
           break; 
            
         }

         
        }
        cout<<"  i --------- "<<i<<"-----"<<endl;
        
        int maxi =0;
        for(int j = 0 ; j < n ; j++)
        {
                      maxi =max(maxi,prices[j]-mini);
             
        }
        int k =0;

        cout<<" maxi is :"<<maxi<<endl;
        
        for(k = i ; k < n; k++)
        {
             if(maxi==prices[k])
             {
                break;       
             }
        }
        cout<<"K ------"<<k<<"-------"<<endl;
        int ans = 0;
        
        cout<<maxi;

        
    }
    int main()
    {
        vector <int> prices {2,4,1};
        maxProfit(prices);

    }