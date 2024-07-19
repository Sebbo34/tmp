/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbo <sbo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 03:34:35 by sbo               #+#    #+#             */
/*   Updated: 2024/07/18 11:29:37 by sbo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void creat_stack(std::string args)
{
	
}

void printStack(std::stack<unsigned int> stk) {
    while (!stk.empty()) {
        std::cout << stk.top() << " ";
        stk.pop();
    }
    std::cout << std::endl;
}

std::stack<unsigned int> sort_stack(std::stack<unsigned int> stack, int i)
{
	std::stack<unsigned int> s1;
	std::stack<unsigned int> s2;
	unsigned int tmp;
	
	if (stack.size() == 1)
		return (stack);
	while (!stack.empty())
	{
		tmp = stack.top();
		stack.pop();
		if (!stack.empty())
		{
			// std::cout << tmp << " " << stack.top() << std::endl;
			if (stack.top() > tmp)
			{
				s1.push(tmp);
				s2.push(stack.top());
			}
			else
			{
				s2.push(tmp);
				s1.push(stack.top());
			}
			stack.pop();
			//std::cout << s1.top() << std::endl;
			//std::cout << s2.top() << std::endl;
		}
		else
			s1.push(tmp);
	}
	s1 = sort_stack(s1, i + 1);
	s2 = sort_stack(s2, i + 1);

	int shift;
	int prev_ind;
	
	//elem a push entre shift et prev_ind -> binary search
	// insert dans la stack 2
	// premier elem forcement en 0
	// elem suivant entre prev ind et ind + shift(=nbr elem push)
	
	return (stack);
}	

// int main (void)
// {
// 	std::stack<unsigned int> s1;

// 	s1.push(4);
// 	s1.push(7);
// 	s1.push(9);
// 	s1.push(5);
// 	s1.push(3);
// 	s1 = sort_stack(s1, 0);
// 	printStack(s1);
// }
#include <iostream>
#include <stack>
#include <random>

// Fonction pour générer une stack non triée de 10 éléments
std::stack<unsigned int> generateUnsortedStack() {
    std::stack<unsigned int> stk;
    std::random_device rd;   // Utilisé pour obtenir une seed aléatoire
    std::mt19937 gen(rd());  // Générateur de nombres aléatoires Mersenne Twister

    // Générer et pousser 10 éléments aléatoires dans la stack
    for (int i = 0; i < 3000; ++i) {
        std::uniform_int_distribution<int> dis(1, 4000); // Distribution uniforme entre 1 et 100
        int random_value = dis(gen); // Génère une valeur aléatoire
        stk.push(random_value); // Pousse la valeur dans la stack
    }

    return stk;
}

// Fonction pour imprimer une stack
template<typename T>
void printStack(std::stack<T> stk) {
    while (!stk.empty()) {
        std::cout << stk.top() << " ";
        stk.pop();
    }
    std::cout << std::endl;
}

int main() {
    // Générer une stack non triée de 10 éléments
    std::stack<unsigned int> myStack = generateUnsortedStack();

    // Afficher le contenu de la stack générée
    std::cout << "Contenu de la stack non triée : ";
    printStack(myStack);
	myStack = sort_stack(myStack, 0);
	printStack(myStack);


    return 0;
}

//1 1 1 1		 1 1 1
//11	11 enregistrer la premiere comparaison par pair pour placer l'element les pairs sont au meme indice il faut juste un shift qui correspond au nombre d'element push 
// 1 1 1 1 1 1 1 1 1 1 1 1 1
// 1 1 1 1 1 1 2 2 2 2 2 2 2


//1a 2 2 2 l'index de la premiere comparaison permet d'optimiser le binary search 
// 1 1 1 2 2 2 3 3 3 4 4 4 4
// 1 1 2 3 3 4 5 5 6 7 7 8 8