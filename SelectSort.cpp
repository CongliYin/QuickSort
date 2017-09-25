#include<stdio.h>

void SelectSort(int array[], int n)
{
	int temp;
	
	for(int i = 0; i < n-1; i++)
	{
		int min = i;
		for(int j = i+1; j < n; j++)
		{
			//ÿһ��ѡ����С��Ԫ�ص�λ��
			if(array[j] < array[min])
			{
				min = j;
			}
		}

		//����С��Ԫ���뵱ǰ��i��Ԫ�ؽ���
		if(min != i)
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
		}
	}
	
}

int main()
{
	int array[6] = {4,2,7,9,1,3};
	SelectSort(array, 6);

	for(int i = 0; i < 6; i++)
	{
		printf("%d\n", array[i]);
	}
	return 0;
}