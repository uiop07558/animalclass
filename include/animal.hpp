#pragma once
#include <string>

using std::string;

class Animal {
 protected:
  float mass;
  string sex;
  string color;
  int age;
 public:
  virtual ~Animal();
  Animal();
  Animal(float mass, string sex, string color, int age);
  Animal(const Animal& animal);
  Animal(Animal&& animal);

  float getMass();
  string getSex();
  string getColor();
  int getAge();

  void setMass(float mass);
  void setSex(string sex);
  void setColor(string color);
  void setAge(int age);

  virtual string whatDoesSay() = 0;
};
