#pragma once
#include "Villager.hpp"

class Outpost {
public:
	Outpost();
	Outpost(Villager* villager);
	Outpost(const Outpost& outpost);
	~Outpost();
	void info();
private:
	Villager* villager;
};