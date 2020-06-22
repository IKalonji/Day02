/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 10:03:17 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/22 14:34:25 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	
	char letter;
   	letter = 'a';

	while(letter <= 'z')
	{
		ft_putchar(letter);
	  	letter++;
	}				
}

