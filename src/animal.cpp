#include "../include/animal.hpp"

float Animal::getMass() {
  return this->mass;
}

string Animal::getSex() {
  return this->sex;
}

string Animal::getColor() {
  return this->color;
}

int Animal::getAge() {
  return this->age;
}

void Animal::setMass(float mass) {
  this->mass = mass;
}

void Animal::setSex(string sex) {
  this->sex = sex;
}

void Animal::setColor(string color) {
  this->color = color;
}

void Animal::setAge(int age) {
  this->age = age;
}

Animal::Animal() {
  this->mass = 0;
  this->sex = "";
  this->color = "";
  this->age = 0;
}

Animal::Animal(float mass, string sex, string color, int age) {
  this->mass = mass;
  this->sex = sex;
  this->color = color;
  this->age = age;
}

Animal::Animal(const Animal& animal) {
  this->mass = animal.mass;
  this->sex = animal.sex;
  this->color = animal.color;
  this->age = animal.age;
}

Animal::Animal(Animal&& animal) {
  this->mass = animal.mass;
  this->sex = animal.sex;
  this->color = animal.color;
  this->age = animal.age;
}

Animal::~Animal() {}
