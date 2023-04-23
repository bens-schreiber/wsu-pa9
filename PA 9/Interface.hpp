#pragma once

#include "consts.hpp"
#include "FrameListenable.hpp"
#include "PlayerCollidable.hpp"
#include <sstream>

class Interface : public FrameListenable, PlayerCollidable
{
public:

	Interface() : PlayerCollidable() 
		{};

	void draw()
	{
		DrawRectangle(0, 0, screenWidth, interfaceBarHeight, BLACK);
		DrawText("LEVEL: 1", 30, 10, 50, WHITE);

		std::stringstream ss;
		ss << "FAILS: " << player().getDeaths();

		DrawText(ss.str().c_str(), screenWidth - 250, 10, 50, WHITE);
		DrawRectangle(0, screenHeight - interfaceBarHeight, screenWidth, interfaceBarHeight, BLACK);
	}

	void update()
	{

	}

	// Do nothing for collision
	void handleCollision() {}
};