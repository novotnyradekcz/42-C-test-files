/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:53:34 by rnovotny          #+#    #+#             */
/*   Updated: 2022/10/18 19:56:02 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"
#include "ex04/ft_putnbr_base.c"
#include "ex05/ft_atoi_base.c"

int	main()
{
	// ex00
	printf("\nex00\n");
	char word1[] = "Hello";
	char word2[] = "Caravaggio";
	char word3[] = "Ceterum autem censeo Carthaginem esse delendam.";
	int len;
	len = ft_strlen(word1);
	printf("%s has %d characters.\n", word1, len);
	len = ft_strlen(word2);
	printf("%s has %d characters.\n", word2, len);
	len = ft_strlen(word3);
	printf("%s has %d characters.\n", word3, len);
	
	// ex01
	printf("\nex01\n");
	ft_putstr("So long, and thanks for all the fish.\n");
	ft_putstr("73057HDSFGur@}{gf\n");

	// ex02
	printf("\n\nex02\n");
	write(1, "\nThis is a number: ", 20);
	ft_putnbr(-2147483648);
	write(1, "\nThis is a number: ", 20);
	ft_putnbr(2147483647);
	write(1, "\nThis is a number: ", 20);
	ft_putnbr(0);

	// ex03
	printf("\n\nex03\n");
	printf("%d\n", ft_atoi("  \t++---2147483648"));
	printf("%d\n", ft_atoi(" -  46786"));
	printf("%d\n", ft_atoi("  ++--1hgh234"));

	// ex04
	printf("\nex04\n");
	write(1, "\nNumber 2147483647 in base 0123456789: ", 40);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\nNumber -2147483648 in base zabcdefghi: ", 41);
	ft_putnbr_base(-2147483648, "zabcdefghi");
	write(1, "\nNumber 0 in base yrfji: ", 26);
	ft_putnbr_base(0, "yrfji");

	// ex05
	printf("\n\nex05\n");
	char num1[] = "  \t++---badgdhcfdh";
	char base1[] = "uabcdefghi";
	char num2[] = " -  46786";
	char base2[] = "0123456789";
	char num3[] = " ++--1hgh234";
	char base3[] = "0123456789";
	printf("Number %s, base %s, converted to decimal: %d\n", num1, base1, ft_atoi_base(num1, base1));
	printf("Number %s, base %s, converted to decimal: %d\n", num2, base2, ft_atoi_base(num2, base2));
	printf("Number %s, base %s, converted to decimal: %d\n", num3, base3, ft_atoi_base(num3, base3));
	
}
