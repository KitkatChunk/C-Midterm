#include "DiceTwoImage.h"
#include "Game.h"

DiceTwoImage::DiceTwoImage()
{
	TheTextureManager::Instance()->load("../Assets/textures/5.png",
		"DiceTwoImage", TheGame::Instance()->getRenderer());

	// measure size by querying the texture
//	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("ocean");
	setWidth(200);
	setHeight(200);
}

DiceTwoImage::~DiceTwoImage()
{
}

void DiceTwoImage::draw()
{
	int xComponent = getPosition().x;
	int yComponent = getPosition().y;

	TheTextureManager::Instance()->draw("DiceTwoImage", xComponent, yComponent,
		TheGame::Instance()->getRenderer(), 0, 255, false);
}

void DiceTwoImage::update()
{
}

void DiceTwoImage::clean()
{
}
