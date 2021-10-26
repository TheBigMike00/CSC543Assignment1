#include <iostream>

int main()
{
    int nums[4] = { 2,7,11,15 };
    int numsLength = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    int targetIndicies[2] = { 0,0 };
    bool targetFound = false;

    for (int i = 0; i < numsLength - 1; i++)
    {
        for (int j = i + 1; j < numsLength; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                targetIndicies[0] = i;
                targetIndicies[1] = j;
                targetFound = true;
                break;
            }
        }

        if (targetFound)
            break;
    }

    //Print out target
    std::cout << "Target: \n" << target << "\n\n";
    
    //Print out nums array
    std::cout << "Nums Array: \n";
    for (int i = 0; i < numsLength; i++)
    {
        std::cout << nums[i] << ' ';
    }

    //Print out indicies of target
    std::cout << "\n\nTarget Indicies: \n";
    for (int i = 0; i < 2; i++) 
    {
        std::cout << targetIndicies[i] << ' ';
    }
}