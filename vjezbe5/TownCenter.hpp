#pragma once
#include "Outpost.hpp"

class TownCenter {
public:
	TownCenter();
	Villager* trainVillager();
	Villager* trainVillager(int hitPoints);
	Outpost* buildOutpost();
	Outpost* buildOutpost(Villager* villager);
	void info();
private:
	int villagerCount;
	int buildingCount;
};