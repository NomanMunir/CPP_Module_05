#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form {
	private:
		const std::string _name;
		bool _isSigned;
		const int _requiredGrade;
		Form();
	public:
		Form(const std::string &name, int grade);
		Form(const Form &other);
		~Form();
		Form &operator=(const Form &rhs);
		std::string getName() const;
		bool getIsSigned();
		int getRequiredGrade();
		void beSigned(Bureaucrat& bur);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw() return ("Grade is too high!");
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw() return ("Grade is too low!");
	};

};

#endif // !FORM_HPP