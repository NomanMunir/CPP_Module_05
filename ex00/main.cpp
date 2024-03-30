#include "Bureaucrat.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("ash", -1);

        std::cout << bureaucrat << std::endl;
		bureaucrat.decreaseGrade();
        bureaucrat.increaseGrade();
        bureaucrat.decreaseGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        // std::cout << e.what() << std::endl;111
    }
    return EXIT_SUCCESS;
}