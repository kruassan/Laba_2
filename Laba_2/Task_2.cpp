#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "ITask.h"

using namespace std;

namespace Tasks
{
	class Task_2 : public InterfaceTask
	{
	public: int Invoke()
	{
		std::cout << "We have variables:\nint a=5\nb=1\nc=4\nd\n";
		std::cout << "Result of this:\nd=++a*b++-++c;\nWill be...\n";
		int a = 5, b = 1, c = 4, d;
		int x = a * b;
		d = ++a*b++ - ++c;
		cout << d;

		return 1;
	}

	};
}