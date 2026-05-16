/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 13:21:44 by hichikaw          #+#    #+#             */
/*   Updated: 2026/05/16 13:24:42 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_UTILS_HPP
# define PHONEBOOK_UTILS_HPP

#include <iostream>
#include "contact.hpp"

std::string	add_spaces(int n);

std::string fix_width(std::string str, long unsigned max);

int			search_ui(Contact contacts[8]);

#endif
