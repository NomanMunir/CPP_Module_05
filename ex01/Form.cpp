#include "Form.hpp"

Form::Form(const std::string &name, int grade) : _name(name), _isSigned(false), _requiredGrade(grade)
{

}

Form::Form(const Form &other): _name(other._name), _isSigned(other._isSigned), _requiredGrade(other._requiredGrade) 
{

}

Form::~Form()
{

}

Form &Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getIsSigned() const
{
	return (this->_isSigned);
}

int Form::getRequiredGrade() const
{
	return (this->_requiredGrade);
}

void Form::beSigned(Bureaucrat& bur)
{
	if (bur.getGrade() > this->_requiredGrade)
		throw GradeTooLowException();
	this->_isSigned = true;
}

std::ostream& operator<<( std::ostream& o, const Form& rhs ) {
    o << "Form Name: " << rhs.getName() << std::endl;
	o << "Form Grade: " << rhs.getRequiredGrade() << std::endl;
	o << "Form Signed: " << rhs.getIsSigned() << std::endl;
    return o;
}