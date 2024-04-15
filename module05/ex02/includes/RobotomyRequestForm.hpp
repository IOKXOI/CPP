#include "AForm.hpp"

class RobotomyRequestForm: public AForm {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &toCopy);
		~RobotomyRequestForm();
		RobotomyRequestForm(std::string target);

		RobotomyRequestForm& operator=(const RobotomyRequestForm &toCopy);

		void				execute(Bureaucrat const & executor) const;

	private:
		std::string			_target;
};
