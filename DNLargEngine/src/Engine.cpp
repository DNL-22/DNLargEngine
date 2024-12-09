#include <iostream>
#include <SDL.h>
#include "Engine.h"

// Global SDL Variables
SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;
SDL_Texture* texture = nullptr;
SDL_Texture* background = nullptr;


namespace GameEngine
{
	void Engine::Update()
	{
		if (SDL_Init(SDL_INIT_VIDEO) < 0) {
			std::cout << "Video Initialization Error: " << SDL_GetError() << std::endl;
			return;
		}
		window = SDL_CreateWindow("TAPJ", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
			640, 480, SDL_WINDOW_OPENGL);
		if (window == NULL) {
			std::cout << "Window Creation Error: " << SDL_GetError() << std::endl;
			return;
		}
		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
		if (renderer == NULL) {
			std::cout << "Renderer Creation Error: " << SDL_GetError() << std::endl;
			return;
		}
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
		SDL_Delay(5000);
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
		SDL_Quit();
	}
}



//int main(int argc, char* argv[])
//{
//	SDL_Window* window = nullptr;
//
//	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
//		std::cout << "Video Initialization Error: " << SDL_GetError() << std::endl;
//		return 1;
//	}
//
//	window = SDL_CreateWindow("TAPJ", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
//		640, 480, SDL_WINDOW_OPENGL);
//
//	if (window == NULL) {
//		std::cout << "Window Creation Error: " << SDL_GetError() << std::endl;
//		return 2;
//	}
//	SDL_UpdateWindowSurface(window);
//	SDL_Delay(2000);
//
//	SDL_DestroyWindow(window);
//	SDL_Quit();
//
//	return 0;
//}
//
//
//void Engine::start()
//{
//	std::cout << "Engine started!!!" << std::endl;
//}

