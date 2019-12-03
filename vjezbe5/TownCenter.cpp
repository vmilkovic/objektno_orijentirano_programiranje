#include <iostream>
#include "TownCenter.hpp"

TownCenter::TownCenter(): villagerCount(0), buildingCount(0){}

Villager* TownCenter::trainVillager() {
	villagerCount++;
	return new Villager();
}

Villager* TownCenter::trainVillager(int hitPoints) {
	villagerCount++;
	return new Villager(hitPoints);
}

Outpost* TownCenter::buildOutpost() {
	buildingCount++;
	return new Outpost();
}

Outpost* TownCenter::buildOutpost(Villager* villager) {
	buildingCount++;
	return new Outpost(villager);
}

void TownCenter::info() {
	std::cout << "Stvoreno jedinica: " << villagerCount << std::endl;
	std::cout << "Stvoreno gradjevina: " << buildingCount << std::endl;
}