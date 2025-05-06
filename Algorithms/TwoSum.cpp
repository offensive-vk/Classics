#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }
    // Should not reach here if a solution exists
    return {}; // Or throw an exception
}

int main() {
    std::vector<int> numbers = {2, 7, 11, 15};
    int targetSum = 9;
    std::vector<int> result = twoSum(numbers, targetSum);

    if (!result.empty()) {
        std::cout << "Indices of the two numbers that sum to " << targetSum << ": ["
                  << result[0] << ", " << result[1] << "]" << std::endl;
    } else {
        std::cout << "No two numbers found that sum to " << targetSum << std::endl;
    }

    std::vector<int> numbers2 = {3, 2, 4};
    int targetSum2 = 6;
    std::vector<int> result2 = twoSum(numbers2, targetSum2);

    if (!result2.empty()) {
        std::cout << "Indices of the two numbers that sum to " << targetSum2 << ": ["
                  << result2[0] << ", " << result2[1] << "]" << std::endl;
    } else {
        std::cout << "No two numbers found that sum to " << targetSum2 << std::endl;
    }

    return 0;
}
