#include "RollButton.h"
#include "Game.h"
#include "Util.h"
/*Abdulkarem Alani 300993768*/

RollButton::RollButton()
	:Button(
		"../Assets/textures/rollButton.png",
		"rollButton",
		ROLLBUTTON, glm::vec2(300, 400)), m_isClicked(false)
{
	TheSoundManager::Instance()->load("../Assets/audio/yay.ogg", "yay", SOUND_SFX);
}

RollButton::~RollButton()
{
}

bool RollButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{	//play sound and generate random numbers.
			TheSoundManager::Instance()->playSound("yay", 0);
			//int x = int(Util::RandomRange(1.0f,6.0f));
			ab = int(Util::RandomRange(1.0f, 6.0f));
			a = int(Util::RandomRange(1.0f, 6.0f));
			
		//	std::cout << x << std::endl;
		//	std::cout << y << std::endl;
		//	std::cout << a << std::endl;

			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}
