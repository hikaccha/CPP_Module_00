/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichikawahikaru <ichikawahikaru@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 19:57:22 by ichikawahik       #+#    #+#             */
/*   Updated: 2026/02/12 18:54:18 by ichikawahik      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (argv[++j])
	{
		i = -1;
		while(argv[j][++i])
			std::cout << (char)toupper(argv[j][i]);
	}
	std::cout << std::endl;
	return 0;
}
