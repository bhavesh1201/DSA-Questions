#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {

    int temp = 0;
    for(int i = 0 ; i < arr.size() ;i++ ){
        if(temp<arr[i])temp=arr[i];

    }
    return temp;

                                                                                                    

}
