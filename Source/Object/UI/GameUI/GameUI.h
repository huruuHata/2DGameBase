
#pragma once

#include "..\\..\\Base\\BaseUI\\BaseUI.h"

class GameUI : public BaseUI
{
public:

	void Initialize();
	void Draw(Engine* pEngine, int color_num);

private:

	UIData m_ui_white;
	UIData m_ui_green;
	UIData m_ui_blue;
	UIData m_ui_purple;
};