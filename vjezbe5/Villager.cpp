#include <iostream>
#include "Villager.hpp"

#define HIT_POINTS 25
#define ATTACK 3
#define SPEED 0.8

Villager::Villager() : Villager::Villager(HIT_POINTS, ATTACK, SPEED){}

Villager::Villager(int hitPoints) : Villager::Villager(hitPoints, ATTACK, SPEED){}

Villager::Villager(int hitPoints, int attack, double speed) {
	setHitPoints(hitPoints);
	setAttack(attack);
	setSpeed(speed);
}

Villager::Villager(const Villager &villager) :
	Villager::Villager(villager.hitPoints, villager.attack, villager.speed) {
	setHitPoints(HIT_POINTS);
}

void Villager::setHitPoints(int hitPoints){
	if (hitPoints >= 0 && hitPoints <= HIT_POINTS) {
		this->hitPoints = hitPoints;
	}
}

int Villager::getHitPoints() {
	return hitPoints;
}

void Villager::setAttack(int attack) {
	if (attack >= 0 && attack <= ATTACK) {
		this->attack = attack;
	}
}

int Villager::getAttack() {
	return attack;
}

void Villager::setSpeed(double speed) {
	if (speed >= 0 && speed <= SPEED) {
		this->speed = speed;
	}
}

double Villager::getSpeed() {
	return speed;
}

void Villager::info() {
	std::cout << "Villager (";
	std::cout << hitPoints << ", ";
	std::cout << attack << ", ";
	std::cout << speed << ")" << std::endl;
}