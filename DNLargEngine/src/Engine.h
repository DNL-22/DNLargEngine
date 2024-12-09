#pragma once

#ifndef ENGINE_H
#define ENGINE_H

namespace GameEngine
{
	class Engine {
	public:
		void start();
	};
}

class Game {
public:

	void start();

};

class GameWindow
{
public:
	const char* windowName = "Xenon 2022";
	int windowWidth = 640;
	int windowHeight = 480;
};



#endif // ENGINE_H