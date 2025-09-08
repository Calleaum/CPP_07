/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:23:26 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/08 11:02:25 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "\033[32m\n*-* Intern Tests *-*\n\033[0m";
	Intern intern;

	AForm* form1 = intern.makeForm(SC_NAME, "tree");
	if (form1)
	{
		Bureaucrat Oui("Oui", 137);
		Oui.signForm(*form1);
		Oui.executeForm(*form1);
		delete form1;
	}

	AForm* form2 = intern.makeForm(RR_NAME, "Pouet");
	if (form2)
	{
		Bureaucrat roboguy("Pwet", 45);
		roboguy.signForm(*form2);
		roboguy.executeForm(*form2);
		delete form2;
	}

	AForm* form3 = intern.makeForm(PP_NAME, "Random");
	if (form3)
	{
		Bureaucrat prez("Guy", 1);
		prez.signForm(*form3);
		prez.executeForm(*form3);
		delete form3;
	}

	AForm* fail = intern.makeForm("FormThatDoesNotExist", "Nobody");
	if (!fail)
		std::cout << "Returned nullptr for unknown form as expected.\n";

	return 0;
}
