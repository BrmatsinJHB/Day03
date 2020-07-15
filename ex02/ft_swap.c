/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmatsin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:46:22 by brmatsin          #+#    #+#             */
/*   Updated: 2020/07/15 15:23:03 by brmatsin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_puchar(char c)
{
	   write(1, &c, 1);
}

void     swap(int *a, int *b);

int main()
{
	   int num1 = 5; 
	   int num2 = 10;
	   swap( &num1, &num2);
	   write( "num1 = %d\n", num1);
	   write( "num2 = %d", num2);
	   return 0;
}

void    swap(int *a, int *b)
{
	   int temp;
	   temp = *a;
	   *a = *b;
	   *b = temp;
}
