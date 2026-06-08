class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
 vector<int>s;
 vector<int>l;
vector<int>e;
 for(int i=0;i<nums.size();i++){
   
    if(nums[i]>pivot){
        l.push_back(nums[i]);
    }else if(nums[i]<pivot){
        s.push_back(nums[i]);
    }else{
        e.push_back(nums[i]);
    }

 }
for(int i=0;i<e.size();i++){
    s.push_back(e[i]);
}
 for(int i=0;i<l.size();i++){
    s.push_back(l[i]);
 }
 return s;
    }
};