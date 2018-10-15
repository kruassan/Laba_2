#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>
#include "ITask.h"

using namespace std;

namespace Tasks
{
	class Task_6 : public InterfaceTask
	{
	public: int Invoke()
	{
		double a,b,c, perimeter,s = 0;

		cout << "Get me a\n";
		cin >> a;
		cout << "Get me b\n";
		cin >> b;
		cout << "Get me c\n";
		cin >> c;

		if (a >= b + c || b >= a + c || c >= a + b)
		{
			cout << "Uncorrect triangle!";
			return 1;
		}
		perimeter = (a + b + c) / 2;
		cout << "Perimeter / 2 = " << perimeter << endl;
		
		s = sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c));
		cout << "Question is " << s << endl;

		return 1;
	}
	};
}