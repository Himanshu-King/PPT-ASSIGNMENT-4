/*

Given three integer arrays arr1, arr2 and arr3 sorted in strictly increasing order, 
return a sorted array of only the integers that appeared in all three arrays.

*/

#include <iostream>
#include <vector>

std::vector<int> findCommonElements(const std::vector<int>& arr1, const std::vector<int>& arr2, const std::vector<int>& arr3) {
    int p1 = 0, p2 = 0, p3 = 0;
    std::vector<int> result;

    while (p1 < arr1.size() && p2 < arr2.size() && p3 < arr3.size()) {
        if (arr1[p1] == arr2[p2] && arr2[p2] == arr3[p3]) {
            result.push_back(arr1[p1]);
            p1++;
            p2++;
            p3++;
        } else if (arr1[p1] < arr2[p2]) {
            p1++;
        } else if (arr2[p2] < arr3[p3]) {
            p2++;
        } else {
            p3++;
        }
    }

    return result;
}

int main() {
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {1, 2, 5, 7, 9};
    std::vector<int> arr3 = {1, 3, 4, 5, 8};

    std::vector<int> result = findCommonElements(arr1, arr2, arr3);

    std::cout << "Common elements: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
