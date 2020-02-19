#pragma once
#ifndef __DiceOneImage__
#define __DiceOneImage__

#include "DisplayObject.h"

class DiceOneImage : public DisplayObject
{
public:
	DiceOneImage();
	~DiceOneImage();

	void draw() override;
	void update() override;
	void clean() override;
private:

};

#endif /* defined (__Background__) */