/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:25:16 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/19 10:05:21 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void){
    char letter;
	letter ='z';
	while(letter>='a'){
		ft_putchar(letter);
		letter--;
	}
}

int main(){
	ft_print_reverse_alphabet();

	return 0;
}
