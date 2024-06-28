/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:32:47 by seb               #+#    #+#             */
/*   Updated: 2024/06/27 12:43:43 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp" 

int main()
{
    Data data;
    data.data_number = 45;
    data.data_str = "HEY";
    std::cout <<  data.data_str << data.data_number << std::endl;
    uintptr_t s = Serializer::serialize(&data);
    std::cout << s << std::endl;
    std::cout << &data << std::endl;

    Data *newPtr = Serializer::deserialize(s);
    std::cout << newPtr << std::endl;
    std::cout <<  newPtr->data_str << newPtr->data_number << std::endl;
}