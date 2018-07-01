#include "../include/wolf3d.h"

int main()
{
    t_Wmlx  mlx;
    t_room  room;

    mlx.ptr = mlx_init();
    mlx.win = mlx_new_window(mlx.ptr, len, len, "WOLF3D");
    room = memalloc_room(room);
    mlx_loop(mlx.ptr);
    return (0);
}
