/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmatsin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:13:30 by brmatsin          #+#    #+#             */
/*   Updated: 2020/07/15 17:23:12 by brmatsin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putchar(char c)
{
	  write(1, &c, 1);
}

void    ft_ultimate_div_mod(int *a, int *b)
{
	    int tempA;
		int tempB;
		int newA;
		int newB;

		tempA = *a;
		tempB = *b;
		newA = tempA / tempB;
		newB = tempA % tempB;
		*a = newA;
		*b = newB;
}

int  main()
{
	int a;
	int b;

	a = 44;
	b = 20;
	ft_ultimate_div_mod(&a, &b);
	printf("%d  %d", a, b);
	return (0);
}
