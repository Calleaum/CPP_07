/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:31:09 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/03 17:38:23 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <stdexcept>
#include <string>
#include <iostream>

template <typename T>
class Array
{
	private:
		T				*data;
		unsigned int	len;
	public:
		Array();
		Array(unsigned int len);
		Array(const Array &other);
		~Array();

		Array			&operator=(const Array &other);
		T				&operator[](unsigned int index);
		const T			&operator[](unsigned int index) const;
		unsigned int	size() const;
};