/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:18:23 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/04 12:09:48 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	//Constructor and destructor
	public:
		Contact(void);
		~Contact(void);
		
	//Atributos o propiedades
	int		index;
	//Choosing std::string as std::getline is designed to work with it, not with char arrays. E.g.: char	last_name[10];
	//At first I defined attributes as char	last_name[10].
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string age;
	std::string hobby;
	
	//Métodos o comportamientos
};

#endif // CONTACT_HPP