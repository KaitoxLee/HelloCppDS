#include<stdio.h>
#include<stdlib.h>
long factorial(int n);
long iterative_factorial(int n);
int main(void)
{
	printf("请输入要求阶乘的数：");
	int x;
	scanf_s("%d", &x);
	//int answer = factorial(x);
	int answer = iterative_factorial(x);
	printf("%d!=%d", x, answer);

	return 0;
}

long factorial(int n)//递归
{
	if (n == 0)
		return 1;
	else
		return n*factorial(n - 1);
}

long iterative_factorial(int n)//迭代
{
	long r = 1;
	for (int i = 1; i <= n; i++)
	{
		r = r * i;
	}
	return r;
}