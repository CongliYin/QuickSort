//快速排序思想：
//1、选择数组最右的元素作为基准
//2、将大于基准的数和小于基准的数分成左右两部分，将基准放置于两部分的中间
//3、对左右两部分递归调用快速排序

/*
#include <stdio.h> 


int a[101],n;//定义全局变量，这两个变量需要在子函数中使用 
void quicksort(int left,int right) 
{ 
    int i,j,t,temp; 
    if(left > right) 
       return; 
                                
    temp = a[left]; //temp中存的就是基准数 
    i = left; 
    j = right; 
    while(i != j) 
    { 
                   //顺序很重要，要先从右边开始找 
                   while(a[j]>=temp && i<j) 
                            j--; 
                   //再找左边的 
                   while(a[i]<=temp && i<j) 
                            i++; 
                   //交换两个数在数组中的位置 
                   if(i<j) 
                   { 
                            t = a[i]; 
                            a[i] = a[j]; 
                            a[j] = t; 
                   } 
    } 
    //最终将基准数归位,放在第i个位置 
    a[left] = a[i]; 
    a[i] = temp; 
                             
    quicksort(left,i-1);//继续处理左边的，这里是一个递归的过程 
    quicksort(i+1,right);//继续处理右边的 ，这里是一个递归的过程 
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

	//将基准temp放于自己的位置，（第i个位置）
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

