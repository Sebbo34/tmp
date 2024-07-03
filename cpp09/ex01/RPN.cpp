/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 00:17:08 by sbo               #+#    #+#             */
/*   Updated: 2024/07/02 17:02:24 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

//attention boucle for
// faire avec une stack
void afficher(std::list <std::string> liste)
{
    for (std::string elem : liste) {
        std::cout << elem <<"  ";
    }
    std::cout << "\n";
}

std::list<std::string>	creat_list(std::string args)
{
	std::list<std::string> lst;
	int	begin;
	int	end;
	
	while (args.find_first_of(" ") != args.npos)
	{
		end = args.find_first_of(" ");
		lst.push_back(args.substr(0, end));
		args = args.erase(0, end + 1);
	}
	lst.push_back(args);
	return (lst);
}

bool	ft_isdigit(std::string elem)
{
	if (elem.size() != 1)
		return (false);
	if (!isdigit(elem[0]))
		return (false);
	return (true);
}

bool	isoperator(std::string op) 
{
	if (op.size() != 1)
		return (false);
	if (op[0] == '+')
		return true;
	if (op[0] == '-')
		return true;
	if (op[0] == '/')
		return true;
	if (op[0] == '*')
		return true;
	return(false);
}

int calcul(int a, int b, char c)
{
	//std::cout << a << c << b <<std::endl;
	if (c == '+')
		return (a + b);
	if (c == '-')
		return (a - b);
	if (c == '/')
		return (a / b);
	if (c == '*')
		return (a * b);
	return (0);
}

void	Rpn(std::list<std::string> lst)
{
	int a;
	int	b;
	int res;
	char signe;
	std::string result;

	afficher(lst);
	// if (!ft_isdigit(lst.front()) && !isoperator(lst.front()))
	// {
	// 	std::cout << "Error" << std::endl;
	// 	return ;
	// }
	int i = 0;
	while (lst.size() > 1)
	{
		auto it = lst.begin();
		auto ite = lst.end();
		auto start = lst.begin();
		auto end = lst.begin();
		while (ite != it)
		{
			if(isoperator(*ite))
			{
				while (isoperator(*ite))
					ite--;
				ite++;
				signe = (*ite)[0];
				end = ite;
				ite--;
				b = atoi((*ite).c_str());
				ite--;
				start = ite;
				a = atoi((*ite).c_str());
			}
			if (ite != it && !isoperator(*ite))
				ite--;
		}
		end++;
		res = calcul(a,b,signe);
		result = std::to_string(res);
		lst.insert(start, result);
 		lst.erase(start, end);
		afficher(lst);
		i++;
		std::cout << a << " " << signe  << b << " = " << res << std::endl;
	}
}
// 	if (lst.size() == 0)
// 		std::cout << res << std::endl;
// 	else
// 	{
// 		result = std::to_string(res);
// 		lst.push_front(result);
// 		Rpn(lst);
// 	} 
// }

int main ()
{
	std::list<std::string> lst;
	lst = creat_list("1 2 * 2 / 2 * 2 4 - +");
	Rpn(lst);
}