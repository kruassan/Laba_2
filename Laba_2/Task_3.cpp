#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "ITask.h"

using namespace std;

namespace Tasks
{
	class Task_3 : public InterfaceTask
	{
	public: int Invoke()
	{
		const double pi = 3.14;

		std::cout << "Pi is " << pi << '\n' << "Please, get me radius.\n";

		int radius = -1;

		std::cin >> radius;

		std::cout << "Radius is " << pi * pi*radius << std::endl;

		return 1;
	}
	};
}