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
	printf("总共有%d种排列方式。\n", count);
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
	////a开头的，后面将是b和c的所有排列
	//SWAP(p[0], p[0], temp);
	//permutations(p, 1, 2);
	//SWAP(p[0], p[0], temp);

	////b开头的，后面将是a和c的所有排列
	//SWAP(p[0], p[1], temp);
	//permutations(p, 1, 2);
	//SWAP(p[0], p[1], temp);

	////c开头的，后面将是a和b的所有排列
	//SWAP(p[0], p[2], temp);
	//permutations(p, 1, 2);
	//SWAP(p[0], p[2], temp);
}