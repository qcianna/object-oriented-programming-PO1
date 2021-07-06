#pragma once
#include <iostream>

//klasa HP niezalezna
class HP
{
    public:
        //jednoargumentowy konstruktor klasy HP
        // n - ilosc hp
        HP(int n);
        //funkcja zwracajaca ilosc hp
        int return_hp() const;
    
    // prywatny atrybut _n - ilosc hp
    private:
        int _n;
};

//klasa podstawowa
class GameObj
{
    public:
        // konstruktor jednoargumentowy
        GameObj(std::string id);
        //funkcja zwracajaca stringa informujacego o id
        std::string id() const;
        //czysto virtualna funkcja bedaca pozniej nadpisywana override
        virtual void print() const = 0;
        //wirtualny dekonstruktor
        virtual ~GameObj() {};
    
    //atrybut _id dostepny dla klas dziedziczacych
    protected:
        std::string _id;
};

//funkcja przeladowujaca operator << drukuje informacje o obiekcie
std::ostream& operator << (std::ostream& stream, const GameObj& g);

//klasa character dziedziczy po gameobj
class Character: public virtual GameObj
{
    public:
        //konstruktor klasy
        Character(HP hp, std::string name, std::string id);
        //funkcja drukujaca info
        void print() const override;
        //zwraca stringa o ilosci hp postaci
        std::string hp() const;

    //prywatne atrybuty
    //_name - imie postaci
    //_hp - ilosc zdrowia postaci
    protected:
        std::string _name;
        HP _hp;
};

//klasa hurting dziedziczy po gameobj
class Hurting: public virtual GameObj
{
    public:
        //konstruktor klasy
        Hurting(HP hp, std::string id);
        //funkcja drukujaca info
        void print() const override;
        //zwraca stringa o ilosci hp postaci
        std::string hp() const;
    
    // hp - ilosc punktow obreażen jakie zadaje postac
    protected:
        HP _hp;
};

//klasa player dziedziczy po character
class Player: public Character
{
    public:
        // konstruktor
        Player(HP hp, std::string name, std::string id);
        //funkcja drukujaca info
        void print() const override;
};

//klasa Boss dziedziczy po character i hurting
class Boss: public Character, public Hurting
{
    public:
        // konstruktor 
        Boss(HP hp1, std::string name, HP hp2, std::string id);
        //funkcja drukujaca info
        void print() const override;
};

// klasa bomb dziedziczy po hurting
class Bomb: public Hurting
{
    public:
        // konstruktor
        Bomb(HP hp, std::string id);
};


