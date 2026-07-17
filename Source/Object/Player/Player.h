
#pragma once

#include "..\\..\\Object\\Base\\BaseObject\\BaseObject.h"

class Player : public BaseObject
{
public:

	void Initialize();
	void Update(Engine* pEngine, const Field& field);
	void Draw(Engine* pEngine);

private:



};

