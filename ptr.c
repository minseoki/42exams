# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ptr                                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwere <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/26 10:35:04 by jwere             #+#    #+#              #
/*   Updated: 2018/02/26 10:52:50 by jwere            ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include <unistd.h>

typedef	void(*funptr)(char);
void	ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}
int main()
{
	funptr		*f;

	f = &ft_putchar;
	f('z');
	return (0);
}
