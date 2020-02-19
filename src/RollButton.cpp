#include "RollButton.h"
#include "Game.h"
#include "Util.h"
RollButton::RollButton()
	:Button(
		"../Assets/textures/rollButton.png",
		"rollButton",
		ROLLBUTTON, glm::vec2(300, 400)), m_isClicked(false)
{
}

RollButton::~RollButton()
{
}

bool RollButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{

			int x = int(Util::RandomRange(1.0f,6.0f));
			int y = int(Util::RandomRange(1.0f, 6.0f));
			
			std::cout << x << std::endl;
			std::cout << y << std::endl;

		//	std::cout << "rand" << (h) << std::endl;
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
