/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:39:27 by rmaldona          #+#    #+#             */
/*   Updated: 2022/07/30 13:48:34 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
void	ft_bzero(void *s, size_t n);
char	*read_file(int fd, char *res);
char	*ft_next_line(char *buffer);
char	*ft_freejoin(char *buffer, char *buf);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s);

#endif
