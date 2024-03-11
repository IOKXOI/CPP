#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		std::cout << "Try creating bureaucrat: " << std::endl;
		Bureaucrat	biden("Biden", 100);
		std::cout << "SUCCESS" << std::endl;

		std::cout << "Try creating form: " << std::endl;
		Form 		war_act("War_act", 160, 100);
		std::cout << "SUCCESS" << std::endl;

		std::cout << "Try sign " << war_act << "Try to sign with: " << biden;
		try{
			war_act.beSigned(biden);
			std::cout << war_act;
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