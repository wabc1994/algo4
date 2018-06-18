//
// Created by liuxiongcheng on 18/06/2018.
//  采用基本的vector存储基本的数据集即可，合并最前面的两个，放到最后面的情况
#include <vector>
typedef struct ListNode{
    int item;
    struct ListNode * next;
};
ListNode * mergeKLists(vector<ListNode*> &list)
{
    if(list.empty())
        return nullptr;
    while(list.size()>1)
    {
        list.push_back(mergeTwo_list(listp[0],List[1]));
        list.erase(list.begin());
        list.erase(list.begin());
    }
    return list.front();

}
//采用递归的方法合并两个链表，不带头结点的链表，直接采用其中的一个链表作为结果链表

List * mergerTwo_list(ListNode *l1, ListNode *l2)
{
    if(l1== nullptr)
        return l2;
    if(l2== nullptr)
        return l1;
    if(l1->item<=l2->val) {
        l1->next = mergerTwolist(l1->next, l2);
        return l1;
    }
    else {
        l2->next = mergerTwolist(l1,l2->next);
        return l2;
    }

}
