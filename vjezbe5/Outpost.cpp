#include <iostream>
#include "Outpost.hpp"

Outpost::Outpost() {
	villager = nullptr;
}

Outpost::Outpost(Villager* villager) {
	this->villager = villager;
}

Outpost::Outpost(const Outpost& outpost) {
	if (outpost.villager != nullptr) {
		villager = new Villager(*(outpost.villager));
	}
}

Outpost::~Outpost() {
	if (villager != nullptr) {
		delete villager;
	}
}

void Outpost::info() {
	std::cout << "Outpost: ";
	if (villager) {
		villager->info();
	} else {
		std::cout << "ne sadrzi villagera" << std::endl;
	}
}