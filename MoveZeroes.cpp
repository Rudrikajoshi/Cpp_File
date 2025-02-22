#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int nonzeroes = 0; // Pointer to place non-zero elements

    // Step 1: Move non-zero elements forward
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[nonzeroes], nums[i]);
            nonzeroes++;
        }
    }
}

int main()
{

    vector<int> nums = {0, 1, 3, 0, 0, 2, 3};

    moveZeroes(nums);

    // Output the result
    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}