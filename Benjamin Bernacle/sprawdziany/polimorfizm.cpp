#include <iostream>
using namespace std;

class Animal
{
public:
virtual void makeSound()
{
}

};
class Dog:public Animal
{
    public:
    string coTamSzczekasz;
    Dog() {};
  Dog(string coTamSzczekasz)
    {
      this->coTamSzczekasz=coTamSzczekasz;
    }
    void makeSound()
    {
        cout<<coTamSzczekasz<<endl;
    }
};
class Cat:public Animal
{
    public:
    string meow;
    Cat() {};
    Cat(string meow)
    {
      this->meow=meow;
    }

    void makeSound()
    {
        cout<<meow<<endl;
    }
};
int main()
{
    Animal *animals;
      animals=new Dog("HAU!");
    animals->makeSound();
    delete animals;
      animals=new Cat("MIAU!");
    animals->makeSound();
    delete animals;
}