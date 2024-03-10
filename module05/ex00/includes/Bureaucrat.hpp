#pragma once
#include <string>
#include <stdint.h>
#include <iostream>
#include <exception>

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, const int32_t grade);
		// Bureaucrat(Bureaucrat &toCopy);
		// Bureaucrat& operator=(Bureaucrat &toCopy);
		virtual ~Bureaucrat();

        class GradeTooHighException: public std::exception{
            public: 
                const char* what() const throw();
        };
        class GradeTooLowException: public std::exception{
            public:
                const char* what() const throw();

        };
		std::string getName(void) const;
		int32_t getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
		const std::string	name;
		int32_t				grade;

	private: 
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &obj);
