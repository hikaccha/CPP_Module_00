/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 21:31:40 by hichikaw          #+#    #+#             */
/*   Updated: 2026/05/16 14:13:56 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::get_firstname(void) const
{
	return (this->_firstname);
}

std::string Contact::get_lastname(void) const
{
	return (this->_lastname);
}

std::string Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string Contact::get_phone_num(void) const
{
	return (this->_phone_num);
}

std::string Contact::get_secret(void) const
{
	return (this->_secret);
}

void	Contact::set_firstname(std::string str)
{
	this->_firstname = str;
}

void	Contact::set_lastname(std::string str)
{
	this->_lastname = str;
}

void	Contact::set_nickname(std::string str)
{
	this->_phone_num = str;
}

void	Contact::set_secret(std::string str)
{
	this->_secret = str;
}
