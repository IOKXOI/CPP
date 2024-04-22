#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	gandalf("Gandalf", 100);
	std::cout << gandalf;
	try
	{
		std::cout << "Try creating form: " << std::endl;
		Form 		peace_act("Peace_act", 99, 98);
		//Form 		peace_act("Peace_act", 150, 100);
		//Form 		peace_act("Peace_act", -1, 100);
		//Form 		peace_act("Peace_act", 151, 100);
		//Form 		peace_act("Peace_act", 150, -1);
		//Form 		peace_act("Peace_act", 150, 151);
		std::cout << peace_act;

		std::cout << "Try sign " << peace_act << "Try to sign with: " << gandalf;
		try{
			//peace_act.beSigned(gandalf);
			std::cout << peace_act;
			gandalf.signForm(peace_act);
			std::cout << peace_act;
		}
		catch (std::exception &e) {
			std::cout << "Failure to sign: " << e.what() << std::endl;
		}
	}
	catch(std::exception& e) {
		std::cout << "Failure to create: " << e.what() << std::endl;
	}
	return (0);
}
