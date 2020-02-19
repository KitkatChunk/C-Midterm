#pragma once
#ifndef __LEVEL_1_SCENE__
#define __LEVEL_1_SCENE__

#include "Scene.h"
#include "RollButton.h"
#include "DiceOneLabel.h"
#include "DiceTwoLabel.h"
#include "DiceOneImage.h"
#include "DiceTwoImage.h"

class Level1Scene : public Scene
{
public:
	Level1Scene();
	~Level1Scene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;

	// getters
	glm::vec2 getMousePosition();

private:
	// game objects

	RollButton* m_pRollButton;
	DiceOneLabel* m_pDiceOneLabel;
	DiceTwoLabel* m_pDiceTwoLabel;
	DiceOneImage* m_pDiceOneImage;
	DiceTwoImage* m_pDiceTwoImage;
	// private data member
	glm::vec2 m_mousePosition;
	
	
};

#endif /* defined (__LEVEL_1_SCENE__) */
