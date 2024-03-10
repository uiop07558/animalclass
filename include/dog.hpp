#pragma once
#include <string>
#include "./animal.hpp"

using std::string;

enum Breed {
  breed1,
  breed2,
  breed3,
  breed4,
  breed5,
  breed6,
  breed7,
  breed8,
};

class Dog: public Animal {
 private:
  string name;
  Breed race;
 public:
  string getName();
  Breed getRace();

  void setName(string name);
  void setRace(Breed race);

  string whatDoesSay();

  ~Dog();
  Dog();
  Dog(float mass, string sex, string color, int age, string name, Breed race);
  Dog(const Dog& animal);
  Dog(Dog&& animal);
  void operator=(const Dog& animal);
};
