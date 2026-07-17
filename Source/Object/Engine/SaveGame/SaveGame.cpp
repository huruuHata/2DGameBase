
#define _USING_V110_SDK71_ 1

#include "SaveGame.h"

using namespace KeyString;

void SaveGame::SaveFile(const SaveData& data)
{
	json save = FileCheck::FileOpenCheck(FILE_SAVE); 

	std::ofstream file(FILE_SAVE);

	if (file.is_open()) 
	{
		file << save.dump(4);  //インデント幅４で整形出力
	}
}

SaveGame::SaveData SaveGame::LoadFile()
{
	SaveData data;

	std::ifstream file(FILE_SAVE);

	if (file.is_open()) 
	{
		try 
		{
			json save;
			file >> save;

			//ここにセーブデータから変数を受け取る
		}
		catch (const json::exception& e) 
		{
			std::cerr << "JSONの読み込みに失敗しました: " << e.what() << std::endl;
		}
	}
	else 
	{
		std::cerr << "セーブファイルが開けませんでした" << std::endl;
	}

	return data;

}
