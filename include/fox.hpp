#pragma once
#include <string>
#include "./animal.hpp"

using std::string;

enum TypeFox {
  type1,
  type2,
  type3,
  type4,
  type5
};

class Fox: public Animal {
 private:
  string name;
  TypeFox type;
 public:
  string getName();
  TypeFox getType();

  void setName(string name);
  void setType(TypeFox type);

  string whatDoesSay();

  ~Fox();
  Fox();
  Fox(float mass, string sex, string color, int age, string name, TypeFox type);
  Fox(const Fox& animal);
  Fox(Fox&& animal);
  void operator=(const Fox& animal);
};
