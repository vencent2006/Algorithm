#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//283号  https://leetcode-cn.com/problems/move-zeroes/description/
class Solution{
public:
    void moveZeroes(vector <int> & nums){
        int k = 0;//[0,k)是非零元素
        for(int i = 0; i < nums.size(); i++){
            if (nums[i]){
                //非零
                nums[k] = nums[i];
                k++;
            }
        }


        //尾部赋值0
        for(int i = k; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
    void moveZeroesWithoutAssignZero(vector <int> & nums){
        int k = 0;//[0,k)是非零元素
        for(int i = 0; i < nums.size(); i++){
            if (nums[i]){
                //非零
                swap(nums[k], nums[i]);
                k++;
            }
        }

    }
    void moveZeroesWithoutAssignZeroWithoutSwap(vector <int> & nums){
        int k = 0;//[0,k)是非零元素
        for(int i = 0; i < nums.size(); i++){
            if (nums[i]){
                //非零
                if(k != i){
                    swap(nums[k], nums[i]);
                }

                k++;
            }
        }

    }
};

void display(vector<int> & vec){
    for(int i = 0; i < vec.size();i++){
        cout<<vec[i]<<endl;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int n = 10;
    int arr[] = {0,1,2,0,3,4,5,6,7,8};
    vector <int> vec(arr, arr+ sizeof(arr)/sizeof(int));
//    Solution().moveZeroes(vec);
    Solution().moveZeroesWithoutAssignZeroWithoutSwap(vec);

    //显示
    display(vec);


    return 0;
}