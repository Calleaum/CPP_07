/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:42:48 by calleaum          #+#    #+#             */
/*   Updated: 2025/09/03 16:45:34 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template	<typename T>

void		swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template	<typename T>
T			&min(T &a, T &b)
{
	return (a < b ? a : b);
}

template	<typename T>
T			&max(T &a, T &b)
{
	return (a < b ? b : a);
}