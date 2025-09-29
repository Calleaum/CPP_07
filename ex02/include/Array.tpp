/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:30:45 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/03 17:38:20 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template	<typename T>
Array<T>::Array(): data(NULL), len(0) {}

template	<typename T>
Array<T>::Array(unsigned int len): data(new T[len]), len(len) {}

template	<typename T>
Array<T>::Array(const Array &other): data(new T[other.len]), len(other.len)
{
	for (unsigned int i = 0; i < this->len; i++)
		this->data[i] = other.data[i];
}

template	<typename T>
Array<T>::~Array()
{
	delete [] this->data;
}

template	<typename T>
Array<T>	&Array<T>::operator=(const Array &other)
{
	delete [] data;
	this->data = new T[other.len];
	this->len = other.len;
	for (unsigned int i = 0; i < this->len; i++)
		this->data[i] = other.data[i];
	return (*this);
}

template	<typename T>
T			&Array<T>::operator[](unsigned int index)
{
	if (this->len <= index)
		throw (std::out_of_range("Array index out of range"));
	return (this->data[index]);
}

template	<typename T>
const T		&Array<T>::operator[](unsigned int index) const
{
	if (this->len <= index)
		throw (std::out_of_range("Array index out of range"));
	return (this->data[index]);
}


template		<typename T>
unsigned int	Array<T>::size() const
{
	return (this->len);
}