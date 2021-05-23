#include<stdio.h>
int BinarySearch(int* p, int x, int left, int right);
int main(void)
{
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int len = sizeof(a) / sizeof(a[0]);
	printf("数组为：");
	for (int k = 0; k < len; k++)
	{
		printf("%d ", a[k]);
	}
	int x;
	printf("请输入要查找的关键字：");
	scanf_s("%d", &x);
	int answer = BinarySearch(a, x,0,len-1);
	if (answer == -1)
	{
		printf("没有找到！");
	}
	else
	{
		printf("找到！查找的值为%d,位置为a[%d]", x, answer);
	}
	return 0;
}

int BinarySearch(int* p, int x, int left, int right)
{
	int middle;
	if (left <= right)
	{
		middle = (left + right) / 2;
		if (p[middle] == x)
			return middle;
		if (p[middle] < x)
			left = middle + 1;
		if (p[middle] > x)
			right = middle - 1;
		return BinarySearch(p, x, left, right);
	}
	return -1;
}