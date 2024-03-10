#include "../include/dog.hpp"

string Dog::getName() {
  return this->name;
}

Breed Dog::getRace() {
  return this->race;
}

void Dog::setName(string name) {
  this->name = name;
}

void Dog::setRace(Breed race) {
  this->race = race;
}

string Dog::whatDoesSay() {
  return string("woof");
}

Dog::Dog() {
  this->mass = 0;
  this->sex = "";
  this->color = "";
  this->age = 0;
  this->name = "";
  this->race = breed1;
}

Dog::Dog(float mass, string sex, string color,
int age, string name, Breed race) {
  this->mass = mass;
  this->sex = sex;
  this->color = color;
  this->age = age;
  this->name = name;
  this->race = race;
}

Dog::Dog(const Dog& animal) {
  this->mass = animal.mass;
  this->sex = animal.sex;
  this->color = animal.color;
  this->age = animal.age;
  this->name = animal.name;
  this->race = animal.race;
}

Dog::Dog(Dog&& animal) {
  this->mass = animal.mass;
  this->sex = animal.sex;
  this->color = animal.color;
  this->age = animal.age;
  this->name = animal.name;
  this->race = animal.race;
}

void Dog::operator=(const Dog& animal) {
  this->mass = animal.mass;
  this->sex = animal.sex;
  this->color = animal.color;
  this->age = animal.age;
  this->name = animal.name;
  this->race = animal.race;
}

Dog::~Dog() {}
