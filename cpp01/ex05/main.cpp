/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:02:30 by seb               #+#    #+#             */
/*   Updated: 2024/05/02 20:25:39 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    Harl;
    Harl.complain("DEBU");
    Harl.complain("DEBUG");

    Harl.complain("DEBU");Harl.complain("DEBU");
    Harl.complain("ERROR");
    Harl.complain("INFO");
    Harl.complain("WARNING");
    Harl.complain("DEBU");
    Harl.complain("DEBU");
}