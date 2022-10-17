/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:46:35 by rnovotny          #+#    #+#             */
/*   Updated: 2022/10/17 11:25:51 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

int	main()
{

	printf("\nEx00\n");
	int num = 6;
	printf("Before: %d\n", num);
	ft_ft(&num);
	printf("After: %d\n", num);
	
	// 01

	printf("\nEx01\n");
	int a = 6;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	int ********i = &h;
	int *********j = &i;
	printf("Before: %d\n", *********j);
	ft_ultimate_ft(j);
	printf("After: %d\n", *********j);
	
	// 02
	
	printf("\nEx02\n");
	int x = 3;
	int y = 8;
	printf("before swap - a: %d, b: %d\n", x, y);
	ft_swap(&x, &y);
	printf("after swap - a: %d, b: %d\n", x, y);
	
	// 03
	
	printf("\nEx03\n");
	int dividend = 57;
	int divisor = 5;
	int div;
	int mod;
	ft_div_mod(dividend, divisor, &div, &mod);
	printf("Dividend: %d\nDivisor: %d\nQuotient: %d\nRemainder: %d\n", dividend, divisor, div, mod);
	
	// 04
	
	printf("\nEx04\n");
	dividend = 78;
	divisor = 6;
	printf("Before division:\na = %d, b = %d\n", dividend, divisor);
	ft_ultimate_div_mod(&dividend, &divisor);
	printf("After division:\na = %d, b = %d\n", dividend, divisor);
	
	// 05

	printf("\nEx05\n");
	char aa[] = "Hello there!";
	ft_putstr(aa);
	char bb[] = "Fizz\0Buzz";
	ft_putstr(bb);
	char cc[] = "   An  ooooood Stringggggggggg";
	ft_putstr(cc);
	
	// 06
	printf("\n\nEx06\n");
	char word1[] = "Hello";
	char word2[] = "Caravaggio";
	char word3[] = "Ceterum autem censeo Carthaginem esse delendam.";
	int len;
	len = ft_strlen(word1);
	printf("%s has %d letters.\n", word1, len);
	len = ft_strlen(word2);
	printf("%s has %d letters.\n", word2, len);
	len = ft_strlen(word3);
	printf("%s has %d letters.\n", word3, len);
	
	// 07
	
	printf("\nEx07\n");
	len = 4;
	int word4[] = {1, 2, 3, 4};
	int count = 0;
	printf("original: ");
	while (count < len)
	{
		printf("%d, ", word4[count]);
		count++;
	}
	ft_rev_int_tab(word4, len);
	printf("\nreversed: ");
	count = 0;
	while (count < len)
	{
		printf("%d, ", word4[count]);
	count++;
	}
	
	// 08
	
	printf("\n\nEx08\n");
	len = 15;
	int word5[] = {9, 45, 3, 21, 7, 6, 1, 456, 78, 87, 2, 5, 1, 5, 78945};
	count = 0;
	printf("original: ");
	while (count < len)
	{
		printf("%d, ", word5[count]);
		count++;
	}
	ft_sort_int_tab(word5, len);
	printf("\nsorted: ");
	count = 0;
	while (count < len)
	{
		printf("%d, ", word5[count]);
		count++;
	}
}
