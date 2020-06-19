/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalonji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:53:01 by ikalonji          #+#    #+#             */
/*   Updated: 2020/06/19 11:12:28 by ikalonji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_is_negative(int n){
	if(n>0){
		write(1,"P", sizeof(char));
	}else;
	write(1, "N", sizeof(char));
}

int main(){
	ft_is_negative(-4);

		return 0;
}

