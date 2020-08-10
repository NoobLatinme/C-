#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArr
{
public:
        MyArr(int Cap)
        {
                //cout << "有参构造调用" << endl;
                this->m_Cap = Cap;
                this->m_Size = 0;
                this->pAddress = new T[this->m_Cap];
        }

        MyArr(const MyArr& p)
        {
                //cout << "拷贝函数调用" << endl;
                this->m_Cap = p.m_Cap;
                this->m_Size = p.m_Size;
                //深拷贝
                this->pAddress = new T[p.m_Cap];
                for (int i = 0; i < this->m_Size; i++)
                {
                        this->pAddress[i] = p.pAddress[i];
                }
        }

        //运算符重载 要防止浅拷贝问题
        MyArr& operator =(const MyArr& p)
        {
                //cout << "运算符重载调用" << endl;
                //先判断this->pAdd.....是否有数据，如果有先释放
                if (this->pAddress != NULL)
                {
                        delete[]this->pAddress;
                        this->pAddress = NULL;
                        this->m_Cap = 0;
                        this->m_Size = 0;
                }
                this->m_Cap = p.m_Cap;
                this->m_Size = p.m_Size;
                this->pAddress = new T[p.m_Cap];
                for (int i = 0; i < this->m_Size; i++)
                {
                        this->pAddress[i] = p.pAddress[i];
                }
                return *this;
        }

        //尾插法插入数据
        void Push_Back(const T& val)
        {
                if (this->m_Cap == this->m_Size)
                        return;
                this->pAddress[this->m_Size] = val;
                this->m_Size++;
        }

        //尾删法
        void Pop_Back()
        {
                //让用户访问不到最后一个元素，即为尾部删除
                //如果数组中无数据，则无法删除尾部数据
                if (this->m_Size == 0)
                        return;
                this->m_Size--;
        }
        //访问数据
        //加上引用& 使得arr[index]=100;能够作为左值
        T& operator[](int index)
        {
                return this->pAddress[index];
        }

        int Get_m_Cap()
        {
                return this->m_Cap;
        }

        int Get_m_Size()
        {
                return this->m_Size;
        }

        ~MyArr()
        {
                //cout << "析构函数调用" << endl;
                if (this->pAddress != NULL)
                {
                        delete[]this->pAddress;
                        this->pAddress = NULL;
                }
        }
private:
        T*  pAddress;   //指针指向堆区开辟的真实数组
        int m_Cap;
        int m_Size;
};