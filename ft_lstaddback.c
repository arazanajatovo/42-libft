/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstaddback.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arazanaj <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 17:46:45 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:24:11 by arazanaj    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		if (!(*alst))
			*alst = ft_lstnew(new->content, new->content_size);
		else
			ft_lstaddback(&(*alst)->next, new);
	}
}
