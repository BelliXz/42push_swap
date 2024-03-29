/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paradari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:32:55 by paradari          #+#    #+#             */
/*   Updated: 2024/03/04 15:32:58 by paradari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct int_list
{
	int				num;
	struct int_list	*next;
}					t_intlst;
typedef struct s_list
{
	int			content;
	struct s_list	*next;
}					t_list;

#endif