class Solution {
public:
    int trap(vector<int>& height) {
      
        // for(int i=0;i<n;i++){
        //     int lmax=0; int rmax=0;
        //     for(int j=0;j<=i;j++){
        //         lmax= max(lmax,height[j]);
        //     }
        //     for(int j=i;j<n;j++){
        //         rmax=max(rmax,height[j]);
        //     }

        //     water= water+ min(lmax,rmax)-height[i];
        // }
        // return water;

        // vector<int>lmax(n,0);
        // vector<int>rmax(n,0);
        // lmax[0]=height[0];
        // rmax[n-1]=height[n-1];
        // for(int i=1;i<n;i++){
        //     lmax[i]=max(lmax[i-1],height[i]);
        // }
        // for(int i=n-2;i>=0;i--){
        //     rmax[i]=max(rmax[i+1],height[i]);
        // }
        // for(int i=0;i<n;i++){
        //     water=water+min(lmax[i],rmax[i])-height[i];
        // }
        // return water;
int n= height.size();
        int water=0;
        int left=0; int right=n-1;
        int lmax=0; int rmax=0;
while(left<right){
    if(height[left]<height[right]){
        if(height[left]>lmax){
            lmax=height[left];
        }else{
            water=water+lmax-height[left];
        }
        left++;
    }else{
        if(height[right]>=rmax){
            rmax=height[right];
        }else{
            water+=rmax-height[right];
        }
        right--;
    }
}
return water;
    }
};