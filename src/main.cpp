#include <iostream>
#include "../include/animal.hpp"
#include "../include/dog.hpp"
#include "../include/fox.hpp"

using std::cout;

int main() {
  Dog dog1;

  Dog dog2 = Dog(43, string("m"), string("black"), 4, string("name"), breed8);

  cout << dog2.getAge() << '\n';

  dog1 = dog2;

  cout << dog1.getAge() << '\n';

  Fox fox1 = Fox(43, string("m"), string("black"), 4, string("name"), type1);
  Fox fox2 = Fox(43, string("m"), string("black"), 4, string("name"), type2);
  Fox fox3 = Fox(43, string("m"), string("black"), 4, string("name"), type3);

  cout << fox1.whatDoesSay() << '\n';
  cout << fox2.whatDoesSay() << '\n';
  cout << fox3.whatDoesSay() << '\n';

  return 0;
}
