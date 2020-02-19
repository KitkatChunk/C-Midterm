#include "RollButton.h"
#include "Game.h"
#include "Util.h"
RollButton::RollButton()
	:Button(
		"../Assets/textures/rollButton.png",
		"rollButton",
		ROLLBUTTON, glm::vec2(400, 300)), m_isClicked(false)
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
			float h = rand();
			
			std::cout << "hi " << x << std::endl;

			std::cout << "rand" << (h) << std::endl;
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
