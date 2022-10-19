/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:16:00 by rnovotny          #+#    #+#             */
/*   Updated: 2022/10/18 13:18:12 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"

int	main()
{
	// ex00
	printf("\nex00\n");
    char *string1 = "ABCDeFG";
    char *string2 = "ABCDEFG";
    char *string3 = "ABCD";
    char *string4 = "ABCD";
    char *string5 = "Karlsson";
    char *string6 = "Karlssonson";
    printf("Are %s and %s the same: %d\n", string1, string2, ft_strcmp(string1, string2));
    printf("Are %s and %s the same: %d\n", string3, string4, ft_strcmp(string3, string4));
    printf("Are %s and %s the same: %d\n", string5, string6, ft_strcmp(string5, string6));

    // ex01
	printf("\nex01\n");
    printf("Are the first 4 letters of %s and %s the same: %d\n", string1, string2, ft_strncmp(string1, string2, 4));
    printf("Are the first 3 letters of %s and %s the same: %d\n", string3, string4, ft_strncmp(string3, string4, 3));
    printf("Are the first 10 letters of %s and %s the same: %d\n", string5, string6, ft_strncmp(string5, string6, 10));

    // ex02
	printf("\nex02\n");
    char destination1[12];
    destination1[0] = 'H';
    destination1[1] = 'e';
    destination1[2] = 'l';
    destination1[3] = 'l';
    destination1[4] = 'o';
    destination1[5] = '\0';
    char *source1 = " World";
    printf("Can I append \'%s\' to \'%s\'?", source1, destination1);
    printf(" \'%s\'\n", ft_strcat(destination1, source1));

    // ex03
	printf("\nex03\n");
    char destination2[12];
    destination2[0] = 'H';
    destination2[1] = 'e';
    destination2[2] = 'l';
    destination2[3] = 'l';
    destination2[4] = 'o';
    destination2[5] = '\0';
    char *source2 = " World";
    printf("Can I append the first 3 letters of \'%s\' to \'%s\'?", source2, destination2);
    printf(" \'%s\'\n", ft_strncat(destination2, source2, 3));

    // ex04
	printf("\nex04\n");
    char *bigString = "Hello, my name is John John.";
    char *needle1 = "my name";
    char *needle2 = "not John";
    printf("The haystack: %s\n", bigString);
    printf("The first needle: %s\n%s\n", needle1, ft_strstr(bigString, needle1));
    printf("The second needle: %s\n%s\n", needle2, ft_strstr(bigString, needle2));

    // ex05
	printf("\nex05\n");
    char destination3[12];
    destination3[0] = 'H';
    destination3[1] = 'e';
    destination3[2] = 'l';
    destination3[3] = 'l';
    destination3[4] = 'o';
    destination3[5] = '\0';
    char *source3 = " World";
    printf("Can I append of \'%s\' to \'%s\' (size 8)?", source3, destination3);
    printf(" \'%s\', size %d\n", destination3, ft_strlcat(destination3, source3, 8));
}
