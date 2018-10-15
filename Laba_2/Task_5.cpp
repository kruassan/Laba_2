#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "ITask.h"

using namespace std;

namespace Tasks
{
	static void SaySmth_printf(std::string smth)
	{
		printf("%s", smth.c_str());
	}

	static void SaySmth_cout(std::string smth)
	{
		cout << smth;
	}

	static std::string GetSmth_scanf()
	{
		char cmd[40];
		scanf_s("%s", cmd);
		string str(cmd);
		return str;
	}

	static std::string GetSmth_cin()
	{
		std::string result;

		cin >> result;

		return result;
	}

	class Task_5 : public InterfaceTask
	{
		void(*SaySmth)(std::string smth);
		
		std::string(*GetSmth)();

	public: int Invoke()
	{
		cout << "Do you want use printf() and scanf() or std streams? Please, enter 1 or 2.\n";

		while (true)
		{
			int in_out_variant = 0;

			cin >> in_out_variant;

			if (in_out_variant == 1)
			{
				SaySmth = SaySmth_printf;
				GetSmth = GetSmth_scanf;
				break;				
			}
			else if (in_out_variant == 2)
			{
				SaySmth = SaySmth_cout;
				GetSmth = GetSmth_cin;
				break;
			}
			else
			{
				cout << "I. SAID. 1. OR. 2. WHY YOU ENTERED " << in_out_variant << "!?!?!??!\n";
				continue;
			}
		}

		int learnVariant = -1;

		SaySmth("Give me your variant\n");
		learnVariant = std::stoi(GetSmth());
		
		switch (learnVariant)
		{
		case(1):
		{
			FillUserBirth_1();
			break;
		}
		case(2):
		{
			FillUserPhysicalData();
			break;
		}
		case(3):
		{
			FillUserLearningData();
			break;
		}
		case(4):
		{
			FillUserBirth_2();
			break;
		}
		case(5):
		{
			FillUserBirth_3();
			break;
		}
		case(6):
		{
			FillUserContacts();
			break;
		}
		default:
		{
			SaySmth("Incorrect variant.\n");
			return 1;
		}
		}

		SaySmth("\nData entering success!");

		return 1;
	}

	public: void FillUserBirth_1()
	{
		SaySmth("Okay. Get me year\n");
		std::string year = GetSmth();
		SaySmth("Get me month\n");
		std::string month = GetSmth();
		SaySmth("Get me day\n");
		std::string day = GetSmth();

		SaySmth("Result date is " + year + "." + month + "." + day);
	}
	
	public: void FillUserPhysicalData()
	{
		SaySmth("Okay. Get me your old\n");
		std::string years = GetSmth();
		SaySmth("Get me height\n");
		std::string len = GetSmth();
		SaySmth("Get me mass\n");
		std::string mass = GetSmth();

		SaySmth("Your data is " + years + " " + len + " " + mass);
	}
	
	public: void FillUserLearningData()
	{
		SaySmth("Okay. Get me your learn begining date\n");
		std::string year = GetSmth();
		SaySmth("Get me your group\n");
		std::string group = GetSmth();
		SaySmth("Get me number in list\n");
		std::string number = GetSmth();

		SaySmth("Your data is " + year + " " + group + " " + number);
	}
	
	public: void FillUserBirth_2()
	{
		SaySmth("Okay. Get me your birth date\n");
		std::string year = GetSmth();
		SaySmth("Get me your birth month\n");
		std::string month = GetSmth();
		SaySmth("Get me your birth old\n");
		std::string old = GetSmth();

		SaySmth("Your birth  is " + year + " " + month + " and your old is " + old);
	}

	public: void FillUserBirth_3()
	{
		SaySmth("Okay. Get me your birth year\n");
		std::string year = GetSmth();
		SaySmth("Get me your birth month\n");
		std::string month = GetSmth();
		SaySmth("Get me your birth day\n");
		std::string day = GetSmth();

		SaySmth("Your birth date ");
		SaySmth(year);
		SaySmth(".");
		SaySmth(month);
		SaySmth(".");
		SaySmth(day);
	}
	
	public: void FillUserContacts()
	{
		SaySmth("Okay. Get me your home telephone number\n");
		std::string home = GetSmth();
		SaySmth("Get me your your work telephone number\n");
		std::string work = GetSmth();
		SaySmth("Get me your mobile number\n");
		std::string mobile = GetSmth();

		SaySmth("Your numbers... Home:" + home + "\nWork:" + work + "\nMobile:" + mobile);
	}
	};	
}