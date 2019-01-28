#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <stdio.h>

# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <strings.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

# ifndef MEMORY
# define MEMORY

void		*ft_memset(void *memptr, int val, size_t num);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, void const  *src, size_t n);
void		*ft_memccpy(void *dest, void const  *src, int n, size_t count);
void		*ft_memmove(void *dest, void const *src, size_t n);
const void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);

# endif


# ifndef STRING
# define STRING

int		ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *s1, const char *s2, size_t n);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *nptr);


# ifndef ISTO
# define ISTO

extern int	ft_isalnum(int c);
extern int	ft_isascii(int c);
extern int	ft_isalpha(int c);
extern int	ft_isdigit(int c);
extern int	ft_isprint(int c);
extern int	ft_tolower(int c);
extern int	ft_toupper(int c);

# endif

void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(const char *s1, const char *s2);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);

# endif


# ifndef FILES
# define FILES


void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

# endif

//THIRD PART


typedef struct		s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}			t_list;

t_list	*ft_lstnew(void const *content, size_t content_size);
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));

#endif
