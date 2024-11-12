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
	
	int sum = 0, max = 0;
	
	for (int i = 0; i < n; i++)
	{
	    sum = 0;
	    for (int j = i; j < n; j++)
	    {
	        sum += A[j];
	        if (sum > max)
	            max = sum;
	    }
	}
	
	printf("%d", max);
}