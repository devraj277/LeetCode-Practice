class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int temp, total=numBottles;    
        while((numBottles/numExchange)>0){
            temp = numBottles/numExchange;
            total+=temp;
            numBottles = temp+(numBottles%numExchange);
        }
        return total;
    }
};