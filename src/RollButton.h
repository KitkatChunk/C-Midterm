#pragma once
#ifndef __ROLL_BUTTON__
#define __ROLL_BUTTON__

#include "Button.h"
#include "Util.h"
class RollButton : public Button
{
public:
	RollButton();
	~RollButton();

	//public variables for dice
	int a = 0;
	int ab = 0;

	bool ButtonClick() override;
private:
	bool m_isClicked;
};

#endif /* defined (__ROLL_BUTTON__) */