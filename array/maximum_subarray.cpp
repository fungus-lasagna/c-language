Task Description
Maximum Subarray
若陣列 B 是陣列 A 的連續的一部分，則稱 B 是 A 的子陣列 (subarray)。
例如，int A[ ]={-2, 1, -3, 4, -1, 2, 1, -5, 4}，陣列 B[ ]={4, -1, 2, 1} 是 A 的子陣列，但陣列 C[ ]={-2, 4} 則不是。
給定一組長度為 n 的整數陣列 A，找到一組元素和最大的子陣列 B（最少會包含一個元素），並印出子陣列 B 的元素和。
在上例中，B 的元素和為4 + (-1) + 2 + 1 = 6，都比 A 的其它子陣列的元素和還大。


	
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
