class Solution {
public:
    int maxArea(vector<int>& height) {
        int i,j,h;
        int area=0,maxArea=0;
        for(i=0,j=height.size()-1; i<j;){

            h = height[i]<height[j] ? height[i++]:height[j--];
            area = h*(j-i+1);
            maxArea = area > maxArea ? area : maxArea;
            // if(height[i]<height[j]){
            //     h = height[i];
            //     area = h*(j-i);
            //     i++;
            // }
            // else{
            //     h = height[j];
            //     area = h*(j-i);
            //     j--;
            // }
            
            // if(maxArea<area){
            //     maxArea=area;
            // }
        }
        return maxArea;
    }
};