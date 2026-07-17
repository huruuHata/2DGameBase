
#define _USING_V110_SDK71_ 1

#include "Player.h"

using namespace KeyString;
using namespace InputKey;

void Player::Initialize()
{
	json m_data;

	m_data = FileCheck::FileOpenCheck(FILE_PLAYER);

	m_draw.position = Vector2Int(m_data["Position"]["x"], m_data["Position"]["y"]);

	m_draw.image_width = m_data["Image"]["Width"];
	m_draw.image_height = m_data["Image"]["Height"];
	m_draw.draw_width = m_data["Draw"]["Width"];
	m_draw.draw_height = m_data["Draw"]["Height"];

	m_draw.filename = m_data["Texture"];
	m_draw.texture_num = m_data["TextureNum"];
	m_draw.chip_col = m_data["ChipCol"];

	m_move_speed = m_data["MoveSpeed"];
}

void Player::Update(Engine * pEngine)
{
	KeyInput(pEngine);

	Move();
}

void Player::Draw(Engine * pEngine)
{
	BaseObject::Draw(pEngine);
}

int Player::GetColorNumber()
{
	return m_draw.texture_num;
}

//適宜これより下はクラス分けしてください

void Player::KeyInput(Engine* pEngine)
{
	if (pEngine->GetKeyState(DIK_W)) m_key_flag |= UP_KEY;
	else							 m_key_flag &= ~UP_KEY;

	if (pEngine->GetKeyState(DIK_S)) m_key_flag |= DOWN_KEY;
	else							 m_key_flag &= ~DOWN_KEY;

	if (pEngine->GetKeyState(DIK_D)) m_key_flag |= RIGHT_KEY;
	else							 m_key_flag &= ~RIGHT_KEY;

	if (pEngine->GetKeyState(DIK_A)) m_key_flag |= LEFT_KEY;
	else						     m_key_flag &= ~LEFT_KEY;
}

void Player::Move()
{
	if (m_key_flag & UP_KEY)
	{
		m_draw.texture_num = WHITE;
		m_draw.position.y -= m_move_speed;
	}
	if (m_key_flag & DOWN_KEY)  
	{
		m_draw.texture_num = GREEN;
		m_draw.position.y += m_move_speed;
	}
	if (m_key_flag & LEFT_KEY)
	{
		m_draw.texture_num = BLUE;
		m_draw.position.x -= m_move_speed;
	}
	if (m_key_flag & RIGHT_KEY) 
	{
		m_draw.texture_num = PURPLE;
		m_draw.position.x += m_move_speed;
	}
}
