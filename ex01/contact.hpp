/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 21:42:43 by hichikaw          #+#    #+#             */
/*   Updated: 2026/05/15 22:30:32 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact {
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _number;
		std::string _secret;

		bool	_containsOnlyAlpha(std::string const input);
		bool	_containsOnlyDigits(std::string const input);

	public:
		Contact(void);
		~Contact(void);

		bool				isEmpty(void) const;
		std::string const	getFirstname(void) const;
		std::string const 	getLastname(void) const;
		std::string const 	getNickname(void) const;
		std::string const 	getNumber(void) const;
		std::string const 	getSecret(void) const;
		bool				setFirstname(std::string const str);
		bool				setLastname(std::string const str);
		bool				setNickname(std::string const str);
		bool				setNumber(std::string const str);
		bool				setSecret(std::string const str);
		bool				displayContact(void) const;
};

#endif
