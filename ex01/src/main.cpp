/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:18:09 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/08 11:03:25 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\033[32m\n*-* Test 1: Valid Form creation *-*\033[0m" << std::endl;
    Form ouiForm("OuiForm", 50, 25, false);
    std::cout << ouiForm << std::endl;

	std::cout << "\033[32m\n*-* Test 2: Bureaucrat Oui signs the form (success) *-*\033[0m" << std::endl;
	Bureaucrat Oui("Oui", 30);
	std::cout << "Before signing:" << std::endl;
	std::cout << ouiForm << std::endl;
	Oui.signForm(ouiForm);
	std::cout << std::endl;
	std::cout << "After signing:" << std::endl;
	std::cout << ouiForm << std::endl;
	
    std::cout << "\033[32m\n*-* Test 3: Bureaucrat Non too low to sign *-*\033[0m" << std::endl;
	Bureaucrat Non("Non", 60);
	Form nonForm("NonForm", 50, 20, false);
	std::cout << nonForm << std::endl;
	Non.signForm(nonForm);

    std::cout << "\033[32m\n*-* Test 4: Invalid Form creation (sign grade too high) *-*\033[0m" << std::endl;
    try
    {
        Form illegalForm("IllegalForm", 0, 20, false);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "\033[32m\n*-* Test 5: Invalid Form creation (exec grade too low) *-*\033[0m" << std::endl;
    try
    {
        Form illegalForm("IllegalForm", 50, 151, false);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    std::cout << "\033[32m\n*-* Test 6: Copy constructor and assignment operator *-*\033[0m" << std::endl;
    Form original("OriginalForm", 42, 24, true);

    Form copy = original;
    std::cout << "Copy (via copy constructor):\n" << copy << std::endl;

    Form assigned("AssignedForm", 100, 100, false);
    assigned = original;
    std::cout << "Assigned (via operator=):\n" << assigned << std::endl;

    return 0;
}

