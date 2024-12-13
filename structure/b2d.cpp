#include <stdio.h>
#include <stdlib.h>
 
// val : 紀錄0或1
// next : 記錄下一個結構
struct ListNode
{
    int val;
    struct ListNode *next;
};
 
int getDecimalValue(struct ListNode* head);

// 輸入二進位，並一位一位輸入，採用遞迴方式輸入，資料存放採用linked list
// 例如數字6的二進位是 1 1 0
// 表示有三個結構，第一個結構的val存1，第一個結構的next紀錄第二個結構，第二個結構的val存1，第二個結構的next紀錄第三個結構，第三個結構的val存0，第三個結構的next紀錄NULL
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
    node -> next = (struct ListNode* )malloc(sizeof(struct ListNode));
    num++;
    Construct(node->next, length, num);
}
 
int main()
{
    struct ListNode *head;
    int n, a, length;
    head = (struct ListNode* )malloc(sizeof(struct ListNode));
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &length);
        Construct(head, length, 1);
        int ans = getDecimalValue(head);
        printf("%d\n", ans);
    }
}

int getDecimalValue(struct ListNode* head)
{
    int result = 0, i = 0;
    while(head != NULL)
    {
        i = head->val;
        result = result * 2 + i;
        head = head->next;
    }
    return result;
}