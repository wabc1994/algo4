//
// Created by liuxiongcheng on 01/06/2018.
//
//二分查找包括递归方法和非递归方法

//如何理解递归的方法，递归的出口程序，放在最后实现，

//递归方法


int BinarySearch_Recursive(int array[], int low, int high, int value)
{
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (array[mid] == value)
        return mid;
    else if (array[mid] > value)
        return BinarySearch_Recursive(array, low, mid - 1, value);
    else
        return BinarySearch_Recursive(array, mid + 1, high, value);

}

int BinarySearch_noRecursive(int array[], int len, int e)
{
    if(array == nullptr || len < 0)
        return -1;
    low = 0;
    high = len - 1;
    while(low < mid)
    {

        mid = (low + high) / 2;
        if(array[mid] > e)
            high = mid -1;
        else if(array[mid] < e)
            low = mid + 1;
        else
            return mid;

    }
}