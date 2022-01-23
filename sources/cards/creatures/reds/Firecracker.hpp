#ifndef FIRECRACKER_HPP
#define FIRECRACKER_HPP

#include "cards/Creature.hpp"

class Firecracker : public Creature
{
public:

	Firecracker();
	Firecracker(const Firecracker& other) = default;
	~Firecracker();

	Firecracker& operator=(const Firecracker& other) = default;

	std::string get_full_type() const override;
	Color get_color() const override;
	std::string get_name() const override;
	std::vector<Capacity> get_capacities() const override;
	std::string get_description() const override;
	Cost get_cost() const override;
	int get_full_power() const override;
	int get_full_toughness() const override;
	Card* clone() const override;
};

#endif