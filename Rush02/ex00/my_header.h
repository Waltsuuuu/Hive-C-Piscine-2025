/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlundaev <vlundaev@student.fi>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:55:03 by vlundaev          #+#    #+#             */
/*   Updated: 2025/02/02 12:59:48 by vlundaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADER_H
# define MY_HEADER_H

int		is_digit(char c);
int		skip_whitespace(char *str);
int		count_digits(char *str, int i);
char	*ft_just_number(char *str);
char	*validate_and_allocate(char *str, int *i, int *size);
char	*arg_check(int argc, char **argv);
int		executor(int argc, char **argv);
int		dict_size(void);
char	*numbers_dict_content(void);

#endif
