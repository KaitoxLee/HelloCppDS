#include<stdio.h>
int binSearch(int* p, int n, int x);
int main()
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int len = sizeof(a) / sizeof(a[0]);
	printf("����Ϊ��");
	for (int k = 0; k < len; k++)
	{
		printf("%d ", a[k]);
	}
	int x;
	printf("������Ҫ���ҵĹؼ��֣�");
	scanf_s("%d", &x);
	int answer = binSearch(a, len, x);
	if (answer == -1)
	{
		printf("û���ҵ���");
	}
	else
	{
		printf("�ҵ������ҵ�ֵΪ%d,λ��Ϊa[%d]", x, answer);
	}
	return 0;
}

int binSearch(int* p, int n, int x)
{
	int low = 0;
	int high = n - 1;
	if (x<p[low] || x>p[high])
	{
		return -1;
	}
	if(x>=p[low] && x<=p[high]&& low <= high)
	{
		while (low <= high)
		{
			int mid = (low + high) / 2;
			if (p[mid] < x)
				low = mid + 1;
			else if (p[mid] >x)
				high = mid - 1;
			else
				return mid;
		}
	}
}