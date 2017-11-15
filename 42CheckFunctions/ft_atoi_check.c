/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-verd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:20:27 by ade-verd          #+#    #+#             */
/*   Updated: 2017/11/15 15:40:14 by ade-verd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	//atoi
#include <stdio.h> //printf
#include "./../libft.h"
#include "ft_display_file.h" //open, close, write in files
#define TO_STR_(a)	#a
#define TO_STR(a)	TO_STR_(a)
#define	FT_OFF		atoi
#define FT			ft_atoi

int		ft_atoi_check(FILE *fd)
{
	int		i;
	char	*tab[50];
	int		off;
	int		ft;

	i = 0;
//Tableau de tests
	tab[0] = "";
	tab[1] = " ";
	tab[2] = "\0";
	tab[3] = "123";
	tab[4] = "-123";
	tab[5] = "    1234";
	tab[6] = "\n\t\v\f\r    12345";
	tab[7] = " 1238r54";
	tab[8] = " \n\t  -12+45h";
	tab[9] = " --128 1";
	tab[10] = "   ++87451t";
	tab[11] = "as12";
	tab[12] = " +1235489.15661";
	tab[13] = " +2147483647";
	tab[14] = " -2147483648";
	tab[15] = " 2147483660";
	tab[16] = " -2147483660";
	tab[17] = "\e483660";
	tab[18] = "-9223372036854775808";
	tab[19] = "+9223372036854775807";
	tab[20] = "-9223372036854775809";
	tab[21] = "+9223372036854775808";
	tab[22] = "99999999999999999999999999";
	tab[23] = "-99999999999999999999999999";
	tab[24] = "+9223372036854775806";

	tab[25] = 0; //Fin du tableau

	while (tab[i])
	{
		off = FT_OFF(tab[i]);
		ft = FT(tab[i]);
		if (off != ft)
		{
			fprintf(stderr,"\nX_X KO\t");
			fprintf(stderr,"%s:%-15d\t", TO_STR(FT_OFF), off);
			fprintf(stderr,"ft_%s:%-15d\t", TO_STR(FT_OFF), ft);
			fprintf(stderr,"%s\n", tab[i]);
			fprintf(fd,"\nX_X KO\t");
			fprintf(fd,"%s:%-15d\t", TO_STR(FT_OFF), off);
			fprintf(fd,"ft_%s:%-15d\t", TO_STR(FT_OFF), ft);
			fprintf(fd,"%s\n", tab[i]);
			return (0);
		}
		else
		{
			fprintf(fd, "OK ;)\t");
			fprintf(fd,"%s:%-15d\t", TO_STR(FT_OFF), off);
			fprintf(fd,"ft_%s:%-15d\t", TO_STR(FT_OFF), ft);
			fprintf(fd,"%s\n", tab[i]);
		}
		i++;
	}
	printf("OK\n");
	return (0);
}
