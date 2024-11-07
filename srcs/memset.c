/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:36:37 by kofujita          #+#    #+#             */
/*   Updated: 2024/11/07 20:42:23 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_std.h"

void	ft_std_memset(
			void *const addr,
			const unsigned char byte,
			size_t size)
{
	unsigned char	*dt;

	dt = addr;
	while (size--)
		dt[size] = byte;
}
