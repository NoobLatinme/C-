#include<stdio.h>

int main()
{
/*  
    1.const修饰指针 --常量指针  
        ->const（常量） int*（指针) p=&a;
        特点：指针的指向可以修改，但指针指向的值不可以改
        *p=20; ×
        *p=&b; √
    2.const修饰常量 --指针常量
        ->int*(指针) const（常量） p=&a;
        特点：指针的指向不可以修改，但指针指向的值可以更改
        *p=20; √
        *p=&b; ×
    3.const即修饰指针，又修饰常量
        ->const int* const p=&a;
        特点：指针的指向和指针指向的值都不可以更改
        *p=20; ×
        *p=&b; ×
*/
    int a=10;
    int b=10;
    int* p=&a;

}