//#include <iostream>
//
//using namespace std;
//
//struct Player0 {
//
//};
//
//class Player
//{
//private:
//    int _health;
//    int _power;
//    string _name;
//public:
//    Player(int health, int power, string name)
//    {
//        _health = health;
//        _power = power;
//        _name = name;
//
//    }
//    void attack(Player& target)
//    {
//        cout << " Attack" << _name << "->" << target._name << endl;
//        target.damaged(_power);
//    }
//    void damaged(int power)
//    {
//        _health -= power;
//        if (_health <= 0)
//        {
//            cout << "Died. " << _name << endl;
//        }
//    }
//};
//
//
//
//
//int main() {
//    Player player0(200, 100, "P1");
//    Player player1(200, 100, "P2");
//
//    player0.attack(player1);
//    player0.attack(player1);
//    player0.damaged(200);
//
//}