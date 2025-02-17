#include "AForm.hpp"

class RobotomyRequestAForm: public AForm {
	public:
		RobotomyRequestAForm();
		RobotomyRequestAForm(const RobotomyRequestAForm &toCopy);
		~RobotomyRequestAForm();
		RobotomyRequestAForm(std::string target);

		RobotomyRequestAForm& operator=(const RobotomyRequestAForm &toCopy);

		void				execute(Bureaucrat const & executor) const;

	private:
		std::string			_target;
};
