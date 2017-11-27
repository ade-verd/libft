/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 13:38:17 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/27 13:39:18 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_intlen(int n)
{
	int		nb_char;
	int		sign;

	nb_char = 1;
	sign = (n < 0 ? -1 : 1);
	while (n / 10 != 0)
	{
		nb_char++;
		n = n / 10;
	}
	if (sign < 0)
		return (nb_char + 1);
	return (nb_char);
}