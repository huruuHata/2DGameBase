
#pragma once

#include "..\\..\\..\\GameBase.h"
#include "..\\..\\Engine\\Vector2Int\\Vector2Int.h"

class BaseObject
{
public:


protected:

	struct DrawSet
	{
		int texture_num;
		int image_width;
		int image_height;
		int draw_width;
		int draw_height;
		std::string filename;
	};

	void Draw(Engine* pEngine, const Vector2Int position, const DrawSet& draw);

};
