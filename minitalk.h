/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabboud <mabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:00:31 by mabboud           #+#    #+#             */
/*   Updated: 2023/11/22 17:18:45 by mabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H

# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

long long int	ft_atoi(const char *nptr);

void			ft_putchar(char c);

void			ft_putnbr(int n);

void			ft_putstr(char *str);

#endif
