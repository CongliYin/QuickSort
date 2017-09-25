#include"stdio.h"

//改进的冒泡,不对


void BubbleSort(int array[], int n)
{
	int flag = 1;
	for(int i = 0; i < n - 1  && (flag); i++)
	{
		for(int j = n - 1; j > i; j--)
		{
			flag = 0;
			if(array[j - 1] > array[j])
			{
				int temp;
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
				flag = 1;
			}
		}
	}
}


/*
void BubbleSort(int array[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{

			if(array[j - 1] > array[j])
			{
				int temp;
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;
			}
		}
	}
}
*/

int main()
{
	int a[6] = {1,4,7,2,3,6};
	BubbleSort(a, 6);
	
	for(int i = 0; i < 6; i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

/*int i,j;
	for(i = 0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	for(j = 0;j<9; j++)
	{
		for(i = 0; i<9-j; i++)
		{
			if(a[i] > a[i+1])
			{
				int temp;
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}*/
