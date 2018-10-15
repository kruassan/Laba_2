#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "ITask.h"

using namespace std;

namespace Tasks
{
	struct typeDataStruct
	{
		string name;
		int size;
	};


	class Task_1 : public InterfaceTask
	{

	public: int Invoke()
	{
		typeDataStruct* structs = new typeDataStruct[6];
		int len = 6;

		structs[0].name = "Char ";
		structs[0].size = sizeof(char);

		structs[1].name = "Float ";
		structs[1].size = sizeof(float);

		structs[2].name = "Short ";
		structs[2].size = sizeof(short);

		structs[3].name = "Int ";
		structs[3].size = sizeof(int);

		structs[4].name = "Long ";
		structs[4].size = sizeof(long);

		structs[5].name = "Long double ";
		structs[5].size = sizeof(long double);

		for (int x = 0; x < 6; x++)
		{
			int min_pos = x;

			for (int y = x; y < 6; y++)
			{
				if (structs[min_pos].size < structs[y].size)
				{
					min_pos = y;
				}
			}
			typeDataStruct third = structs[x];
			structs[x] = structs[min_pos];
			structs[min_pos] = third;
		}

		for (int x = 0; x < 6; x++)
		{
			std::cout << structs[x].name << " size = " << structs[x].size << " bytes\n";
		}

		return 1;
	}
	};
}