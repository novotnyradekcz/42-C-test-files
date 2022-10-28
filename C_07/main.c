/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:18:13 by rnovotny          #+#    #+#             */
/*   Updated: 2022/10/24 12:21:30 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"
#include "ex04/ft_convert_base.c"
#include "ex05/ft_split.c"

int	main()
{
	// ex00
	printf("\nex00\n");
	char	*string1 = "Hello World.";
	char	*string2 = ft_strdup(string1);
	printf("original: %s\ncopy %s", string1, string2);
	free(string2);

	// ex01
	printf("\n\nex01\n");
	int min = 214;
	int max = -250;
	printf("Range from %d to %d: ", min, max);
	int *range1 = ft_range(min, max);
	int	i;
	for (i=0; i<max-min; i++)
		printf("%d, ", range1[i]);
	free(range1);

	// ex02
	printf("\n\nex02\n");

	printf("Range from %d to %d: ", min, max);
	int *range2;
	int len = ft_ultimate_range(&range2, min, max);
	i = 0;
	for (i=0; i<max-min; i++)
		printf("%d, ", range2[i]);
	printf("length: %d", len);
	free(range2);

	// ex03
	printf("\n\nex03\n");
	int size = 4;
	char *strings[] = {
		"Hello",
		"how",
		"are",
		"you"
	};
	char *sep = " ";
	i = 0;
	printf("Concatenate this:\n");
	for (i=0; i<size; i++)
		printf("%s\n", strings[i]);
	char *rescat = ft_strjoin(size, strings, sep);
	printf("Concatenated: %s\n", rescat);
	// free(rescat);
	
	// ex04
	printf("\nex04\n");
	char *num = "     --+--+10000";
	char *base_from = "0123456789";
	char *base_to = "ab";
	printf("Converting %s from base %s to base %s: \n", num, base_from, base_to);
	char *result = ft_convert_base(num, base_from,base_to);
	printf("%s\n", result);
	free(result);

	// ex05
	printf("\nex05\n");
	char *longstr = "abcd145sdf4s4s5fsdf444";
	char *sep2 = "0123456789";
	printf("Original: %s\nSeparators: %s\nSplit up:\n", longstr, sep2);
	char **split = ft_split(longstr, sep2);
	i = 0;
	while (split[i] != 0)
	{
		printf("%s\n", split[i]);
		i++;
	}
	free(split);
}
