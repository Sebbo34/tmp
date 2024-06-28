/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:17:13 by sbo               #+#    #+#             */
/*   Updated: 2024/06/25 15:22:24 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip> // Nécessaire pour std::fixed et std::setprecision

//classe canonique??

int main() {
    // Initialisation d'un entier
    // int x = 12;
    // void *a = &x;

    // // Cast du pointeur void en pointeur float
    // float *b = static_cast<float *>(a);

    // // Affichage de l'adresse et de la valeur
    // std::cout << "Address of a: " << a << std::endl;

    // // Pour éviter le comportement indéfini, nous ne devrions pas déréférencer un int comme un float directement
    // // Cependant, pour montrer l'adresse, nous pouvons afficher le contenu comme un float:
    // std::cout << "Value at the float pointer b (incorrect usage): " << *b << std::endl;

    // // Pour convertir la valeur de int en float correctement
    // float correct_float_value = static_cast<float>(x);
    // std::cout << std::fixed << std::setprecision(1);

    // std::cout << "Correct float value: " << correct_float_value << std::endl;
    ScalarConverter::convert("42");
    // ScalarConverter::convert("42.32");
    // ScalarConverter::convert("42.324f");
    // ScalarConverter::convert("42.3");
    //         ScalarConverter::convert("f42");
    //           ScalarConverter::convert("'c'");
    //             ScalarConverter::convert("cd");
            
}
