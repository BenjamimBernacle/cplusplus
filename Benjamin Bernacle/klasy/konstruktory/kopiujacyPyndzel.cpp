#include <iostream>
#include <string>

class Pracownik
{
public:
    std::string imie;
    std::string nazwisko;
    Pracownik()
        : imie("Imię domyślne"),
          nazwisko("Nazwisko domyślne")
    {
    }

    Pracownik(std::string imie, std::string nazwisko)
        : imie(imie),
          nazwisko(nazwisko)
    {
    }

    Pracownik(const Pracownik &pr)
        : imie(pr.imie),
          nazwisko(pr.nazwisko)
    {
    }

    void wyswietlDane()
    {
        std::cout << "Imię: " << imie << std::endl;
        std::cout << "Nazwisko: " << nazwisko << std::endl;
    }

    const std::string &getImie() const
    {
        return imie;
    }

    void setImie(std::string imie)
    {
        this->imie = imie;
    }
};

int main()
{
    Pracownik pracownik1{"Igor", "Chpolak"};
    Pracownik pracownik2;
    Pracownik pracownik3(pracownik1);

    pracownik1.wyswietlDane();
    pracownik2.wyswietlDane();
    pracownik3.wyswietlDane();

    return 0;
}