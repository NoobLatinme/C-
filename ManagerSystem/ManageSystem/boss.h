#include"worker.h"
using namespace std;
#include<string>

class boss :public  worker
{
public:
		//���Գ�ʼ��
		boss(int id, string name, int depid);
		void showinfo();
		string get_Depid();
};