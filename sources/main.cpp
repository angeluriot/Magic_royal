#include <iostream>
#include "Game.hpp"
#include "renderer/print.hpp"
#include "utils/utils.hpp"

int main()
{
	srand((unsigned int)time(NULL));
	clear_console();
	std::cout << yellow << bold <<
		"                     _                               _\n"
		"   /\\/\\   __ _  __ _(_) ___    _ __ ___  _   _  __ _| | ___\n"
		"  /    \\ / _` |/ _` | |/ __|  | '__/ _ \\| | | |/ _` | |/ _ \\\n"
		" / /\\/\\ \\ (_| | (_| | | (__   | | | (_) | |_| | (_| | |  __/\n"
		" \\/    \\/\\__,_|\\__, |_|\\___|  |_|  \\___/ \\__, |\\__,_|_|\\___|\n"
		"               |___/                     |___/\n" <<
		" ___________________________________________________________\n"
		"|___________________________________________________________|" << End(2);

	std::cout << End(1) << yellow << bold << "--=( Welcome to Magic Royale! )=--" << End(2);

	while (true)
	{
		std::cout << "What do you want to do?" << End(1);
		int res = choice({ "- Play -", "- Quit -" }, { green, red });

		if (res == 0)
		{
			Game::start();
			Game::create_decks();
			Game::play();
		}

		else
		{
			quit_game();
			continue;
		}
	}

	return EXIT_SUCCESS;
}
