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