#include "../include/wolf3d.h"

int main()
{
    int     i;
    int     j;
    t_walls *walls;
    t_Wmlx  mlx;

    walls = memallocwalls(walls);
    walls = read_file(walls);
    mlx.ptr = mlx_init();
    mlx.win = mlx_new_window(mlx.ptr, len, len, "WOLF3D");
    mlx_loop(mlx.ptr);
    return(0);
}
