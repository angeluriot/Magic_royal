#include "Game.hpp"
#include "renderer/Renderer.hpp"

#include "cards/creatures/Barbarian.hpp"
#include "cards/creatures/IceWizard.hpp"

std::array<Player, 2> Game::players;
int Game::turn = 0;

void Game::start()
{
	Renderer::print("                    _        _   _              ___      _   _               _\n"
		"  /\\/\\   __ _  __ _(_) ___  | |_| |__   ___    / _ \\__ _| |_| |__   ___ _ __(_)_ __   __ _\n"
		" /    \\ / _` |/ _` | |/ __| | __| '_ \\ / _ \\  / /_\\/ _` | __| '_ \\ / _ \\ '__| | '_ \\ / _` |\n"
		"/ /\\/\\ \\ (_| | (_| | | (__  | |_| | | |  __/ / /_\\\\ (_| | |_| | | |  __/ |  | | | | | (_| |\n"
		"\\/    \\/\\__,_|\\__, |_|\\___|  \\__|_| |_|\\___| \\____/\\__,_|\\__|_| |_|\\___|_|  |_|_| |_|\\__, |\n"
		"              |___/                                                                  |___/\n", Renderer::Color::Yellow, true);
	Renderer::new_lines(2);
	Renderer::print("---=([  Welcome to Magic the Gathering clone!  ])=---", Renderer::Color::Yellow, true);
	Renderer::new_lines();

	Barbarian barbarian;
	Barbarian barbarian2;
	Barbarian barbarian3;
	IceWizard icewizard;
	barbarian2.block(barbarian);
	barbarian3.block(barbarian);
	icewizard.block(barbarian);
	barbarian.change_order();

	Renderer::confirm();
}

void Game::create_decks()
{
	
}

void Game::play()
{
	
}
