/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paradari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:43:57 by paradari          #+#    #+#             */
/*   Updated: 2024/03/04 16:43:59 by paradari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(stack *a)//assume stack as stack's datatype
{
	int	i;
	int	temp;

	temp = a[0];
	a[0] = a[1];
	a[1] = temp;

}

void	ft_push(stack *a, stack *b)
{
	int	i;
	int	temp;

	temp = a[0];
	//remove 1st a and shift up
	//addfrontlist
	b[0] = temp;
}

void	rotate(char c, stack *a, stack *b)//shift up
{
	//ra
	//rb
	//rr
}

void	reverse_rotate(char c, stack *a, stack *b)//shift down
{
	//rra
	//rrb
	//rrr
}