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
    
    int xor_test = 0;
    for (int i = 0; i < n; i++)
    {
        xor_test ^= A[i];
    }
    
    printf("%d", xor_test);
}