#include <unistd.h>
#include <mlx.h>
#include <stdlib.h>
#include <math.h>
#include "../libft/includes/libft.h"
/*In file first is the roof
  the second is the floor
  and next are walls*/

//colors
#define white     0xffffff
#define green     0x006600
#define orange    0xb0361c
#define greywall  0xafb2ad
#define greyfloor 0x5b5c5e
#define greyroof  0xdadcde
#define yellow    0xffff71

//size of window
#define len       600

//size for object
#define sizeobj   20

// for moving
#define ka        97
#define kd        100
#define kw        119
#define ks        115

//for camera
#define kdown     65364
#define kleft     65361
#define kright    65363
#define kup       65362

//for fire
#define kctrl     65507

//struct for mlx
typedef struct  s_Wmlx
{
    void    *ptr;
    void    *win;
}               t_Wmlx;

typedef struct  s_obj
{
    int x;
    int y;
    int color;
}               t_obj;

typedef struct  s_objects
{
    t_obj   **obj;
}               t_objects;

typedef struct  s_wall
{
    t_objects   **objects;
}               t_wall;

typedef struct  s_room
{
    t_wall  *walls;
}               t_room;

t_room      memalloc_room(t_room room);
t_objects   **memalloc_objects(t_objects **objects);
t_obj       **memalloc_obj(t_obj  **obj);
t_obj       **create_obj_brick(t_obj **obj);
t_obj       **create_obj_roof(t_obj **obj);
t_obj       **create_obj_lamp(t_obj **obj);
t_obj       **create_obj_floor(t_obj **obj);
