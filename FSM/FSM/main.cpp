#include "animation.h"
#include "climbing.h"
#include "jumping.h"

#include <iostream>
#include <chrono>
#include <thread>

#include <SFML/Graphics.hpp>
#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 

int main()
{
	Animation fsm; int i = 0;
	bool idle = true;
	Jumping jmp;

	while (true)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			idle = true;
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			idle = true;
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			fsm.shovelling();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			idle = true;
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}

		if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) || (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)))
		{
			fsm.walking();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			idle = true;
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift))
		{
			fsm.hammering();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			idle = true;
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::LAlt))
		{
			fsm.swordmanship();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			idle = true;
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}

		if (idle == true)
		{
			fsm.idle();
			idle = false;
		}
	}
}