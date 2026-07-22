class Solution {
public:
    vector<int> constructRectangle(int area) {
        int length ;
        int breadth = sqrt(area);
        while(area % breadth != 0){
            breadth--;
        }
        length = area/breadth;
        return {length,breadth};
    }
};