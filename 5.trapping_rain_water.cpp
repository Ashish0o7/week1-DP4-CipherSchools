class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int maxleft=0,maxright=0;
        int wat=0;
        while(i<=j)
        {
            if(height[i]<=height[j])
            {
                if(height[i]>=maxleft){
                    maxleft=height[i];
                }
                else{
                    wat+=maxleft-height[i];
                }
                i++;
            }
            else
            {
                if(height[j]>=maxright){
                    maxright=height[j];
                }
                else{
                    wat+=maxright-height[j];
                }
                j--;
            }
        }
        return wat;
    }
};