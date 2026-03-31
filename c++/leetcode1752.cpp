#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> nums;
    nums={1,2,3,4,5};
    int count =0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i-1]>nums[i])
        {
            count++;
        }
    }
    if (nums[nums.size()-1]>nums[0])
    {
        count++;
    }
    
    cout<< count;
    
    
}