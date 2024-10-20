
#include "symbol.h"

Symbol::Symbol(std::string name_) {
  name = name_;
}

std::string Symbol::getName() const {
  return name;
}

void Symbol::setName(std::string name_) {
  name = name_;
}

const bool Symbol::operator==(const Symbol &other) const {
  return name == other.name;
}

const bool Symbol::operator!=(const Symbol &other) const {
  return name != other.name;
}

const bool Symbol::operator<(const Symbol &other) const {
  return name < other.name;
}
