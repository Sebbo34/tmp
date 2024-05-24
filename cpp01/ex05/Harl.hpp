/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:02:28 by seb               #+#    #+#             */
/*   Updated: 2024/05/02 20:18:06 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP 
# define HARL_HPP

#include <iostream>
class Harl
{ 
    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        
    public :
        Harl(void);
        ~Harl(void);
        void    complain( std::string level );
};


#endif