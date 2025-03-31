#include <iostream>

class PizzaAutomat {
    private:

    float cenaSera;
    float cenaSzynki;
    float cenaBrokułów;
    float cenaCiastaMalego;
    float cenaCiastaDuzego;

    public:
   
    int ileSera;
    int ileSzynki;
    int ileBrokułów;
    bool czyDuza;

   
    PizzaAutomat(int ileSera, int ileSzynki, int ileBrokułów, bool czyDuza)
        : ileSera(ileSera), ileSzynki(ileSzynki), ileBrokułów(ileBrokułów), czyDuza(czyDuza) {
        
        cenaSera = 2.0;
        cenaSzynki = 3.0;
        cenaBrokułów = 1.0;
        cenaCiastaMalego = 5.0;
        cenaCiastaDuzego = 10.0;
    }

   
    float CenaPizzy() {
        float cenaCiasta = czyDuza ? cenaCiastaDuzego : cenaCiastaMalego;
        return cenaCiasta + (ileSera * cenaSera) + (ileSzynki * cenaSzynki) + (ileBrokułów * cenaBrokułów);
    }


    int IleKalori() {
        int kalorieSer = ileSera * 11;  
        int kalorieSzynka = ileSzynki * 48; 
        int kalorieBrokuły = ileBrokułów * 134; 
        return kalorieSer + kalorieSzynka + kalorieBrokuły ;
    }

 
    bool CzyVege() {
        return ileSzynki == 0; 
    }


};

int main() {

    PizzaAutomat pizza(2, 2, 2, true);

  

    std::cout << "Cena pizzy: " << pizza.CenaPizzy() << " PLN" << std::endl;
    std::cout << "Ilość kalorii: " << pizza.IleKalori() << " kcal" << std::endl;
    std::cout << "Czy pizza jest wegetariańska? " << (pizza.CzyVege() ? "Tak" : "Nie") << std::endl;

    return 0;
}
