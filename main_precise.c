/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_precise.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 10:02:50 by hthomas           #+#    #+#             */
/*   Updated: 2019/12/15 11:38:23 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "includes/ft_printf.h"
#include<stdio.h>
#include<limits.h>

int	main(void)
{
	int ret;
	int ret2;
	// int count=0;
	// int countf=0;
	// void	*ptr2 = "ok";
	// void	*ptr3 = NULL;
	//int		c = 'a';

	ret = printf("|% -3.1i|, |% -3.1i|, |% -3.1i| %s", 42, -42, 0, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n", ret);
	ret2 = ft_printf("|% -3.1i|, |% -3.1i|, |% -3.1i| %s", 42, -42, 0, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n\n\n", ret2);


/*


	ret = printf("|%-.4u| |%-4.4u| |%-4.4u| %s", 42, -42, 0, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n", ret);
	ret2 = ft_printf("|%-4.4u| |%-4.4u| |%-4.4u| %s", 42, -42, 0, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n\n\n", ret2);

	ret = printf("|%-4.4x| |%-4.4x| |%-4.4x| %s", 42, -42, 0, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n", ret);
	ret2 = ft_printf("|%-4.4x| |%-4.4x| |%-4.4x| %s", 42, -42, 0, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n\n\n", ret2);

	ret = printf("|%-4.4X| |%-4.4X| |%-4.4X| %s", 42, -42, 0, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n", ret);
	ret2 = ft_printf("|%-4.4X| |%-4.4X| |%-4.4X| %s", 42, -42, 0, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n\n\n", ret2);

	ret = printf("|%-4p| %s", &c, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n", ret);
	ret2 = ft_printf("|%-4p| %s", &c, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n\n\n", ret2);

	ret = printf("|%-4c| |%-4c| |%-4c| %s", 42, -42, 0, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n", ret);
	ret2 = ft_printf("|%-4c| |%-4c| |%-4c| %s", 42, -42, 0, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n\n\n", ret2);

	ret = printf("|%%| %s", "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n", ret);
	ret2 = ft_printf("|%%| %s", "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n\n\n", ret2);

	ret = printf("|%s| |%s| |%s| %s", "Hello world+-\\ok", "", NULL, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n", ret);
	ret2 = ft_printf("|%s| |%s| |%s| %s", "Hello world+-\\ok", "", NULL, "\xF0\x9F\x98\x8D \xF0\x9F\x99\x88 \xF0\x9F\x92\x96 \xF0\x9F\x8C\x9F \xE2\x9C\x85");
	printf("\n\033[0;36mreturn = %d\033[0m\n\n\n", ret2);
*/
	// if (ret == ret2)
	// {
	// 	printf("\033[0;42m               OK :) \033[0m\n");
	// 	count++;
	// 	countf++;
	// }
	// else
	// 	printf("\033[0;41m               KO :( \033[0m\n");
	//system("leaks precise.out");
	return (0);
}
