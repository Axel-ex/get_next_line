/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelchab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:01:24 by axelchab          #+#    #+#             */
/*   Updated: 2023/05/09 09:05:26 by axelchab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*file;
	char	*line;
	int		fd;

	if (argc < 2)
	{
		printf("Enter the name of a file");
		return (0);
	}
	file = argv[1];
	fd = open(file, O_RDONLY);
	while (line)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
	}
	return (0);
}
