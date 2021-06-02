#include <iostream>
#include <cstring>
#include <utility>

//klasa StringBack
class StringBack
{
    //deklaracja przyjazni funkcji wypisujacej z klasa
    friend std::ostream& operator <<(std::ostream& stream, const StringBack& s);
    public:
        //konstruktor bezparametrowy
        StringBack();
        //kunstruktor jednoparametrowy
        StringBack(const char* text);
        //konstruktor przenoszacy
        StringBack(StringBack&& s);
        //funkcja zwalniajaca pamiec zaalokowana dla elementów listy 
        void del();
        //destruktor
        ~StringBack();
        //przeladowany operator -= dodajacy obiekt zawierajacy text
        void operator -=(const char* text);
        //przeladowany operator -= dodajacy obiekt klasy do listy
        void operator -=(StringBack* s);
        //przeladowany operator -= dodajacy obiekt klasy do listy
        void operator -=(StringBack&& s);
        //przeladowany operator -= pozwalajacy przypisac std::move(m)
        void operator =(StringBack&& s);
        //funkcja zwracajaca liczbe znakow w napisie
        int size() const;
        //funkcja zwracajaca liczbe fragmentow
        int fragments() const;
        //funkcja zwracajaca i-ty StringBack z listy polaczonej
        const StringBack& fragment(const int i) const;
        //funkcja zwracajaca tekst przechowywany w obiekcie
        const char* str() const;

    private:
        char* _text;
        int _n;
        StringBack* _next;
};

//funkcja wypisujaca zawartosc obiektu klasy 
std::ostream& operator <<(std::ostream& stream, const StringBack& s);