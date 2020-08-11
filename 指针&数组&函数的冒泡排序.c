#include<stdio.h>
#include<stdlib.h>
void CreateRandomArr(int* str,int length)
{
    for(int i=0;i<length;i++)
    {
        *(str+i)=rand()%100+1;
    }
}

void Sort(int* str,int length)
{
    for(int i=0;i<length-1;i++)
    {
        for(int j=0;j<length-i-1;j++)
        {
            if(*(str+j)<*(str+j+1))
            {
                temp=*(str+j);
                *(str+j)=*(str+j+1);
                *(str+j+1)=temp;
            }
        }
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
    Sort(ptr);
    PrintArr(ptr);
}
