/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <ade-verd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 13:39:20 by ade-verd          #+#    #+#             */
/*   Updated: 2018/02/27 15:11:10 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_bitlen(unsigned int n)
{
	int		count;

	count = 0;
	while (n)
	{
		count++;
		n = n >> 1;
	}
	return (count);
}
