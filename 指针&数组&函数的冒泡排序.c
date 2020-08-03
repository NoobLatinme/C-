#include<stdio.h>
#include<stdlib.h>
void CreateRandomArr(int* str,int length)
{
    for(int i=0;i<length;i++)
    {
        *(str+i)=rand()%100+1;
    }
}

void PrintArr(int* Arr)
{
    while(*Arr!='\0')
    {
        printf("%d ",*(Arr));
    }
}

int main()
{
    int arr[10];
    int* ptr=NULL;
    ptr=arr;
    CreateRandomArr(ptr,5);
    PrintArr(ptr);
}