#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArr
{
public:
        MyArr(int Cap)
        {
                //cout << "�вι������" << endl;
                this->m_Cap = Cap;
                this->m_Size = 0;
                this->pAddress = new T[this->m_Cap];
        }

        MyArr(const MyArr& p)
        {
                //cout << "������������" << endl;
                this->m_Cap = p.m_Cap;
                this->m_Size = p.m_Size;
                //���
                this->pAddress = new T[p.m_Cap];
                for (int i = 0; i < this->m_Size; i++)
                {
                        this->pAddress[i] = p.pAddress[i];
                }
        }

        //��������� Ҫ��ֹǳ��������
        MyArr& operator =(const MyArr& p)
        {
                //cout << "��������ص���" << endl;
                //���ж�this->pAdd.....�Ƿ������ݣ���������ͷ�
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

        //β�巨��������
        void Push_Back(const T& val)
        {
                if (this->m_Cap == this->m_Size)
                        return;
                this->pAddress[this->m_Size] = val;
                this->m_Size++;
        }

        //βɾ��
        void Pop_Back()
        {
                //���û����ʲ������һ��Ԫ�أ���Ϊβ��ɾ��
                //��������������ݣ����޷�ɾ��β������
                if (this->m_Size == 0)
                        return;
                this->m_Size--;
        }
        //��������
        //��������& ʹ��arr[index]=100;�ܹ���Ϊ��ֵ
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
                //cout << "������������" << endl;
                if (this->pAddress != NULL)
                {
                        delete[]this->pAddress;
                        this->pAddress = NULL;
                }
        }
private:
        T*  pAddress;   //ָ��ָ��������ٵ���ʵ����
        int m_Cap;
        int m_Size;
};