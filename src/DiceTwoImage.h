#pragma once
#ifndef __DiceTwoImage__
#define __DiceTwoImage__

#include "DisplayObject.h"

class DiceTwoImage : public DisplayObject
{
public:
	DiceTwoImage();
	~DiceTwoImage();

	void draw() override;
	void update() override;
	void clean() override;
private:

};

#endif /* defined (__Background__) */