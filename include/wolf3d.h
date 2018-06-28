#include <unistd.h>
#include <mlx.h>
#include <stdlib.h>
#include <math.h>
#include "../libft/includes/libft.h"

//size of window
#define len     600
// for moving
#define ka      97
#define kd      100
#define kw      119
#define ks      115
//for camera
#define kdown   65364
#define kleft   65361
#define kright  65363
#define kup     65362
//for fire
#define kctrl   65507

typedef struct  s_Wmlx
{
    void    *ptr;
    void    *win;
}               t_Wmlx;

typedef struct  s_wall
{
    int     x;
    int     y;
    char    texture;
}               t_wall;

typedef struct  s_walls
{
    t_wall   **w;
}               t_walls;

t_walls     *memallocwalls(t_walls *walls);
t_walls     *read_file(t_walls *walls);