class Solution {
public:

    int Calculatehours(vector<int>& piles, int speed){
        long long hours = 0;

        for(int i = 0; i < piles.size(); i++){
            hours += (piles[i] + speed - 1) / speed;   // ceil division
        }

        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while(low < high){

            int mid = low + (high - low) / 2;   // overflow safe

            int hours = Calculatehours(piles, mid);

            if(hours > h){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }

        return low;
    }
};