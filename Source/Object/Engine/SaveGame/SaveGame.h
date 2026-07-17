
//ゲームのセーブとロードを行う

#pragma once

#include "..\\..\\..\\GameBase.h"
#include "..\\..\\Engine\\FileCheck\\FileCheck.h"

#include<iostream>

using json = nlohmann::json;

class SaveGame
{
public:
	
	static SaveGame& getInstance()
	{
		static SaveGame instance;
		return instance;
	}

	struct SaveData
	{
		
	};
 
	static void SaveFile(const SaveData& data);
	static SaveData LoadFile();

private:


	SaveGame() {}

	~SaveGame() = default;
};