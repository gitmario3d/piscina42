/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:27:47 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/25 20:25:28 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_fd(char **argv)
{
	int	fd;

	fd = open("./map.txt", 0);
	return (fd);
}

char    *ft_save_arr(char **argv)
{
    char    buf[1];
    int     i;
    char    *arr;
    int     fd;


    fd = ft_fd(argv);
    i = 0;
    while (read(fd, buf, 1) != 0)
        i++;
    i++;
    arr = (char *)malloc(sizeof(char) * i);
    close (fd);
    fd = ft_fd(argv);
    i = 0;
    while (read(fd, buf, 1) != 0)
    {
        arr[i] = buf[0];
        i++;
    }
    arr[i] = '\0';
	close (fd);
    return (arr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_save_params(char **argv)
{
	char	*params;
	char	*arr;
	int		i;

	params = "9.ox";
	arr = ft_save_arr(argv);
	i = 0;
	while (arr[i] != '\n')
	{
		params[i] = arr[i];
		i++;
	}
	return (params);
}
char **rellenarmapita(char *arr, char **map)
{
	int	i;
	int	j;
	int	k;

	i = 0;
    j = 0;
    k = 0;
    while (arr[k])
    {
        while (arr[k] != '\n')
        {
            map[i][j] = arr[k];
            j++;
            k++;
        }
        map[i][j] = '\n';
        j = 0;
        k++;
        i++;
    }
    map[i] = NULL;
    return (map);
}
char	**ft_save_map(char **argv)
{
	char	**map;
	char	*arr;
	int		count;
	int		i;
	int		j;

	j = 0;
	i = 0;
	map = (char **)malloc(sizeof(char *) * ft_strlen(ft_save_arr(argv)));
	arr = (char *)malloc(sizeof(char) * ft_strlen(ft_save_arr(argv)));
	arr = ft_save_arr(argv);
	count = 0;
	while (arr[i])
	{
		count++; 
		if (arr[i] == '\n')
		{
			map[j] = (char *)malloc(sizeof(char) * count);
			j++;
			count = 0;
		}
		i++;
	}
	arr = ft_save_arr(argv);
	return (rellenarmapita(arr, map));
}

int main(int argc, char **argv)
{
	char	**map;
	int		i;

	if (argc > 1)
	{
		map = ft_save_map(argv);
		i = 0;
		while (map[i] != NULL)
		{
			printf("%s", map[i]);
			i++;
		}
	}
}
