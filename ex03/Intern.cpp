#include "Intern.hpp"

Intern::Intern() 
{

}
Intern::Intern(const Intern &other) 
{
	(void)other;
}
Intern::~Intern()
{
}
Intern &Intern::operator=(const AForm &rhs)
{
	(void)rhs;
	return (*this);
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	std::string formArray[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *formPtr[] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	for (int i = 0; i < 3; i++)
	{
		if (formArray[i] == form)
		{
			std::cout << "Intern creates " << formArray[i];
			AForm *clone = formPtr[i]->clone();
			delete formPtr[0];
			delete formPtr[1];
			delete formPtr[2];
			return (clone);
		}
	}
	delete formPtr[0];
	delete formPtr[1];
	delete formPtr[2];
	std::cout << "Required form is not found" << std::endl;
	return (NULL);
}