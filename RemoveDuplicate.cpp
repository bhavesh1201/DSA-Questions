int removeDuplicates(vector<int> &arr, int n) {

    int size = n;
	for(int i = 0 ; i < n ;i++){
		
		if(arr[i]==arr[i+1]){
			size -= 1;
		}
	}
	return size;
	
}