class Solution {
public:
  
void abc(vector<int>&arr , int x){
   for(int i=arr.size()-1; i>x; i--){
    arr[i] = arr[i-1];
}
if(x + 1 < arr.size()){
            arr[x+1] = 0;
}
}
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
for(int i=0;i<n;i++){
    if(arr[i]==0){
        abc(arr , i);
        i++;
    }
    
}
      return;  
    }
};