
#define _USING_V110_SDK71_ 1

#include "BaseObject.h"

void BaseObject::Draw(Engine * pEngine, const Vector2Int position, const DrawSet & draw)
{
	RECT sour, dest;

	SetRect(&sour, draw.texture_num * draw.image_width, 0, draw.texture_num  * draw.draw_width + draw.draw_width, draw.draw_height);

	SetRect(&dest, position.x, position.y, position.x + draw.draw_width, position.y + draw.draw_height);

	pEngine->Blt(&dest, draw.filename, &sour);
}
