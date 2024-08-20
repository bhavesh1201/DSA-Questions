vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.

    int j = 0;
    for(int i=0;i<a.size();i++){
        if(a[i] != 0) a[j++]=a[i];
    }
    for(j;j<n;j++){
        a[j]=0;
    }
    return a;

    
}


