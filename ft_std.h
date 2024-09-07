/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_std.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kofujita <kofujita@student42.tokyo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:35:33 by kofujita          #+#    #+#             */
/*   Updated: 2024/09/07 09:33:33 by kofujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STD_H
# define FT_STD_H

# include <stddef.h>

/**
 * Function to find the byte data.
 *
 * 1. const void*       -> begin address
 * 2. const void *const -> end address
 * 3. const char        -> find target
 *
 * r. const void* -> [end => couldn't find it] / [!end => found address]
 */
const void	*ft_std_find(
				const void *begin,
				const void *const end,
				const char n);

/**
 * Function to characters length.
 *
 * 1. const char *const -> subject of a survey.
 *
 * r. size_t -> characters length
 */
size_t		ft_std_length(
				const char *const sub);

/**
 * Function to convert characters numeric to numeric.
 *
 * 1. const char*       -> begin address
 * 2. const char*       -> end address (if [2] is null, charactor length at [1])
 * 3. int *const        -> convert numeric data
 *
 * r. int -> [0 => success] / [1 => failed]
 */
int			ft_std_atoi(
				const char *begin,
				const char *end,
				int *const response);

/**
 * Function to next not white-space char address.
 *
 * 1. const char *const -> subject of a survey
 *
 * r. const char* -> result of a survey (if you get a [1], no white space)
 */
const char	*ft_std_next_no_whitespace(
				const char *const survey);

#endif // FT_STD_H
