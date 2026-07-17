
#pragma once

#include "..\\..\\..\\GameBase.h"

class GameSystem
{
public:

	static GameSystem& getInstance()
	{
		static GameSystem instance;
		return instance;
	}


private:

	GameSystem() {}

	~GameSystem() = default;
};