/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 09:26:57 by grodrig2          #+#    #+#             */
/*   Updated: 2026/01/19 15:40:06 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*get_next_word(char const **s, char c)
{
	char const	*start;
	size_t		len;
	char		*word;

	while (**s == c)
		(*s)++;
	start = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - start;
	word = ft_substr(start, 0, len);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;
	int		i;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)ft_calloc(word_count + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		result[i] = get_next_word(&s, c);
		if (!result[i])
		{
			while (i-- > 0)
				free(result[i]);
			free(result);
			return (NULL);
		}
		i++;
	}
	return (result);
}
// #include "libft.h"

// static char		**fill_arr(char **arr, const char *str, char c, unsigned int n);
// static int		ft_word(const char *str, char c);
// static size_t	ft_counter_char(const char *str, char c);
// static void		ft_free(char **arr, unsigned int n);

// static char		**fill_arr(char **arr, const char *str, char c, unsigned int n)
// {
// 	char				*str_cpy;
// 	unsigned int		i;
// 	unsigned int		j;

// 	i = 0;
// 	while (i < n)
// 	{
// 		j = 0;
// 		while (*str == c)
// 			str++;
// 		str_cpy = malloc (ft_word(str, c) + 1);
// 		if (!str_cpy)
// 		{
// 			ft_free (arr, i);
// 			return (NULL);
// 		}
// 		while (*str && *str != c)
// 			str_cpy[j++] = *str++;
// 		str_cpy[j] = '\0';
// 		arr[i] = str_cpy;
// 		i++;
// 	}
// 	arr[i] = NULL;
// 	return (arr);
// }

// static int	ft_word(const char *str, char c)
// {
// 	int	counter;

// 	counter = 0;
// 	while (*str && *str != c)
// 	{
// 		counter++;
// 		str++;
// 	}
// 	return (counter);
// }

// static size_t	ft_counter_char(const char *str, char c)
// {
// 	char	*str2;
// 	size_t	counter;
// 	size_t	word;

// 	word = 0;
// 	counter = 0;
// 	str2 = (char *)str;
// 	while (*str2)
// 	{
// 		if (*str2 != c)
// 			word = 1;
// 		if (word && *str2 == c)
// 		{
// 			counter++;
// 			word = 0;
// 		}
// 		str2++;
// 	}
// 	return (counter + word);
// }

// static void	ft_free(char **arr, unsigned int n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		free (arr[i]);
// 		i++;
// 	}
// 	free (arr);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char			**new_arr;
// 	unsigned int	n_words;

// 	if (!s)
// 		return (NULL);
// 	n_words = ft_counter_char(s, c);
// 	new_arr = (char **)ft_calloc(n_words + 1, sizeof (char *));
// 	if (!new_arr)
// 		return (NULL);
// 	if (!fill_arr(new_arr, s, c, n_words))
// 		return (NULL);
// 	return (new_arr);
// }
