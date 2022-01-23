#include "cards/creatures/greens/ElixirGolem.hpp"
#include "players/Player.hpp"
#include "cards/creatures/generateds/ElixirGolemites.hpp"

ElixirGolem::ElixirGolem(): Creature(get_full_power(), get_full_toughness(), get_capacities()) {}

ElixirGolem::~ElixirGolem() {}

std::string ElixirGolem::get_full_type() const
{
	return Creature::get_full_type() + " - Golem";
}

Card::Color ElixirGolem::get_color() const
{
	return Color::Green;
}

std::string ElixirGolem::get_name() const
{
	return "Elixir Golem";
}

std::vector<Creature::Capacity> ElixirGolem::get_capacities() const
{
	return
    {
        Capacity::Unblockable
    };
}

std::string ElixirGolem::get_description() const
{
	return Creature::get_description() + "Spawns 1 Elixir Golemites on death.";
}

Card::Cost ElixirGolem::get_cost() const
{
	return
	{
		{ Color::Colorless, 2 },
        { Color::Green, 1 }
	};
}

int ElixirGolem::get_full_power() const
{
	return 1;
}

int ElixirGolem::get_full_toughness() const
{
	return 4;
}

void ElixirGolem::die()
{
	m_owner->creatures.add(ElixirGolemites());
	m_owner->creatures.back().set_owner(*m_owner);
}

Card* ElixirGolem::clone() const
{
	return new ElixirGolem(*this);
}
