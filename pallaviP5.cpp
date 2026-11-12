

#include <stdio.h>

int main(void)
{
    int nums[] = {2, 7, 11, 15};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 9;

    int found = 0;

    for (int i = 0; i < n - 1 && !found; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Target: %d\n", target);
                printf("Indices: [%d, %d]\n", i, j);
                printf("Values: %d + %d = %d\n",
                       nums[i], nums[j], target);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("No two numbers add up to %d.\n", target);

    return 0;
}