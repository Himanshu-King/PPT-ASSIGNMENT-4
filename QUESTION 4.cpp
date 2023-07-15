/*

Given an integer array nums of 2n integers, group these integers into n pairs 
(a1, b1), (a2, b2), ..., (an, bn) such that the sum of min(ai, bi) for all i is maximized. 
Return the maximized sum.

*/

#include <iostream>
#include <vector>
#include <algorithm>

int arrayPairSum(const std::vector<int>& nums) {
    std::vector<int> sortedNums(nums);
    std::sort(sortedNums.begin(), sortedNums.end());

    int maxSum = 0;
    for (int i = 0; i < sortedNums.size(); i += 2) {
        maxSum += sortedNums[i];
    }

    return maxSum;
}

int main() {
    std::vector<int> nums = {1, 4, 3, 2};

    int maxSum = arrayPairSum(nums);

    std::cout << "Maximized sum: " << maxSum << std::endl;

    return 0;
}
