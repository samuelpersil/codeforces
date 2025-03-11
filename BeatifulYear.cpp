#include <iostream>
#include <vector>

using std::vector;

int main(){
    int n, answer;
    std::cin >> n;
    n++;
    vector<int> nums(4);
    while(true){
        for(int i = 0; i < 4; i++){
            nums[i] = std::to_string(n)[i] - '0';
        }
        if(nums[0] == nums[1] || nums[0] == nums[2] || nums[0] == nums[3] || nums[1] == nums[2] || nums[1] == nums[3] || nums[2] == nums[3])
            n++;
        
        else{
            std::cout << n;
            break;
        }
    }

    return 0;
}