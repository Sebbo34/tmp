/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:40:13 by sbo               #+#    #+#             */
/*   Updated: 2024/07/18 03:03:06 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, float> creat_map(std::string file)
{
    std::map<std::string, float> map;
    int                         end;
    int                         vir;
    while (file.find_first_of(",") != file.npos)
	{
		vir = file.find_first_of(",");
        end = file.find_first_of("\n");
        if (end == file.npos)
            end = file.size();
        if (file[vir + 1] && isdigit(file[vir + 1]))
		map[file.substr(0, vir)] = atof(file.substr(vir + 1, end).c_str());
		file.erase(0, end + 1);

	}
    return (map);
}

int max_days(std::string month)
{
    if (month == "01" || month == "03" || month == "05" || month == "07" || month == "08" || month == "10" || month == "12")
        return (31);
    else if (month == "02")
        return (28);
    else
        return (30);
}

bool parseday(std::string day)
{
    int last;
    int first;
    int tmp;
    first = day.find_first_of("-");
    last = day.find_last_of("-");
    tmp = atoi(day.substr(first + 1, 2).c_str()); // mois
    if (tmp > 12 || tmp < 1)
        return (false);
    tmp = atoi(day.substr(last + 1, day.size() - (last + 1) ).c_str()); //jour
    if (tmp > max_days(day.substr(first + 1, 2)))
    {
        if (tmp == 29 && day.substr(first + 1, 2) == "02" &&  atoi(day.substr(0, first).c_str()) % 4 == 0)
            return true;
        return false;
    }
    return true;
}


bool parseinput(std::string line)
{
    int i;
    
    i = 0;
    while (isdigit(line[i]) && i < 4) 
        i++;
    if(i != 4  || line[i] != '-')
        return false;
    i++;
    if (!isdigit(line[i++]) || !isdigit(line[i++]) || line[i++] != '-' || !isdigit(line[i++]) || !isdigit(line[i++]))
        return (false);
    if(line[i++] != ' ' || line[i++] != '|' || line[i++] != ' ')
        return false;
    if (isdigit(line[i]) || line[i] == '-')
    {
        if (line[i] == '-')
            i++;
        while (isdigit(line[i]))
            i++;
        if (line[i] && line[i] != '.')
            return false;
        if (!line[i])
            return true;
        while (isdigit(line[i]))
            i++;    
    }
    return true;
}

std::string find_closest(std::string date ,std::map<std::string, float> map)
{
    std::map<std::string, float>::iterator it = map.begin();
    std::map<std::string, float>::iterator ite = map.end();
    std::map<std::string, float>::iterator prev = map.begin();

    map[date] = 0;
    while (it != ite)
    {
        if (it->first == date)
        {
            it++;
            break;
        }
        prev = it;
        it++;
    }
    if (date == map.begin()->first )
    {
        map.erase(date);
        return (map.begin()->first);
    }
    else
    {
        map.erase(date);
        date = prev->first;
    }
    return (date);
}

void    btc(std::string line ,std::map<std::string, float> map)
{
    std::string date;
    std::string old;
    date = line.substr(0, line.find_first_of(" "));
    try {
        if (!parseday(date))
        {
            std::cout << "Error in date format" << std::endl;
            return ;
        }  
        float value = map.at(date);
        float nbr = atof(line.substr(line.find_last_of(" ")  + 1 , line.size()).c_str());
        if (nbr < 0 || nbr > 1000)
        {
            std::cout << "Error" << std::endl;
            return ;
        }
        std::cout << date << " => " << line.substr(line.find_last_of(" ") + 1, line.size());
        std::cout << "=" ;
        std::cout << nbr * value << std::endl;
    } 
    catch (const std::out_of_range& e) {
        float nbr = atof(line.substr(line.find_last_of(" ")  + 1 , line.size()).c_str());
        old = date;
        date = find_closest(date ,map);
        float value = map.at(date);
        if (nbr < 0 || nbr > 1000)
        {
            std::cout << "Error" << std::endl;
            return ;
        }
        std::cout << old << " => " << line.substr(line.find_last_of(" ") + 1, line.size());
        std::cout << "=" ;
        std::cout << nbr * map[date] << std::endl;
    }
}

int main()
{
    std::ifstream infile("data.csv");
    std::map<std::string, float> map;

    if (!infile.is_open()) {
        std::cerr << "Error: Could not open the file " << std::endl;
        return 1;
    }
    std::string line;
    std::string res;
    while (std::getline(infile, line)) {
        res += line + "\n";
    }
    infile.close();
    map = creat_map(res);

    std::ifstream input("input.txt");
    while (std::getline(input, line)) {
        if (parseinput(line))
            btc(line, map);
        else
            std::cout << "Bad input =>" << line << std::endl;
    }    
    
}