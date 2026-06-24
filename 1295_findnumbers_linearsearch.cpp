#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution{
    public:
        int findNumbers(vector<int>& nums) {
            int evenDigitCount = 0;

            for (int num : nums){
                if(to_string(num).length() % 2 == 0){
                    evenDigitCount++;
                }
            }
            return evenDigitCount;
        }
};