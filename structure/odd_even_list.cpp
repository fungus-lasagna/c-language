Task Description
重新排列一組數列，依原順序將奇數項排列在前，偶數項排列在後。
例如，數列 2 1 3 5 6 4 7的奇數項是 2 3 6 7，偶數項是 1 5 4
將之依原順序重新排列為 2 3 6 7 1 5 4。



#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
    int val;
    struct ListNode *next;
};
 
struct ListNode* oddEvenList(struct ListNode* head);

 
void Construct(struct ListNode* node, int length, int num)
{
    int a;
    scanf("%d", &a);
    node->val = a;
 
    if(num >= length)
    {
        node->next = NULL;
        return;
    }
    node->next = (struct ListNode* )malloc(sizeof(struct ListNode));
    num++;
    Construct(node->next, length, num);
}
 
int main()
{
    struct ListNode* head;
    int n, a, length;
    head = (struct ListNode* )malloc(sizeof(struct ListNode));
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &length);
        Construct(head, length, 1);
        struct ListNode* ans = oddEvenList(head);
        struct ListNode* ptr;
 
        ptr = ans;
 
        while(ptr != NULL)
        {
            printf("%d ", ptr->val);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

struct ListNode* oddEvenList(struct ListNode* head)
{
    struct ListNode *odd = head;
    struct ListNode *even = head->next;
    struct ListNode *evenhead = even;
    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenhead;
    return head;
}
