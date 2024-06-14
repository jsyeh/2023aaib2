//week17-2a.cpp LeetCode 75. Sort Colors 用 Selection Sort選擇排序
void sortColors(int* nums, int numsSize) {
    for(int i=0; i<numsSize; i++){ // 左手i
        for(int j=i+1; j<numsSize; j++){ //右手j
            if(nums[i] > nums[j]){ //大小不對, 就
                int temp = nums[i]; //交換
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}