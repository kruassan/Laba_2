#include "pch.h"
#include <iostream>
#include <conio.h>

#include "ITask.h"
#include "Task_1.cpp"
#include "Task_2.cpp"
#include "Task_3.cpp"
#include "Task_4.cpp"
#include "Task_5.cpp"
#include "Task_6.cpp"

using namespace std;

void InitTasks(Tasks::InterfaceTask** taskPtr);

int main()
{
	Tasks::InterfaceTask** tasks = new (Tasks::InterfaceTask*[6]);

	InitTasks(tasks);

	cout << "Hello! Thi is my programm. Press esc to exit.\n";

	while (true)
	{
		int task_num = 0;
		int task_count = 6;

		cout << "Get me task number\n (1-6)\n";
		cin >> task_num;

		if (task_num < 0 || task_num > task_count)
		{
			cout << "Oops... incorrect number.\n";
			continue;
		}

		int result = tasks[task_num - 1]->Invoke();
		if (result == -1)
		{
			cout << "Smth is not working :( Press esc to exit\n";
			if (_getch() == 27)
			{
				cout << "Goodbye!";
				return 0;
			}

			continue;
		}

		cout << "\nPress any key not esc... or press esc to exit\n";

		if (_getch() == 27)
		{
			cout << "Goodbye!";

			return 0;
		}

		system("cls");
	}

	return 0;
}

void InitTasks(Tasks::InterfaceTask** taskPtr)
{
	taskPtr[0] = new Tasks::Task_1();
	taskPtr[1] = new Tasks::Task_2();
	taskPtr[2] = new Tasks::Task_3();
	taskPtr[3] = new Tasks::Task_4();
	taskPtr[4] = new Tasks::Task_5();
	taskPtr[5] = new Tasks::Task_6();
}