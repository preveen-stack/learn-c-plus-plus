#include <iostream>

int main() {
    std::vector<int> nums = {1, 2, 3, 4};

    int sumManual = 0;

    for(int i = 0; i < nums.size(); ++i) {
        sumManual += nums[i];
    }

    std::cout << "manual sum of vector integers:" << sumManual << std::endl;
    return 0;
}
