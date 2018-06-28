#include "../include/wolf3d.h"

t_walls     *memallocwalls(t_walls *walls)
{
    int i;

    walls = (t_walls*)malloc(sizeof(t_walls));
    walls[0].w = (t_wall**)malloc(sizeof(t_wall*) * 10);
    i = -1;
    while (++i < 10)
    {
        walls[0].w[i] = (t_wall*)malloc(sizeof(t_wall) * 10);
    }
    return (walls);
}