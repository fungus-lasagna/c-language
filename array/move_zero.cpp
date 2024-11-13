Task Description
Move Zero
給定一組長度為 n 的正整數陣列 A。將元素值為0的放在 A 的尾端，並依相對順序保留非零元素。最後印出 A 的所有元素值。



#include <stdio.h>

int main()
{
	int n;
	int A[100];
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
	    scanf("%d", &A[i]);
	}
	
	int temp;
	for (int i = 0; i < n; i++)
	{
	    for (int j = 0; j < n; j++)
	    {
	        if (A[j] == 0)
	        {
	            temp = A[j];
	            A[j] = A[j + 1];
	            A[j + 1] = temp;
	        }
	       
	    }
	}
	
	for (int i = 0; i < n; i++)
	{
	    if (i != n - 1)
	        printf("%d ", A[i]);
	    if (i == n - 1)
	        printf("%d", A[i]);
	}
	
}
