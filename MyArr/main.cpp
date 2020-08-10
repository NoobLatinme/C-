#include<iostream>
#include"MyArr.hpp"
using namespace std;
class Person
{
public:

		Person() {};

		Person(string name, int age)
		{
				this->m_name = name;
				this->m_age = age;
		}


		int m_age;
		string m_name;
};
void PrintArr(MyArr <int>& arr)
{
		for (int i = 0; i < arr.Get_m_Size(); i++)
		{
				cout << arr[i] << endl;
		}
}
void test()
{
		MyArr<int>arr1(5);
		
		for (int i = 0; i < 5; i++)
		{
				arr1.Push_Back(i);
		}
		cout << arr1.Get_m_Cap() << endl;
		arr1.Pop_Back();
		PrintArr(arr1);
}

void test1()
{
		MyArr<Person>arr1(2);
		Person p1("sss", 10);
		Person p2("www", 20);

		arr1.Push_Back(p1);
		arr1.Push_Back(p2);

		cout << arr1[0].m_name << endl;
		cout << arr1[0].m_age << endl;
		cout << arr1[1].m_name << endl;
		cout << arr1[1].m_age << endl;

		cout << arr1.Get_m_Size() << endl;
		cout << arr1.Get_m_Cap() << endl;
}
int main()
{
		//test();
		test1();
}