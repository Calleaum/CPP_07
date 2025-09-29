/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:48:21 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/04 09:54:14 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int			intArr[] = {42, 84, 168, 256, 512};
	std::string strArr[] = {"I", "tested", "my", "code", "and", "it", "works", "fine", "!"};
	float		floatArr[] = {4.58f, 5.441f, 8.154f, -5.54f, 1.111f, 1.154f};

	iter(intArr, 5, print);
	std::cout << std::endl;
	std::cout << std::endl;

	iter(strArr, 9, print);
	std::cout << std::endl;
	std::cout << std::endl;

	iter(floatArr, 6, print);
	std::cout << std::endl;
}