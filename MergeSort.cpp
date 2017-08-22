#include<stdio.h>
#define SIZE 40

//�ϲ������ǰ�벿�ֺͺ�벿�֣� ǰ�����ǰ������������ֱ��Ѿ��ź�����
void merge(int a[], int first, int mid, int last) 
{
    int i, j, m, n;
    i = first, m = mid;
    j = mid + 1, n = last;
    int k = 0;
    int temp[SIZE];

    while(i<=m && j<=n) 
	{
        if(a[i] < a[j]) 
		{
            temp[k++] = a[i++];
        } 
		else 
		{
            temp[k++] = a[j++];
        }
    }
    
    while(i <= m) 
		temp[k++] = a[i++];

	while(j <= n) 
		temp[k++] = a[j++];
    
	//���ź���ĸ��ƻ�ԭ����
    for(i=0; i < k; i++) 
	{
        a[first + i] = temp[i];
    }

}


//�鲢����
void merge_sort(int a[], int first, int last) 
{
    int mid = (first + last)/2;
    if(first < last) 
	{
        merge_sort(a, first, mid);
        merge_sort(a, mid + 1, last);
        merge(a, first, mid, last);
    }
}


int main() {
    int a[SIZE];
    int i;
    for(i=0; i<SIZE; i++)
    {
        scanf("%d",&a[i]);
    }

    merge_sort(a, 0, SIZE-1);

    for(i=0; i<SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
	return 0;
}