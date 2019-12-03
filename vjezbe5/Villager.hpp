#pragma once
class Villager {
public:
	Villager();
	Villager(int hitPoints);
	Villager(int hitPoints, int attack, double speed);
	Villager(const Villager& villager);
	void setHitPoints(int hitPoints);
	int getHitPoints();
	void setAttack(int attack);
	int getAttack();
	void setSpeed(double speed);
	double getSpeed();
	void info();
private:
	int hitPoints;
	int attack;
	double speed;
};