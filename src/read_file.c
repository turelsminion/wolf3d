#include "../include/wolf3d.h"

t_walls     *read_file(t_walls *walls)
{
    int     fd;
    int     i;
    int     j;
    int     aux;
    char    *line;

    aux = 0;
    fd = open("map", O_RDONLY);
    while (get_next_line(fd, &line))
    {
        i = 0;
        while (line[i])
        {
            j = -1;
            while (++j < 10)
            {
                walls[0].w[aux][j].texture = line[i];
                i++;
            }
        }
        aux++;
    }
    close(fd);
    return (walls);
}