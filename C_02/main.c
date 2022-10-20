/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:02:16 by rnovotny          #+#    #+#             */
/*   Updated: 2022/10/16 19:19:05 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"
#include "ex12/ft_print_memory.c"

int	main()
{
	// 00
	printf("\nEx00\n");
	char	source1[] = "Hello";
	char	destination1[10];
	printf("Source: %s\nDestination: %s\n", source1, ft_strcpy(destination1, source1));
	
	// 01
	printf("\n\nEx01\n");
	char	source2[] = "Hello";
	char	destination2[] = "World";
	printf("Source: %s\nDestination: %s\n", source2, ft_strncpy(destination2, source2, 2));
	// ft_strncpy(destination2, source2, 8);
	// write(1, "Source: ", 9);
	// write(1, source2, 6);
	// write(1, "\nDestination: ", 15);
	// write(1, destination2, 11);
	
	// 02
	printf("\n\nEx02\n");
	char string1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char string2[] = "";
	char string3[] = "  TUVWXYZ";
	printf("%s contains only alphabet: %d\n", string1, ft_str_is_alpha(string1));
	printf("%s contains only alphabet: %d\n", string2, ft_str_is_alpha(string2));
	printf("%s contains only alphabet: %d\n", string3, ft_str_is_alpha(string3));

	// 03
	printf("\nEx03\n");
	char string4[] = "0123456789";
	char string5[] = "";
	char string6[] = "  754";
	printf("%s contains only numbers: %d\n", string4, ft_str_is_numeric(string4));
	printf("%s contains only numbers: %d\n", string5, ft_str_is_numeric(string5));
	printf("%s contains only numbers: %d\n", string6, ft_str_is_numeric(string6));

	// 04
	printf("\nEx04\n");
	char string7[] = "abcdefghijklmnopqrstuvwxyz";
	char string8[] = "";
	char string9[] = "  {hdfhgdsh";
	printf("%s is only lowercase: %d\n", string7, ft_str_is_lowercase(string7));
	printf("%s is only lowercase: %d\n", string8, ft_str_is_lowercase(string8));
	printf("%s is only lowercase: %d\n", string9, ft_str_is_lowercase(string9));

	// 05
	printf("\nEx05\n");
	char string10[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char string11[] = "";
	char string12[] = "  {[@HJKDSHG";
	printf("%s is only uppercase: %d\n", string10, ft_str_is_uppercase(string10));
	printf("%s is only uppercase: %d\n", string11, ft_str_is_uppercase(string11));
	printf("%s is only uppercase: %d\n", string12, ft_str_is_uppercase(string12));

	// 06
	printf("\nEx06\n");
	char string13[] = "hdgl5454i45jh&$$+|{:LSTUVWXYZ";
	char string14[] = "";
	char string15[] = " #@\t gfdsg\n{[\b@HG";
	printf("%s is only printable: %d\n", string13, ft_str_is_printable(string13));
	printf("%s is only printable %d\n", string14, ft_str_is_printable(string14));
	printf("%s is only printable: %d\n", string15, ft_str_is_printable(string15));

	// 07
	printf("\nEx07\n");
	char lowtoup[] = "abcdefghijklmnopqrstuvwxyz  56Jjfdsgsh^@@HG";
	printf("original: %s", lowtoup);
	printf("\nuppercase: %s\n", ft_strupcase(lowtoup));

	// 08
	printf("\nEx08\n");
	char uptolow[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ  76GDSHFJSH*&@klhdfh";
	printf("original: %s", uptolow);
	printf("\nlowercase: %s\n", ft_strlowcase(uptolow));

	// 09
	printf("\nEx09\n");
	char sentence[] = "a VERY interesting SeNtEncE-isn't it, 42ers! yES,indeed";
	printf("original: %s", sentence);
	printf("\ncapitalised: %s\n", ft_strcapitalize(sentence));

	// 10
	printf("\n\nEx10\n");
	char	source3[] = "World";
	char	destination3[] = "0123456789";
	printf("Source: %s\nDestination: %s\n Length: %u\n", source3, destination3, ft_strlcpy(destination3, source3, 5));

	// 11
	printf("\n\nEx11\n");
	char *nonprintable = "newline\n tabulator\t vertical tab\v";
	ft_putstr_non_printable(nonprintable);

	// 12
	printf("\n\nEx12\n");
	ft_print_memory();
}
