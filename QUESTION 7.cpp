/*

You are given an m x n matrix M initialized with all 0's and an array of operations ops, 
where ops[i] = [ai, bi] means M[x][y] should be incremented by one for all 0 <= x < ai and 0 <= y < bi.
Count and return *the number of maximum integers in the matrix after performing all the operations*

*/

#include <iostream>
#include <vector>
#include <algorithm>

int maxCount(int m, int n, const std::vector<std::vector<int>>& ops) {
    int minAi = m;
    int minBi = n;

    for (const auto& op : ops) {
        minAi = std::min(minAi, op[0]);
        minBi = std::min(minBi, op[1]);
    }

    return minAi * minBi;
}

int main() {
    int m = 3;
    int n = 3;
    std::vector<std::vector<int>> ops = {{2, 2}, {3, 3}};

    int maxIntegers = maxCount(m, n, ops);

    std::cout << "Number of maximum integers: " << maxIntegers << std::endl;

    return 0;
}
