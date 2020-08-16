#include<iostream>
using namespace std;
#include"StartSpeechGame.h"
#include<algorithm>
#include<time.h>

int main()
{
		srand((unsigned int)time(NULL));
		doWork SSG;
		int choice = 1;

		while (true)
		{
				SSG.ShowMenu();
				cout << "ÇëÊäÈë²Ù×÷£º" << endl;
				cin >> choice;
				switch (choice)
				{
				case 1:
						SSG.SpeechMatchStart();
						break;
				case 2:
						SSG.ShowPreviousMessage();
						break;
				case 3:
						SSG.ClearAllMessage();
						break;
				case 4:
						SSG.ExitSystem();
						break;
				default:
						break;
				}
		}
		system("pause");
		system("cls");
}