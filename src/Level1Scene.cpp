#include "Level1Scene.h"
#include "Game.h"
#include <iostream>

Level1Scene::Level1Scene()
{
	start();
}

Level1Scene::~Level1Scene()
{
}

void Level1Scene::draw()
{
	m_pRollButton->draw();
	m_pDiceOneLabel->draw();
	m_pDiceTwoLabel->draw();
	m_pDiceOneImage->draw();
	m_pDiceTwoImage->draw();

}

void Level1Scene::update()
{
	m_pRollButton->setMousePosition(m_mousePosition);
	m_pRollButton->ButtonClick();

}

void Level1Scene::clean()
{
}

void Level1Scene::handleEvents()
{
	int wheel = 0;

	SDL_Event event;
	while(SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			TheGame::Instance()->quit();
			break;
		case SDL_MOUSEMOTION:
			m_mousePosition.x = event.motion.x;
			m_mousePosition.y = event.motion.y;
			break;

		case SDL_MOUSEBUTTONDOWN:
			switch(event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(true);
				break;
			}
		
			break;
		case SDL_MOUSEBUTTONUP:
			switch (event.button.button)
			{
			case SDL_BUTTON_LEFT:
				m_pRollButton->setMouseButtonClicked(false);
				
				break;
			}
			break;
		case SDL_MOUSEWHEEL:
			wheel = event.wheel.y;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				TheGame::Instance()->quit();
				break;
			case SDLK_1:
				TheGame::Instance()->changeSceneState(SceneState::START_SCENE);
				break;
			case SDLK_2:
				TheGame::Instance()->changeSceneState(SceneState::END_SCENE);
				break;
			

				/************************************************************************/
			case SDLK_w:
				
				break;
			case SDLK_s:
				
				break;
			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		case SDL_KEYUP:
			switch (event.key.keysym.sym)
			{
			case SDLK_w:
				
				break;

			case SDLK_s:
				
				break;

			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		default:
			break;
		}
	}
}

void Level1Scene::start()
{
	SDL_Color blue = { 0, 0, 255, 255 };

	m_pRollButton = new RollButton();
	m_pRollButton->setMouseButtonClicked(false);


	m_pDiceOneLabel = new DiceOneLabel("Dice One: ", "Consolas", 35, blue, glm::vec2(200.0f, 350.0f));
	m_pDiceOneLabel->setParent(this);
	addChild(m_pDiceOneLabel);


	m_pDiceTwoLabel = new DiceTwoLabel("Dice Two: " , "Consolas", 35, blue, glm::vec2(450.0f, 350.0f));
	m_pDiceTwoLabel->setParent(this);
	addChild(m_pDiceTwoLabel);

	m_pDiceOneImage = new DiceOneImage();
	m_pDiceOneImage->setPosition(glm::vec2(100.0f, 100.0f));
	addChild(m_pDiceOneImage);

	m_pDiceTwoImage = new DiceTwoImage();
	m_pDiceTwoImage->setPosition(glm::vec2(350.0f, 100.0f));
	addChild(m_pDiceTwoImage);

}

glm::vec2 Level1Scene::getMousePosition()
{
	return m_mousePosition;
}

