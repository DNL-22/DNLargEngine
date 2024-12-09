#include <iostream>
#include "Engine.h"


int main()
{
	GameWindow gameWindow;
	gameWindow.windowName = "Xenon 2000";
	gameWindow.windowWidth = 640;
	gameWindow.windowHeight = 480;
	GameEngine::Engine.Initialize(gameWindow);
}