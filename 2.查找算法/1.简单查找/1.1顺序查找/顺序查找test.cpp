#include<stdio.h>
int sequentialSearch(int* p, int n, int x);
int main()
{
	int a[] = { 2,4,6,8,0,1,3,5,7,9 };
	int len = sizeof(a) / sizeof(a[0]);
	printf("ԭ����Ϊ��");
	for (int k = 0; k < len; k++)
	{
		printf("%d ", a[k]);
	}
	int x;
	printf("������Ҫ���ҵĹؼ��֣�");
	scanf_s("%d", &x);
	int answer = sequentialSearch(a, len, x);
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

int sequentialSearch(int* p, int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (p[i] == x)
			return i;
	}
	if (i == n)
		return -1;
}