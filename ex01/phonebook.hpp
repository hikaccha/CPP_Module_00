/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 21:09:25 by ichikawahik       #+#    #+#             */
/*   Updated: 2026/05/15 22:30:35 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include "contact.hpp"

class PhoneBook {
	private:
		int 	_index;
		bool	_abort;
		Contact _contactList[8];

		std::string _getInput(std::string const prompt);
		void		_incrementIndex(void);
		bool		_displayContactByIndex(std::string const input) const;
		void		_displayContactTable(void) const;
		void		_printContactInfoTable(int const index) const;
		void		_printTableString(std::string str) const;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		std::string trimBlank(std::string str);
		bool		addContact(void);
		void		displayContact(int index) const;
		bool		searchContact(void);
};

#endif
