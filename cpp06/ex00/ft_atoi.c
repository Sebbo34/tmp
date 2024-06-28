/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:30:59 by seb               #+#    #+#             */
/*   Updated: 2024/06/25 13:33:48 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	cpt;
	int	nbr;
	int	negatif;

	nbr = 0;
	cpt = 0;
	negatif = 1;
	while ((nptr[cpt] >= 9 && nptr[cpt] <= 13) || nptr[cpt] == ' ' )
			cpt++;
	if (nptr[cpt] == '+' || nptr[cpt] == '-' )
	{
		if (nptr[cpt] == '-')
				negatif = -1;
		cpt++;
	}
	while (nptr[cpt] >= '0' && nptr[cpt] <= '9' )
	{
		if (nbr == 214748364 && nptr[cpt] == '8')
			return (-2147483648);
		nbr = nbr * 10 + nptr[cpt] - '0';
		cpt++;
	}
	return (nbr * negatif);
}

#include <stdio.h>
int main (void)

{
	printf("%d\n",ft_atoi("   2147483654450"));

}
