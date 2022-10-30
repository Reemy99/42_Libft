/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:45:03 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:25:57 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <strings.h>
# include <limits.h>

/*------------MAIN STRUCTURE LIST ----------*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;				

size_t		ft_atoi(const char *str);
size_t		ft_isalnum(size_t value);
size_t		ft_isalpha(size_t letter);
size_t		ft_isascii(size_t value);
size_t		ft_isdigit(size_t nb);
size_t		ft_isprint(size_t c);
size_t		ft_tolower(size_t l);
size_t		ft_toupper(size_t l);
size_t		ft_strncmp(const char *str1, const char *str2, size_t n);
size_t		ft_memcmp(const void *s1, const void *s2, size_t len);
char		*ft_strchr(const char *str, size_t c);
char		*ft_strnstr(const char *haystack, const char *to_find, size_t len);
char		*ft_strrchr(const char *str, size_t c);
char		*ft_strdup(const char *src);
char		*ft_substr(char const *str, unsigned int start, size_t len);
char		*ft_strjoin(char const *str1, char const *str2);
char		*ft_strtrim(char const *str1, char const *set);
char		**ft_split(char const *str, char c);
char		*ft_itoa(size_t n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t		ft_strlcat(char *dest, const char *src, size_t destsize);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlen(const char *str);
void		*ft_memcpy(void *dest, const void *src, size_t len);
void		*ft_memset(void *str, int num, size_t len);
void		*ft_memchr(const void *str, int c, size_t len);
void		*ft_memmove(void *dest, const void *src, size_t len);
void		ft_bzero(void *str, size_t num);
void		*ft_calloc(size_t count, size_t size);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, size_t fd);
void		ft_putstr_fd(char *s, size_t fd);
void		ft_putendl_fd(char *s, size_t fd);
void		ft_putnbr_fd(size_t n, size_t fd);

//________BONUS PART__________//
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
#endif