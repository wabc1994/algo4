//
// Created by liuxiongcheng on 02/06/2018.
//
//分而治之的算法思想，最开始的二分法，到最后分开为 ，归并排序法是稳定的排序方法，最坏和最好的情况先的时间复杂度均是Onlog(n)

//最终的程序入口
//详细接发见下表，以及具体的时间复杂分析等情况
//http://www.personal.kent.edu/~rmuhamma/Algorithms/MyAlgorithms/Sorting/mergeSort.htm

void m_sort(int numbers[],int temp[], int array_size)
{
    m_sort(numbers,temp, 0,arraysize-1);
}

void m_sort(int numbers[], int temp[], int left, int right)
{
    int mid;
    //判断是否满足分治算法的条件 ，是否可以再继续进行划分下去
    if(left<right)
    {
        mid = ( right + left ) / 2;
        merge_sort(numbers, left, mid);
        merge_sort(numbers, mid+1, right);
        merge_two(numbers, temp,left, mid+1, right);
    }

}

void merge_two(int a[], int temp[], int left, int mid,int right)
{
    int i, left_end, num_elements, tmp_pos;
    left_end = mid -1;
    tmp_pos = left;
    num_elements = right - left + 1;
    while((left<=left_end) && (mid<=right))
    {
        if(numbers[left]<=numbers[mid])
        {
            temp[tmp_pos++] = numbers[left++];

        }
        else
            temp[tmp_pos++] = numbers[mid++];
    }
    while(left<=left_end){
        temp[tmp_pos++] = numbers[left++];

    }
    while(mid<=right)
    {
        temp[tmp_pos++] = numbers[mid++];

    }
    for(int i=0;i<num_elementsi;i++)
    {
        numbers[right] =temp[right];

    }
}

