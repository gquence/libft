#ifndef FT_H
# define FT_H

# include <string.h>
# include <unistd.h>
# include <stdio.h>

//FIRST PART


void	*ft_memset(void *memptr, int val, int num);
void	ft_bzero(void *s, int n);
void	*ft_memcpy(void *dest, void const  *src, int n);
void	*ft_memccpy(void *dest, void const  *src, int n, int count);
void	*ft_memmove(void *dest, void const *src, int n);
const void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);


int		ft_atoi(const char *nptr);

# define ft_toupper(x) ((x <= 'z' && x >= 'a') ? (x - 32) : (x))
# define ft_tolower(x) ((x <= 'Z' && x >= 'A') ? (x + 32) : (x))
# define ft_isprint(x) ((x >= 0x20 && x <= 0x7E) ? (0x4000) : (0))
# define ft_isascii(x) ((x >= 0 && x <= 0x7F) ? (1) : (0))
# define ft_isalpha(x) (((x >= 'a' && x <= 'z') || (x >= 'Z' && x <= 'A'))? (0x400) : (0))
# define ft_isdigit(x) ((x >= '0' && x <= '9')? (0x800) : (0))
# define ft_isalnum(x) ((ft_isdigit(x) || ft_isalpha(x))? (8) : (0))


//SECOND PART

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
