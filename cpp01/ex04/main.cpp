/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 04:19:36 by seb               #+#    #+#             */
/*   Updated: 2024/05/02 05:09:12 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
    size_t pos = 0;
    std::string newfile;
    std::string str;

    if (argc != 4)
    {
        std::cout << "Invalid number of args" << std::endl; 
        return (1);
    }
    std::cout << newfile << std::endl; 
    std::ifstream fichier(argv[2]);
    std::ofstream fichier2(newfile);
    if (!fichier)
        return (1);
    while (getline(fichier, str))
    {
        pos = str.find(argv[2]);
        if (pos != std::string::npos)
        {
            str.erase(pos, 2); // strlen?
            str.insert(pos, argv[3]);   
        }
        fichier2 << str << std::endl;
    }
    return (0);
}