/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:00:58 by aaslan            #+#    #+#             */
/*   Updated: 2023/04/24 21:55:15 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (1)
	{
		std::cout << "Enter command: ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin, command);

		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break;
		else if (!std::cin.eof())
			std::cout << "Error: unknown command, try ADD | SEARCH | EXIT" << std::endl;

		if (std::cin.eof())
			break;
	}
	return 0;
}
