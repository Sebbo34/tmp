/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:50:59 by seb               #+#    #+#             */
/*   Updated: 2024/06/27 12:38:19 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint>


struct Data
{
    int         data_number;
    std::string data_str;
};

class Serializer
{
    public :
        Serializer();
        virtual ~Serializer() = 0;
        static  uintptr_t serialize(Data* ptr);
        static  Data* deserialize(uintptr_t raw);
};

#endif