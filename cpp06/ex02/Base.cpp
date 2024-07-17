/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:44:14 by seb               #+#    #+#             */
/*   Updated: 2024/06/27 15:09:41 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BaseA.hpp"
#include "BaseB.hpp"
#include "BaseC.hpp"

//Faire generate

Base::~Base()
{
    
}

void identify(Base* p)
{
    if (BaseA* BaseAPtr = dynamic_cast<BaseA*>(p))
    {
        std::cout << "p est de type A" << std::endl;
    }
    else if (BaseB* BaseBPtr = dynamic_cast<BaseB*>(p))
    {
        std::cout << "p est de type B" << std::endl;
    }
    else if (BaseC* BaseCPtr = dynamic_cast<BaseC*>(p))
    {
        std::cout << "p est de type C" << std::endl;
    }
}

void identify(Base &p)
{
    try
    {
        BaseA &BaseAPtr = dynamic_cast<BaseA &>(p);
        std::cout << "p est de type A" << std::endl;
    }
    catch (const std::bad_cast& e)
    {
        try
        {
            BaseB &BaseBPtr = dynamic_cast<BaseB &>(p);
            std::cout << "p est de type B" << std::endl;
        }
        catch (const std::bad_cast& e)
        {
            try 
            {
                BaseC &BaseCPtr = dynamic_cast<BaseC &>(p);
                std::cout << "p est de type C" << std::endl;
            }
            catch (const std::bad_cast& e)
            {
                std::cout << "Error" << std::endl;
            }
        }

    }
}

int main ()
{
    BaseA A1;
    BaseB B1;
    BaseC C1;

    BaseB &ref = B1;
    BaseC &ref1 = C1;
    BaseA &ref2 = A1;

    BaseA *A = &A1;
    BaseB *B = &B1;
    BaseC *C = &C1;

    identify(B);
    identify(C);
    identify(A);
    identify(ref);
    identify(ref1);
    identify(ref2);

}

