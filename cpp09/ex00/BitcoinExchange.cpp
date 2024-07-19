/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:40:13 by sbo               #+#    #+#             */
/*   Updated: 2024/07/17 19:14:48 by sbo              ###   ########.fr       */
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
    // for (std::map<std::string, float>::iterator it = map.begin(); it != map.end(); ++it) 
    // {
    //     std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    // }
    return (map);
}
/* 
int max_days(std::string month)
{
    if (month == "01" || month == "03" || month == "05" || month == "07" || month == "08" || month == "10" || month == "12")
        return (31);
    else if (month == "02")
        return (28);
    else
        return (30);
}

std::string ft_to_str(int value, int n)
{
    std::string str;
    str = std::to_string(value);
    while (str.size() != n)
        str = "0" + str;
    return (str);
}

std::string nextday(std::string day)
{
    int last;
    int first;
    int tmp;
    std::string nextday;
    first = day.find_first_of("-");
    last = day.find_last_of("-");
    tmp = atof(day.substr(last + 1, day.size() - (last + 1) ).c_str());
    if (tmp == max_days(day.substr(first + 1, 2)))
    {
        tmp = atof(day.substr(first + 1, 2).c_str());
        if (tmp != 12)
        {
            nextday = day.substr(0, first + 1) + ft_to_str(tmp + 1, 2) + "-01";
        }
        else
        {
            tmp = atof(day.substr(0, first).c_str());
            nextday = ft_to_str(tmp + 1, 4) + "-01-01";
        }
    }
    else 
        nextday =  day.substr(0, last + 1) + ft_to_str(tmp + 1, 2);
    return (nextday);
}

int diff_time(std::string start, std::string end)
{
    int nbr_day;

    nbr_day = 0;
    while (start != end)
    {
        start = nextday(start);
        nbr_day++;
    }
    return (nbr_day);
} */

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
        float value = map.at(date);
        std::cout << date << " => " << line.substr(line.find_last_of(" ") + 1, line.size());
        std::cout << "=" ;
        std::cout << atof(line.substr(line.find_last_of(" ")  + 1 , line.size()).c_str()) * map[date] << std::endl;
    } 
    catch (const std::out_of_range& e) {
        old = date;
        date = find_closest(date ,map);
        float value = map.at(date);
        std::cout << old << " => " << line.substr(line.find_last_of(" ") + 1, line.size());
        std::cout << "=" ;
        std::cout << atof(line.substr(line.find_last_of(" ")  + 1 , line.size()).c_str()) * map[date] << std::endl;
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
        btc(line, map);
    }    
    
}

// value inf a 100
// date valide 
// positive number
// format date | value
//