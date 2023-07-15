/*

Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
*Return the array in the form* [x1,y1,x2,y2,...,xn,yn].

*/

#include <iostream>
#include <vector>

std::vector<int> shuffle(const std::vector<int>& nums, int n) {
    std::vector<int> result;
    result.reserve(2 * n);

    for (int i = 0; i < n; i++) {
        result.push_back(nums[i]);
        result.push_back(nums[n + i]);
    }

    return result;
}

int main() {
    std::vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;

    std::vector<int> result = shuffle(nums, n);

    std::cout << "[";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
