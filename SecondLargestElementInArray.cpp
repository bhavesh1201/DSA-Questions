vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.

    int small  = INT_MAX;
    int small2= INT_MAX;
    int max1=INT_MIN;
    int max2 =INT_MIN;

    for(int i=0; i<a.size();i++){
        if(a[i]<small){
           small2=small;
           small=a[i];  
        }
        else if(a[i]<small2 ){
            small2=a[i];
        }

        if (max1 < a[i]) {

            max2 = max1;
            max1 = a[i];
        }
         else if(max2< a[i]){
                max2=a[i];
            }
         
        
        
    }

    vector <int> ans;
    ans.push_back(max2);
    ans.push_back(small2);
    return ans;
}
