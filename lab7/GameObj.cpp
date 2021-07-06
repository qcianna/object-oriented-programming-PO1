#include "GameObj.h"

HP::HP(int n): _n(n)
{}

int HP::return_hp() const
{
    return _n;
}

GameObj::GameObj(std::string id): _id(id)
{}

std::string GameObj::id() const
{
    return _id;
}

std::string Character::hp() const
{
    return "[" + std::to_string(_hp.return_hp()) + " HP]";
}

std::string Hurting::hp() const
{
    return "[" + std::to_string(_hp.return_hp()) + " HP]";
}

std::ostream& operator << (std::ostream& stream, const GameObj& g)
{
    g.print();
    return stream;
}

Character::Character(HP hp, std::string name, std::string id): GameObj(id), _hp(hp), _name(name)
{}

Player::Player(HP hp, std::string name, std::string id): GameObj(id), Character(hp, name, id)
{}

Hurting::Hurting(HP hp, std::string id): GameObj(id), _hp(hp)
{}

Boss::Boss(HP hp1, std::string name, HP hp2, std::string id): GameObj(id), Character(hp1, name, id), Hurting(hp2, id)
{}

Bomb::Bomb(HP hp, std::string id): GameObj(id), Hurting(hp, id)
{}

void Character::print() const
{
    std::cout << _name << ", ma: " << hp();
}

void Hurting::print() const
{
    std::cout << "Jego uderzenie odbiera: " << hp();
}

void Player::print() const
{
    std::cout << "Player ";
    Character::print();
}

void Boss::print() const
{
    std::cout << "Bad guy: ";
    Character::print();
    std::cout << std::endl;
    Hurting::print();
}