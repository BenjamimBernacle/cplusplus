#include <iostream>

class AutomatDoPizzy {
 private:
  int ileSera_;
  int ileSzynki_;
  int ileBrokuly_;
  bool czyDuza_;
  float canaSera_;
  float cenaSzynki_;
  float cenaBrokuly_;
  float cenaCiastaMalego_;

 public:

  AutomatDoPizzy(int ileSera = 0, int ileSzynki = 0, int ileBrokuly = 0,
                   bool czyDuza = false, float canaSera = 0.0,
                   float cenaSzynki = 0.0, float cenaBrokuly = 0.0,
                   float cenaCiastaMalego = 0.0)
      : ileSera_(ileSera),
        ileSzynki_(ileSzynki),
        ileBrokuly_(ileBrokuly),
        czyDuza_(czyDuza),
        canaSera_(canaSera),
        cenaSzynki_(cenaSzynki),
        cenaBrokuly_(cenaBrokuly),
        cenaCiastaMalego_(cenaCiastaMalego) {}

  int ileSera() const { return ileSera_; }
  int ileSzynki() const { return ileSzynki_; }
  int ileBrokuly() const { return ileBrokuly_; }
  bool czyDuza() const { return czyDuza_; }
  float cenaSera() const { return canaSera_; }
  float cenaSzynki() const { return cenaSzynki_; }
  float cenaBrokuly() const { return cenaBrokuly_; }
  float cenaCiastaMalego() const { return cenaCiastaMalego_; }


  float cenaPizzy() const {
    float cena = cenaCiastaMalego_;
    if (czyDuza_) {
      cena *= 2; 
    }
    cena += ileSera_ * canaSera_;
    cena += ileSzynki_ * cenaSzynki_;
    cena += ileBrokuly_ * cenaBrokuly_;
    return cena;
  }

  int ileKalorii() const {
  
    int kalorie = 300; 
    if (czyDuza_) {
      kalorie *= 2;
    }
    kalorie += ileSera_ * 50;
    kalorie += ileSzynki_ * 80;
    kalorie += ileBrokuly_ * 20;
    return kalorie;
  }

  bool czyVege() const {
    return ileSzynki_ == 0; 
  }
};

int main() {
  
  AutomatDoPizzy pizza(2, 1, 0, true, 1.5f, 2.0f, 1.0f, 5.0f);

  std::cout << "Pizza ma " << pizza.ileSera() << " porcje sera." << std::endl;
  std::cout << "Pizza ma " << pizza.ileSzynki() << " porcje szynki." << std::endl;
  std::cout << "Pizza jest " << (pizza.czyDuza() ? "duża" : "mała") << "." << std::endl;
  std::cout << "Cena pizzy wynosi " << pizza.cenaPizzy() << " zł." << std::endl;
  std::cout << "Pizza zawiera " << pizza.ileKalorii() << " kalorii." << std::endl;
  std::cout << "Pizza jest " << (pizza.czyVege() ? "wegetariańska" : "nie-wegetariańska") << "." << std::endl;

  return 0;
}