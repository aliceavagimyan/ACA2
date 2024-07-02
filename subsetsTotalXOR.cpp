#include <iostream>
#include <vector>

int xorSubsets(std::vector<int> nums){
    int n=nums.size();
    int total=0;
    for(int i=0; i<(1<<n);++i){
        int current=0;
        for(int j=0; j<n ;++j){
            if(i&(1<<j)){
                current^=nums[j];
            }
        }
        total+=current;
    }
    return total;

}

int main(){
    std::vector<int> nums1 = {1, 3};
    std::cout << xorSubsets(nums1) << std::endl;

   std::vector<int> nums2 = {5, 1, 6};
       std::cout << xorSubsets(nums2) << std::endl;

    std::vector<int> nums3 = {3, 4, 5, 6, 7, 8};
    std::cout << xorSubsets(nums3) << std::endl;
    return 0;
}