#pragma once
#include "pch.h"
#include <iostream>
#include <conio.h>
#include <string>

namespace Tasks
{
	class InterfaceTask
	{
	public: virtual int Invoke()
	{
		return -1;
	}
	};
}