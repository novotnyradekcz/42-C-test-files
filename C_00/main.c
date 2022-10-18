/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:30:09 by rnovotny          #+#    #+#             */
/*   Updated: 2022/10/16 17:03:18 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ex00/ft_putchar.c"
#include "ex01/ft_print_alphabet.c"
#include "ex02/ft_print_reverse_alphabet.c"
#include "ex03/ft_print_numbers.c"
#include "ex04/ft_is_negative.c"
#include "ex05/ft_print_comb.c"
#include "ex06/ft_print_comb2.c"
#include "ex07/ft_putnbr.c"
#include "ex08/ft_print_combn.c"

int	main()
{
	// 00
	write(1, "\nex00\n", 6);
	ft_putchar('&');
	ft_putchar('5');
	ft_putchar('\\');
	ft_putchar('\"');
	ft_putchar('@');
	
	// 01
	write(1, "\n\nex01\n", 6);
	ft_print_alphabet();
	
	// 02
	write(1, "\n\nex02\n", 6);
	ft_print_reverse_alphabet();
	
	// 03
	write(1, "\n\nex03\n", 6);
	ft_print_numbers();
	
	// 04
	write(1, "\n\nex04\n", 6);
	ft_is_negative(-46576);
	ft_is_negative(465706);
	ft_is_negative(0);
	ft_is_negative(45446576);
	ft_is_negative(-76);
	
	// 05
	write(1, "\ne\nx05\n", 6);
	ft_print_comb();
	
	// 06
	write(1, "\n\nex06\n", 6);
	ft_print_comb2();
	
	// 07
	write(1, "\n\nex07\n", 6);
	ft_putnbr(-648);
	ft_putnbr(0);
	
	// 08
	write(1, "\n\nex08\n", 6);
	ft_print_combn(1);
	ft_print_combn(2);
	ft_print_combn(3);
	ft_print_combn(6);
	ft_print_combn(9);
}
