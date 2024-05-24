/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:13:01 by seb               #+#    #+#             */
/*   Updated: 2024/05/15 14:52:10 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
	private :
		std::string name;
		int			HitPoint;
		int			EnergyPoint;
		int			AttackDamage;
	public :
		ClapTrap (std::string name);
		~ClapTrap(void);
		ClapTrap (ClapTrap const & src);
		ClapTrap &operator=(ClapTrap const & Clap);
		 
		std::string getName(void) const;
		int 		getHitPoint(void) const;
		int 		getEnergyPoint(void) const;
		int 		getAttackDamage(void) const;
		void 		setHitPoint(int value);
		void 		setEnergyPoint(int value);
		void 		setAttackDamage(int value);


		void attack(const std::string& target);  
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif