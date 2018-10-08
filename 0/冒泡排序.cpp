#include<stdio.h>
int f(int *arr,int n)	//排序函数
{
	int i,j;
	int temp;
	for( i=0;i<n;i++ )
	{
		for( j=i;j<n;j++ )
		{
			if( arr[i]>arr[j] )
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return 0;
}
int Prin(int *arr,int n)	//输出数组
{
	int i;
	for( i=0;i<n;i++ )
		printf("%d	",arr[i]);
	printf("\n\n");
	return 0;
}
int main()
{
	int a[] = {5,10,9,78,108,55,458,63,47,122,66};
	Prin(a,10);
	f(a,5);
	Prin(a,10);
	return 0;
}
