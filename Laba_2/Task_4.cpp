#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "ITask.h"

using namespace std;

namespace Tasks
{
	class Task_4 : public InterfaceTask
	{
	public: int Invoke()
	{
		double a, b, c;
		cout << "Give me 3 doubles\n";
		cout << "First:\n";
		cin >> a;
		cout << "Second:\n";
		cin >> b;
		cout << "Third:\n";
		cin >> c;
		cout << "Success!!! You entered: \n" << a << " " << b << " " << c << endl;

		return 1;
	}
	};
}