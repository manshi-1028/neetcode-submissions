class Solution {
public:
    long long totalHours(vector<int>& piles, int speed){
        long long hours = 0;

        for (int pile : piles) {
            hours += (pile + speed - 1) / speed; 
        }

        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=*max_element(piles.begin(), piles.end());
        int mid;
        int ans=end;
        while(start<=end){
            mid=start+(end-start)/2;
            long long hours = totalHours(piles, mid);
            if(hours<=h){
                end=mid-1;
                ans=mid;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
        
    }
};