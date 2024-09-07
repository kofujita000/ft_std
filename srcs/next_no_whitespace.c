/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_whitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:22:47 by kofujita          #+#    #+#             */
/*   Updated: 2024/09/07 09:32:22 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_std.h"

const char	*ft_std_next_no_whitespace(
				const char *const survey)
{
	const char	*pnt;

	pnt = survey;
	while (*pnt)
	{
		if (!(*pnt == 0x20 || (0x09 <= *pnt && *pnt <= 0x0d)))
			return pnt;
		pnt++;
	}
	return (survey);
}
