/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1srwd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 18:18:13 by jwere             #+#    #+#             */
/*   Updated: 2018/03/01 18:35:52 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1srwd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwere <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 18:17:26 by jwere             #+#    #+#             */
/*   Updated: 2018/03/01 18:17:26 by jwere            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		main(int ac, char **av)
{
	int k;

	k = 0;
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		while (av[1][k] == '\t' || av[1][k] == ' ')
			k++;
		while (av[1][k] != '\t' && av[1][k] != ' ' && av[1][k] != '\0')
	{
		ft_putchar(av[1][k]);
		k++;
	}
	}
	ft_putchar('\n');
	return (0);
}
