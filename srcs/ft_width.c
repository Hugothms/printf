/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 15:26:20 by hthomas           #+#    #+#             */
/*   Updated: 2019/12/12 17:57:16 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_cat(int after, char *str, int width, char c)
{
	char	*justification;
	char	*tmp;
	int		i;
	int		len;

	if ((len = width - ft_strlen(str)) > 0)
	{
		if (!(justification = malloc((len + 1) * sizeof(char))))
			return (NULL);
		i = 0;
		while (i < len)
			justification[i++] = c;
		justification[i] = '\0';
		tmp = str;
		if (after)
			str = ft_strjoin(tmp, justification);
		else
			str = ft_strjoin(justification, tmp);
		free(justification);
		free(tmp);
	}
	return (str);
}
