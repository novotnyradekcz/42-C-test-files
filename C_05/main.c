/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:33:46 by rnovotny          #+#    #+#             */
/*   Updated: 2022/10/20 18:35:36 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int	main()
{
	// ex00
	printf("ex00\n");
	int	fact = 10;
	printf("%d factorial iterative: %d\n", fact, ft_iterative_factorial(fact));
	
	// ex01
	printf("\nex01\n");
	printf("%d factorial recursive: %d\n", fact, ft_recursive_factorial(fact));
	
	// ex02
	int	num = -12;
	int	power = 3;
	printf("\nex02\n");
	printf("%d to the power of %d iterative: %d\n", num, power, ft_iterative_power(num, power));
	
	// ex03
	printf("\nex03\n");
	printf("%d to the power of %d recursive: %d\n", num, power, ft_recursive_power(num, power));
	
	// ex04
	printf("\nex04\n");
	int fib = 23;
	int i;
	printf("The first %d digits of the Fibonacci sequence: ", fib);
	for (i=0; i<fib; i++)
		printf("%d, ", ft_fibonacci(i));
	
	// ex05
	printf("\n\nex05\n");
	int num1 = 14879788;
	printf("\n\nThe square root of %d is %d.\n", num1, ft_sqrt(num1));

	// ex06
	printf("\nex06\n");
	int num2 = 89;
	printf("%d is a prime: %d\n", num2, ft_is_prime(num2));

	// ex07
	printf("\nex07\n");
	int num3 = 698465646;
	printf("The next prime after %d is %d.\n", num3, ft_find_next_prime(num3));

	// ex08
	printf("\nex08\n");
}
