#include <list>
#include <iostream>
#include <numeric>

int main(){
    std::list<int> nums = {1, 2, 3, 4};
    int sum = std::accumulate(nums.begin(), nums.end(), 0);

    std::cout << "the sum of list using accumulate algorithm : " << sum << std::endl;

    return 0;
}
