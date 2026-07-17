
#pragma once

#include "..\\..\\Object\\Base\\BaseObject\\BaseObject.h"
#include "..\\Engine\\FileCheck\\FileCheck.h"

class Player : public BaseObject
{
public:

	void Initialize();
	void Update(Engine* pEngine);
	void Draw(Engine* pEngine);

private:

	//適宜これより下はクラス分けしてください

	enum
	{
		UP_KEY = 0x01,
		DOWN_KEY = 0x02,
		LEFT_KEY = 0x04,
		RIGHT_KEY = 0x08,
		JUMP_KEY = 0x10,
	};

	enum PlayerColor
	{
		WHITE,
		GREEN,
		BLUE,
		PURPLE,
	};

	void KeyInput(Engine* pEngine);
	void Move();

	unsigned int m_key_flag;

	int m_move_speed;
};

