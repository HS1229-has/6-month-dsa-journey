class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // int n= heights.size();
        // int maxx=0;
        // for(int i=0;i<n;i++){
        //    int h= heights[i];
        //    int left=i-1;
        //    while(left>=0 && heights[left]>=h){
        //     left--;
        //    }                                                               ON2      TIME LIMIT EXCEEDED
        //    int right=i+1;
        //    while(right<n && heights[right]>=h){
        //     right++;
        //    }
        //     int w= right-left-1;
        //     int area=h*w;
        //     maxx=max(area,maxx);
           
        // }
        // return maxx;
int n= heights.size();
        vector<int>left(n);
        vector<int> right(n);
stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && heights[st.top()]>=heights[i]){
            st.pop();
        }
        if(st.empty()) left[i]=-1;
        else left[i]=st.top();
        st.push(i);
    }
    while(!st.empty()){
        st.pop();
    }
    for(int i=n-1;i>=0;i--){
         while(!st.empty() && heights[st.top()]>=heights[i]){
            st.pop();
        }
        if(st.empty()) right[i]=n;
        else right[i]=st.top();
        st.push(i);
    }
    int maxx=0;
    for(int i=0;i<n;i++){
        int w=right[i]-left[i]-1;
        int area=heights[i]*w;
        maxx= max(maxx,area);
    }
    
    return maxx;
    }
};