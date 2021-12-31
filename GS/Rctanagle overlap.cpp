class Solution {
public:
    bool solve(vector<int>& rec1, vector<int>& rec2){
        if(rec1[2]>rec2[0] and rec1[3]>rec2[1]) return true;
        else return false;
    }
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        return (solve(rec1,rec2) and solve(rec2,rec1)); //cheking twice
    }
};