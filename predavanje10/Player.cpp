#include <iostream>

class Player {
    private:
        int id;
        static int next_id;
    public:
        int getID() { return id; }
        Player() { id = next_id++; }
};
int Player::next_id = 1;

int main(){
    Player p1;
    Player p2;
    Player p3;
    std::cout << p1.getID() << " ";
    std::cout << p2.getID() << " ";
    std::cout << p3.getID() << " ";
}