/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:07:54 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/19 10:48:14 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, sizeof c);
}

void ft_print_numbers(void){
	int num=060;
		while(num<=071){
			ft_putchar(num);
			num++;
		}
}

int main(){

	ft_print_numbers();

	return 0;
}
