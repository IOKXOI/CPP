#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		std::cout << "Try creating bureaucrat: " << std::endl;
		Bureaucrat	gandalf("Gandalf", 100);
		std::cout << gandalf;

		std::cout << "Try creating form: " << std::endl;
		Form 		peace_act("Peace_act", 150, 100);
		std::cout << peace_act;

		std::cout << "Try sign " << peace_act << "Try to sign with: " << gandalf;
		try{
			gandalf.signForm(peace_act);
			std::cout << peace_act;
		}
		catch (std::exception &e) {
			std::cout << "Failure: " << e.what() << std::endl;
		}
	}
	catch(std::exception& e) {
		std::cout << "Failure: " << e.what() << std::endl;
	}

	try{
		std::cout << "Try creating bureaucrat: " << std::endl;
		Bureaucrat	pipin("Pipin", 100);
		std::cout << pipin;

		std::cout << "Try creating form: " << std::endl;
		Form 		peace_act("Peace_act", 150, 100);
		std::cout << peace_act;

		std::cout << "Try sign " << peace_act << "Try to sign with: " << pipin;
		try{
			peace_act.beSigned(pipin);
			std::cout << peace_act;
		}
		catch (std::exception &e) {
			std::cout << "Failure: " << e.what() << std::endl;
		}
	}
	catch(std::exception& e) {
		std::cout << "Failure: " << e.what() << std::endl;
	}
	return (0);
}