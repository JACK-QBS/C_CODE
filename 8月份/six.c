
#include <stdio.h>

int balance(struct TreeNode* root) {
    if (root == NULL)
        return 0;
    int left = balance(root->left);
    if (left == -1)
        return -1;
    int right = balance(root->right);
    if (right == -1)
        return -1;
    if (abs(left - right) > 1)
        return -1;
    return (left > right ? left : right) + 1;
}


//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    int* a = (int*)malloc(sizeof(int) * 2);
//    for (int i = 0; i <= numsSize - 2; ++i) {
//        for (int j = i + 1; j <= numsSize - 1; ++j) {
//            if (nums[i] + nums[j] == target) {
//                a[0] = i;
//                a[1] = j;
//                *returnSize = 2;
//                return a;
//            }
//        }
//    }
//    *returnSize = 0;
//    return 0;
//}

//int main()
//{
//    int nums[4] = { 2,7,11,15 };
//    int target = 9;
//    for (int i = 0;i < 3;i++)
//    {
//        for (int j = 1;j <= 3;j++)
//        {
//            int sum = nums[i] + nums[j];
//            if (target == sum)
//                printf("[%d,%d]\n", i, j);
//        }
//    }
//    return 0;
//}