/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:26:13 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/22 14:38:55 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_helper(int a, int b, int c)
{
	if (a == 10) 
	return;
    else if (b == 10) ft_helper(a + 1, a + 2, a + 3);
    else if (c == 10) ft_helper(a, b + 1, b + 2);
    else
{
    ft_putchar(',');
    ft_putchar(' ');
    ft_putchar("0123456789"[a]);
    ft_putchar("0123456789"[b]);
    ft_putchar("0123456789"[c]);
    ft_helper(a, b, c + 1);
}
}

void ft_print_comb(void)
{
    ft_putchar('0');
    ft_putchar('1');
    ft_putchar('2');
    ft_helper(0, 1, 3);
  	ft_putchar('\n');
}


