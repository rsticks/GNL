/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsticks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 17:16:25 by rsticks           #+#    #+#             */
/*   Updated: 2019/04/21 15:48:20 by rsticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

struct					s_atoi
{
	unsigned long int	nb;
	int					i;
	int					m;
	int					g;
};

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

int						ft_sqrt(int nb);
void					ft_swap(int *a, int *b);
int						ft_str_is_printable(char *str);
int						ft_iscntrl(int ch);
int						ft_isspace(int ch);
int						ft_islower(int ch);
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
t_list					*ft_lstnew(void const *content, size_t content_size);
char					*ft_itoa(int n);
char					**ft_strsplit(char const *s, char c);
char					*ft_strtrim(char const *s);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strsub(char const *s,
		unsigned int start, size_t len);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strmapi(char const *s,
		char(*f)(unsigned int, char));
int						ft_strequ(char const *s1, char const *s2);
char					*ft_strmap(char const *s, char (*f)(char));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
void					ft_striter(char *s, void (*f)(char *));
void					ft_strclr(char *s);
void					ft_strdel(char **as);
char					*ft_strnew(size_t size);
void					ft_memdel(void **ap);
void					*ft_memalloc(size_t size);
void					ft_putnbr_fd(int nb, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putendl(char const *s);
void					ft_putstr_fd(const char *str, int fd);
void					ft_putchar_fd(char c, int fd);
int						ft_tolower(int ch);
int						ft_toupper(int ch);
int						ft_isprint(int ch);
int						ft_isascii(int ch);
int						ft_isalnum(int ch);
int						ft_isdigit(int ch);
int						ft_isalpha(int ch);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strnstr(const char *str1,
		const char *str2, size_t len);
char					*ft_strstr(const char *str1, const char *str2);
char					*ft_strrchr(const char *str, int ch);
char					*ft_strchr(const char *str, int ch);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_strncat(char *dst, const char *append, size_t n);
char					*ft_strcat(char *dst, const char *append);
char					*ft_strncpy(char *dst, const char *src, size_t n);
int						ft_memcmp(const void *buf1,
		const void *buf2, size_t count);
void					*ft_memchr(const void *dd, int cc, size_t n);
void					*ft_memmove(void *dst, const void *src, size_t n);
void					*ft_memccpy(void *dest,
		const void *source, int ch, size_t count);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					ft_bzero(void *s, size_t n);
void					*ft_memset(void *destination, int c, size_t n);
void					ft_putchar(char c);
char					*ft_strdup(const char *src);
size_t					ft_strlen(const char *s);
int						ft_atoi(const char *str);
char					*ft_strcpy(char *dest, const char *src);
void					ft_putstr(const char *str);
void					ft_putnbr(int nb);

#endif
