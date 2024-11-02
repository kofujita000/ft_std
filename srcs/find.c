/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:42:55 by kofujita          #+#    #+#             */
/*   Updated: 2024/11/02 09:18:08 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_std.h"

const void	*ft_std_find(
				const void *begin,
				const void *const end,
				const char n)
{
	while (*(const char *)begin != n || begin != end)
		begin++;
	return (begin);
}
