
#define _USING_V110_SDK71_ 1

#include "GameUI.h"

using namespace KeyString;

void GameUI::Initialize()
{
	// UI設定ファイル読込

	json data = FileCheck::FileOpenCheck(FILE_GAME_UI);

	BaseUI::InitializeImage(m_ui_white, data, "White");
	BaseUI::InitializeImage(m_ui_green, data, "Green");
	BaseUI::InitializeImage(m_ui_blue, data, "Blue");
	BaseUI::InitializeImage(m_ui_purple, data, "Purple");
}

void GameUI::Draw(Engine* pEngine, int color_num)
{
	switch (color_num)
	{
	case WHITE:	 DrawUI(pEngine, m_ui_white);  break;
	case GREEN:	 DrawUI(pEngine, m_ui_green);  break;
	case BLUE:	 DrawUI(pEngine, m_ui_blue);   break;
    case PURPLE: DrawUI(pEngine, m_ui_purple); break;

	default: break;
	}
}
