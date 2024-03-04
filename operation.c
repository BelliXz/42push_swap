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

void	swap(char c, stack *a, stack *b)//assume stack as stack's datatype
{
	int	i;
	int	temp;

	i = 0;
	// sa
	if (a[0] && a[1])
	{
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
	}
	// sb
	if (b[0] && b[1])
	{
		temp = b[0];
		b[0] = b[1];
		b[1] = temp;
	}
	// ss
}

void	push(char c, stack *a, stack *b)
{
	//pa
	//pb
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