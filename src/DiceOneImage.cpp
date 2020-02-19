#include "DiceOneImage.h"
#include "Game.h"

DiceOneImage::DiceOneImage()
{
	TheTextureManager::Instance()->load("../Assets/textures/1.png",
		"DiceOneImage", TheGame::Instance()->getRenderer());

	// measure size by querying the texture
//	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("ocean");
	setWidth(200);
	setHeight(200);
}

DiceOneImage::~DiceOneImage()
{
}

void DiceOneImage::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("DiceOneImage", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, false);
}

void DiceOneImage::update()
{
}

void DiceOneImage::clean()
{
}
