#include <iostream>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
void swap1(int a, int b);
void swap2(int& a, int& b);
void swap3(int* a, int* b);

int main() {
    int x = 1;
    int y = 2;
    std::cout << "这是原始的数据：\n";
    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;

    swap1(x, y);//void swap1(int a,int b)实现了a与b的交换，但是由于a与b是形参，
    //所以swap1函数的调用并不改变实参x与y的数据，所以x仍然是1，y仍然是2。
    std::cout << "这是swap1的数据：\n";
    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;

    swap2(x, y);//void swap2(int& a, int& b)的参数类型是引用——&
    //即给x取了一个名字a，给y取了一个名字b。
    //因为x与a同名，所以x与a指向相同的地址；因为y与b同名，所以y与b指向相同的地址。
    //调用swap2之后，实现了a与b的交换，因为x与a同名以及y与b同名，于是就实现了x与y的交换。
    std::cout << "这是swap2的数据：\n";
    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;

    swap3(&x, &y);//void swap3(int* a, int* b)的参数类型是指针——*
    //由swap3(&x, &y)的参数，可知a（对应实参&x）指向x的地址，b（对应实参&y）指向y的地址。
    //而void swap3(int* a, int* b)实现了指针交换，交换之后，&x指向y的地址，&y指向x的地址。
    //因为经过swap2(x, y)之后，x=2,y=1。所以经过swap3(&x, &y)之后，x=1,y=2。
    std::cout << "这是swap3的数据：\n";
    std::cout << "x=" << x << std::endl;
    std::cout << "y=" << y << std::endl;

    int t = 0;//SWAP宏函数有三个参数，x与y已经申明，此处是声明一个临时变量
    std::cout << "这是SWAP的数据：\n";
    SWAP(x, y, t);
    //因为经过swap3(&x, &y)之后，x=1,y=2。所以经过SWAP(x,y,t)之后，x=2,y=1。
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