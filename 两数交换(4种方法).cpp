#include <iostream>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
void swap1(int a, int b);
void swap2(int& a, int& b);
void swap3(int* a, int* b);

int main() {
    int x = 1;
    int y = 2;
    std::cout << "����ԭʼ�����ݣ�\n";
    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;

    swap1(x, y);//void swap1(int a,int b)ʵ����a��b�Ľ�������������a��b���βΣ�
    //����swap1�����ĵ��ò����ı�ʵ��x��y�����ݣ�����x��Ȼ��1��y��Ȼ��2��
    std::cout << "����swap1�����ݣ�\n";
    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;

    swap2(x, y);//void swap2(int& a, int& b)�Ĳ������������á���&
    //����xȡ��һ������a����yȡ��һ������b��
    //��Ϊx��aͬ��������x��aָ����ͬ�ĵ�ַ����Ϊy��bͬ��������y��bָ����ͬ�ĵ�ַ��
    //����swap2֮��ʵ����a��b�Ľ�������Ϊx��aͬ���Լ�y��bͬ�������Ǿ�ʵ����x��y�Ľ�����
    std::cout << "����swap2�����ݣ�\n";
    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;

    swap3(&x, &y);//void swap3(int* a, int* b)�Ĳ���������ָ�롪��*
    //��swap3(&x, &y)�Ĳ�������֪a����Ӧʵ��&x��ָ��x�ĵ�ַ��b����Ӧʵ��&y��ָ��y�ĵ�ַ��
    //��void swap3(int* a, int* b)ʵ����ָ�뽻��������֮��&xָ��y�ĵ�ַ��&yָ��x�ĵ�ַ��
    //��Ϊ����swap2(x, y)֮��x=2,y=1�����Ծ���swap3(&x, &y)֮��x=1,y=2��
    std::cout << "����swap3�����ݣ�\n";
    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;

    int t = 0;//SWAP�꺯��������������x��y�Ѿ��������˴�������һ����ʱ����
    std::cout << "����SWAP�����ݣ�\n";
    SWAP(x, y, t);
    //��Ϊ����swap3(&x, &y)֮��x=1,y=2�����Ծ���SWAP(x,y,t)֮��x=2,y=1��
    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;

    return 0;
}

void swap1(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap2(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap3(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}