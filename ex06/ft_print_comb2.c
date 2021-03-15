/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlajoye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:30:12 by tlajoye           #+#    #+#             */
/*   Updated: 2021/03/15 12:00:34 by tlajoye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nums(int t, int l)
{
	char ta;
	char tb;
	char la;
	char lb;

	ta = (t / 10) + '0';
	tb = (t % 10) + '0';
	la = (l / 10) + '0';
	lb = (l % 10) + '0';
	write(1, &ta, 1);
	write(1, &tb, 1);
	write(1, " ", 1);
	write(1, &la, 1);
	write(1, &lb, 1);
	if (!(t == 98 && l == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int t;
	int l;

	t = 0;
	while (t <= 98)
	{
		l = 0;
		l++;
		while (l <= 99)
		{
			ft_print_nums(t, l);
			l++;
		}
		t++;
	}
}
