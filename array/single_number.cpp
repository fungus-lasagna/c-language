Task Description
Single Number
給定一組長度為 n 的正整數陣列 A。陣列中只有一個元素只出現一次，其它元素都會出現兩次。請找出只出現一次的元素，並列印出來。



#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int A[100];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    //利用 0 xor a = a, a xor a = 0的特性
    int xor_test = 0;
    for (int i = 0; i < n; i++)
    {
        xor_test ^= A[i];
    }
    
    printf("%d", xor_test);
}
