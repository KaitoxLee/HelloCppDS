#include<stdio.h>
#include<string.h>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
void permutations(char* p, int left,int right);
int count = 0;
int main(void)
{
	char list[] = "abcdef";
	int len = sizeof(list) / sizeof(list[0]) - 1;
	permutations(list, 0,len-1);
	printf("�ܹ���%d�����з�ʽ��\n", count);
	return 0;
}

void permutations(char* p, int left, int right)
{
	char temp;
	if (left == right)
	{
		printf("%s\n", p);
		count++;
	}
	else
	{
		for (int k = left; k <= right; k++)
		{
			SWAP(p[k], p[left], temp);
			permutations(p, left + 1, right);
			SWAP(p[k], p[left], temp);
		}
	}
	////a��ͷ�ģ����潫��b��c����������
	//SWAP(p[0], p[0], temp);
	//permutations(p, 1, 2);
	//SWAP(p[0], p[0], temp);

	////b��ͷ�ģ����潫��a��c����������
	//SWAP(p[0], p[1], temp);
	//permutations(p, 1, 2);
	//SWAP(p[0], p[1], temp);

	////c��ͷ�ģ����潫��a��b����������
	//SWAP(p[0], p[2], temp);
	//permutations(p, 1, 2);
	//SWAP(p[0], p[2], temp);
}