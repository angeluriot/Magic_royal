#include "cards/creatures/whites/MegaKnight.hpp"

MegaKnight::MegaKnight(): Creature() {}

std::string MegaKnight::get_full_type() const
{
	return Creature::get_full_type() + " - Knight";
}

Card::Color MegaKnight::get_color() const
{
	return Color::White;
}

std::string MegaKnight::get_name() const
{
	return "Mega Knight";
}

std::vector<Creature::Capacity> MegaKnight::get_capacities() const
{
	return
	{
		Capacity::ZoneDamage
	};
}

std::string MegaKnight::get_description() const
{
	return "";
}

Card::Cost MegaKnight::get_cost() const
{
	return
	{
		{ Color::Colorless, 5 },
		{ Color::White, 2 }
	};
}

int MegaKnight::get_full_power() const
{
	return 3;
}

int MegaKnight::get_full_toughness() const
{
	return 6;
}