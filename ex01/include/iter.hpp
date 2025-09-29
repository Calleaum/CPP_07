/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:52:10 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/03 17:13:57 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstdlib>

template	<typename T>
void		iter(T *array, size_t len, void f(const T &))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

template	<typename T>
void		print(const T &n)
{
	std::cout << n << " ";
}