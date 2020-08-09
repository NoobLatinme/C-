#include"worker.h"
using namespace std;
#include<string>

class employee :public  worker
{
public:
		// Ù–‘≥ı ºªØ
		employee(int id, string name, int depid);
		void showinfo();
		string get_Depid();
};