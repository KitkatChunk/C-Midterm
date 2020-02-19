#include "Background.h"
#include "Game.h"

Background::Background()
{
	TheTextureManager::Instance()->load("../Assets/textures/background.jpeg",
		"background", TheGame::Instance()->getRenderer());

	// measure size by querying the texture
//	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("ocean");
	setWidth(1920);
	setHeight(1080);
}

Background::~Background()
{
}

void Background::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("background", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, false);
}

void Background::update()
{
}

void Background::clean()
{
}
