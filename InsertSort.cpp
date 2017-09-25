#include<stdio.h>

void InsertSort(int array[], int n)
{
	int temp;
	for(int i = 1; i < n; i++)
	{
		if(array[i-1] > array[i])
		{
			temp = array[i];

			int j;
			for(j = i-1; array[j] > temp; j--)
			{
				array[j+1] = array[j];
			}

			array[j+1] = temp;
		}
	}
}


int main()
{
    int a[6] = {1,4,7,2,3,6};
    InsertSort(a, 6);

    for(int i = 0; i < 6; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}