/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_sqrt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 13:21:32 by ade-verd          #+#    #+#             */
/*   Updated: 2017/12/04 17:50:22 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_int_sqrt(int nb)
{
	while (ft_sqrt(nb) == 0 && nb)
		nb--;
	return (ft_sqrt(nb));
}
