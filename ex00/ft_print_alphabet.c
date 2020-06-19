/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 10:03:17 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/19 09:13:43 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void);

void ft_putchar(char c){

	write(1, &c, 1);
	
}

int main(void){

	ft_print_alphabet();
return 0;

}


void ft_print_alphabet(void){
	
	char letter;
   	letter = 'a';

	while(letter <= 'z'){
		ft_putchar(letter);
	  	letter++;
	}				
}
