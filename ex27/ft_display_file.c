/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:53:52 by pehenri2          #+#    #+#             */
/*   Updated: 2023/07/17 15:53:48 by pehenri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_puterror(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(2, &str[i], 1);
	return (1);
}

int	main(int argc, char *argv[])
{
	int		fd;
	char	buff[1];
	int		read_value;

	if (argc < 2)
		return (ft_puterror("File name missing.\n"));
	if (argc > 2)
		return (ft_puterror("Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_puterror("Error opening file.\n"));
	read_value = 1;
	while (read_value == 1)
	{
		read_value = read(fd, buff, 1);
		if (read_value == 1)
			ft_putchar(*buff);
		else if (read_value == -1)
			return (ft_puterror("Error reading file.\n"));
	}
	if (close(fd) == -1)
		return (ft_puterror("Error closing files.\n"));
	return (0);
}
