/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 08:59:28 by kofujita          #+#    #+#             */
/*   Updated: 2024/09/07 09:00:53 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_std.h"

size_t	ft_std_length(
			const char *const sub)
{
	size_t	ret;

	ret = 0;
	while (sub[ret])
		ret++;
	return (ret);
}
