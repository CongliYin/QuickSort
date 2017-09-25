//��������˼�룺
//1��ѡ���������ҵ�Ԫ����Ϊ��׼
//2�������ڻ�׼������С�ڻ�׼�����ֳ����������֣�����׼�����������ֵ��м�
//3�������������ֵݹ���ÿ�������

/*
#include <stdio.h> 


int a[101],n;//����ȫ�ֱ�����������������Ҫ���Ӻ�����ʹ�� 
void quicksort(int left,int right) 
{ 
    int i,j,t,temp; 
    if(left > right) 
       return; 
                                
    temp = a[left]; //temp�д�ľ��ǻ�׼�� 
    i = left; 
    j = right; 
    while(i != j) 
    { 
                   //˳�����Ҫ��Ҫ�ȴ��ұ߿�ʼ�� 
                   while(a[j]>=temp && i<j) 
                            j--; 
                   //������ߵ� 
                   while(a[i]<=temp && i<j) 
                            i++; 
                   //�����������������е�λ�� 
                   if(i<j) 
                   { 
                            t = a[i]; 
                            a[i] = a[j]; 
                            a[j] = t; 
                   } 
    } 
    //���ս���׼����λ,���ڵ�i��λ�� 
    a[left] = a[i]; 
    a[i] = temp; 
                             
    quicksort(left,i-1);//����������ߵģ�������һ���ݹ�Ĺ��� 
    quicksort(i+1,right);//���������ұߵ� ��������һ���ݹ�Ĺ��� 
} 
int main()
{
    int a[6] = {1,4,7,2,3,6};
    quicksort(0, 5);

    for(int i = 0; i < 6; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
*/

/*

int Partition(int array[], int low, int high)
{
	int point = array[low];
	while(low < high)
	{
		while(array[high] >= point)
		{
			high--;
		}
	}
	}
}
*/
#include <stdio.h> 
void QuickSort(int array[], int low, int high)
{
	int i = low; 
	int j = high;
	int temp = array[low];
	while(i != j)
	{
		while(array[j] >= temp && i < j)
		{
			j--;
		}

		while(array[i] <= temp && i < j)
		{
			i++;
		}

		if(i < j)
		{
			int t = array[i];
			array[i] = array[j];
			array[j] = t;
		}
	}

	//����׼temp�����Լ���λ�ã�����i��λ�ã�
	array[low] = array[i];
	array[i] = temp;

	QuickSort(array, low, i - 1);
	QuickSort(array, i + 1, high);
}


int main()
{
    int a[8] = {1,4,7,2,3,6,5,8};
    QuickSort(a, 0, 7);

    for(int i = 0; i < 8; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}

