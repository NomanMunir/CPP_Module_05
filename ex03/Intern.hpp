#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
  public:
    ~Intern();
    Intern(std::string& name, std::string& target);
    Intern(const Intern& other);
    Intern& operator=(const Intern& rhs);
  private:
    Intern();
};

#endif // INTERN_HPP