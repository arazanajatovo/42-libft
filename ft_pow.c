/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_pow.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arazanaj <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 20:18:30 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 21:11:09 by arazanaj    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int nb, int pow)
{
	int	res;

	res = nb;
	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	if (nb == 0 || nb == 1)
		return (nb);
	return (res * ft_pow(nb, --pow));
}
