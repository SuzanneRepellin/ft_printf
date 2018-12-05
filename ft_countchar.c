/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_countchar.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: srepelli <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/14 17:34:17 by srepelli     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/02 15:59:33 by srepelli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_countchar(const char *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s && c)
	{
		while (s[i] != '\0')
		{
			if (s[i] == c)
				j++;
			i++;
		}
		return (j);
	}
	return (0);
}
