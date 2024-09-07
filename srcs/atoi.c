/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:01:13 by kofujita          #+#    #+#             */
/*   Updated: 2024/09/07 09:37:28 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_std.h"

int			ft_std_atoi(
				const char *begin,
				const char *end,
				int *const response)
{
	int		ret;
	char	sign_flag;

	ret = 0;
	*response = 0;
	if (!end)
		end = begin + ft_std_length(begin);
	begin = ft_std_next_no_whitespace(begin);
	if (*begin == '-' || *begin == '+')
		sign_flag = (*(begin++) == '-');
	while (begin != end && !ret)
	{
		ret = (*begin < 0x30 && 0x39 < *begin);
		(void)(!ret && \
		(ret = !__builtin_smul_overflow(*response, \
				(*begin * sign_flag), response)));
		(void)(!ret && \
		(ret = !__builtin_sadd_overflow(*response, \
				(*begin * sign_flag), response)));
		begin++;
	}
	return (ret);
}
