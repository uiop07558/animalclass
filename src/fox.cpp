#include "../include/fox.hpp"

string Fox::getName() {
  return this->name;
}

TypeFox Fox::getType() {
  return this->type;
}

void Fox::setName(string name) {
  this->name = name;
}

void Fox::setType(TypeFox type) {
  this->type = type;
}

string Fox::whatDoesSay() {
  if (this->type == type1) {
    return string("fox1");
  } else if (this->type == type2) {
    return string("fox2");
  } else if (this->type == type3) {
    return string("fox3");
  } else if (this->type == type4) {
    return string("fox4");
  } else if (this->type == type5) {
    return string("fox5");
  }
}

Fox::Fox() {
  this->mass = 0;
  this->sex = "";
  this->color = "";
  this->age = 0;
  this->name = "";
  this->type = type1;
}

Fox::Fox(float mass, string sex, string color,
int age, string name, TypeFox type) {
  this->mass = mass;
  this->sex = sex;
  this->color = color;
  this->age = age;
  this->name = name;
  this->type = type;
}

Fox::Fox(const Fox& animal) {
  this->mass = animal.mass;
  this->sex = animal.sex;
  this->color = animal.color;
  this->age = animal.age;
  this->name = animal.name;
  this->type = animal.type;
}

Fox::Fox(Fox&& animal) {
  this->mass = animal.mass;
  this->sex = animal.sex;
  this->color = animal.color;
  this->age = animal.age;
  this->name = animal.name;
  this->type = animal.type;
}

void Fox::operator=(const Fox& animal) {
  this->mass = animal.mass;
  this->sex = animal.sex;
  this->color = animal.color;
  this->age = animal.age;
  this->name = animal.name;
  this->type = animal.type;
}


Fox::~Fox() {}
