/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:28:47 by mmarcott          #+#    #+#             */
/*   Updated: 2024/02/23 14:01:27 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template.hpp"

template<typename T>
void	swap(T& a, T& b) {
	T temp = a;

	a = b;
	b = temp;
}

template<typename T>
T	min(T& a, T& b) {
	if (b <= a)
		return (b);
	return (a);
}

template<typename T>
T	max(T& a, T& b) {
	if (b >= a)
		return (b);
	return (a);
}

int	main(void) {
	int	a = 2;
	int	b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string	c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	return (0);
}
