class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> ret(2);
        int i,j,k;
        for (i = 0; i < numbers.size(); i++) {
            for (j = i + 1; j < numbers.size(); j++) {
                if (target - numbers[i] == numbers[j]) {
                    ret[0] = i + 1;
                    ret[1] = j + 1;
                    return (ret);
                }
            }
        }
    }
};
