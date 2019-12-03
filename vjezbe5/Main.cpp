#include "TownCenter.hpp"


int main() {
	TownCenter townCenter;
	Villager* villager = townCenter.trainVillager();
	villager->info();

	Outpost* outpost1 = townCenter.buildOutpost();
	outpost1->info();

	Outpost* outpost2 = townCenter.buildOutpost(villager);
	outpost2->info();

	townCenter.info();
}