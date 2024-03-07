/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paradari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:17:55 by paradari          #+#    #+#             */
/*   Updated: 2024/03/04 15:18:13 by paradari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb = (nb * 10) + (str[i++] - '0');
		else
			return (0);
	}
	return (nb * neg);
}

// void	*addtolist(t_intlst list, char	*src)
// {

// }

// t_intlst	*atointlst(t_intlst list, char *argv)
// {
// 	int	i;

// 	i = 0;
// 	while (argv[i])
// 	{
// 		if (ft_atoi(argv[i]))
// 			addtolist;
// 		else
// 			break;
// 	}
// }

// void	push_swap(int argc, char **argv)
// {
// 	t_intlst	list;

// 	list = atointlst(list, argv);
// }

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}


int	checkint(char **input)
{
	int	i;
	int	j;

	i = 1;
	while (input[i])
	{
		j = 0;
		while (input[i][j])
		{
			// printf ("%d > %c\n",i,input[i][j]);
			if (!ft_isdigit(input[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (*s)
	{
		size++;
		s++;
	}
	return (size);
}


int	checkdup(char **input)
{
	int	i;
	int	j;

	i = 1;
	while (input[i])
	{
		j = 1;
		while (input[j] && j != i)
		{
			// printf("i > %s\nj > %s\n",input[i],input[j]);
			if (!ft_strncmp(input[i], input[j], ft_strlen(input[j])))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_checkoneparam(const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (!ft_isdigit(src[i]) && src[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

size_t	ft_countwords(char *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			counter++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			if (s[i] == '\0')
				return (counter);
		}
		i++;
	}
	return (counter);
}

void	ft_setsplits(char *str, char *s, size_t wordlen, size_t *index)
{
	size_t	i;

	i = 0;
	while (i < wordlen)
	{
		str[i] = s[*index - 1 + i];
		i++;
	}
	*index += i;
	str[i] = '\0';
}

char	*ft_splitsallo(char *s, char c, size_t *index)
{
	char	*splitsword;
	size_t	wordlen;

	wordlen = 0;
	while (s[*index] != '\0' && wordlen == 0)
	{
		if (s[*index] != c)
		{
			while (s[*index + wordlen] != c && s[*index + wordlen] != '\0')
			{
				wordlen++;
			}
			splitsword = (char *)malloc(sizeof(char) * (wordlen + 1));
			if (!splitsword)
				return (NULL);
		}
		*index += 1;
	}
	ft_setsplits(splitsword, s, wordlen, index);
	return (splitsword);
}

void	ft_free(char **splits)
{
	size_t	i;

	i = 0;
	while (splits[i])
	{
		free(splits[i]);
		i++;
	}
	free(splits);
}

char	**ft_split(char const *s, char c)
{
	char	**splits;
	size_t	index;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	words = ft_countwords((char *)s, c);
	splits = (char **)malloc(sizeof(char *) * (words + 1));
	if (!splits)
		return (NULL);
	index = 0;
	i = 0;
	while (i < words)
	{
		splits[i] = ft_splitsallo((char *)s, c, &index);
		if (!splits[i])
		{
			ft_free(splits);
			return (NULL);
		}
		i++;
	}
	splits[i] = NULL;
	return (splits);
}

int	main(int argc, char **argv)
{
	t_list	**list;
	char	**splits;
	int		i;

	if (argc == 2)
	{
		if (!ft_checkoneparam(argv[1]))
			printf("Don't need char!!\n");
		else
		{
			splits = ft_split(argv[1], ' ');
			i = 0;
			while (splits[i])
			{
				printf("%3d) %s\n", i + 1, splits[i]);
				i++;
			}
			if (checkdup(splits))
			{
				printf("All Good\n");
				// list = ft_getlist(splits, 0);
			}
			else
				printf("Dup bro\n");
		}
	}
	else
	{
		if (checkint(argv) && checkdup(argv))
		{
			printf("Good\n");
			// list = ft_getlist(argv, 1);
		}
		else
			printf("Error\n");
	}
	// list = ft_getlist(argv, list);
	return (0);
}
