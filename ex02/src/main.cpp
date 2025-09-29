/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:48:18 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/04 10:11:29 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main()
{
	try
	{
		std::cout << "--- Default constructor ---" << std::endl;
		Array<int> emptyArr;
		std::cout << "Size of emptyArr: " << emptyArr.size() << std::endl;

		std::cout << "\n--- Constructor with size ---" << std::endl;
		Array<std::string> strArr(3);
		strArr[0] = "Pwet";
		strArr[1] = "Pouet";
		strArr[2] = "Pweet !";

		for (unsigned int i = 0; i < strArr.size(); ++i)
			std::cout << strArr[i] << std::endl;

		std::cout << "\n--- Copy constructor ---" << std::endl;
		Array<std::string> copyArr(strArr);
		copyArr[1] = "Copy !";
		for (unsigned int i = 0; i < copyArr.size(); ++i)
			std::cout << "copyArr[" << i << "] = " << copyArr[i] << std::endl;

		std::cout << "\n--- Original array after copy modified ---" << std::endl;
		for (unsigned int i = 0; i < strArr.size(); ++i)
			std::cout << "strArr[" << i << "] = " << strArr[i] << std::endl;

		std::cout << "\n--- Assignment operator ---" << std::endl;
		Array<std::string> assignArr;
		assignArr = strArr;
		assignArr[0] = "Assigned !";
		for (unsigned int i = 0; i < assignArr.size(); ++i)
			std::cout << "assignArr[" << i << "] = " << assignArr[i] << std::endl;

		std::cout << "\n--- Access out of bounds ---" << std::endl;
		std::cout << strArr[42] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
}
