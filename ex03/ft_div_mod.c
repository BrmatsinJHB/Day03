/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmatsin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:28:24 by brmatsin          #+#    #+#             */
/*   Updated: 2020/07/15 17:11:06 by brmatsin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void  ft_div_mod(int *a, int *b, int *div, int *mod)
{
	  int A;
	  int B;

	  A = *a;
	  B = *b;
	  *div = A / B;
	  *mod = A % B;
}

int  main()
{
	 int a;
	 int b;
	 int mod;
	 int div;

	 a = 24;
	 b = 10;

	 ft_div_mod(&a, &b, &div, &mod);
	 printf("%d = div and %d = mod", div, mod);
	 return (0);
}

