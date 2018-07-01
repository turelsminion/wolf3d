#include "../include/wolf3d.h"

t_obj       **memalloc_obj(t_obj  **obj)
{
  int i;

  obj = (t_obj**)malloc(sizeof(t_obj*) * sizeobj);
  i = -1;
  while (++i < 20)
    obj[i] = (t_obj*)malloc(sizeof(t_obj) * sizeobj);
  return(obj);
}

t_objects   **memalloc_objects(t_objects **objects)
{
  int i;
  int j;

  objects = (t_objects**)malloc(sizeof(t_objects*) * sizeobj);
  i = -1;
  while (++i < 20)
    objects[i] = (t_objects*)malloc(sizeof(t_objects) * sizeobj);
  i = -1;
  while (++i < 20)
  {
    j = -1;
    while (++j < 20)
      objects[i][j].obj = memalloc_obj(objects[i][j].obj);
  }
  return (objects);
}


t_room    memalloc_room(t_room room)
{
  int i;

  room.walls = (t_wall*)malloc(sizeof(t_wall) * 6);
  i = -1;
  while (++i < 6)
    room.walls[i].objects = memalloc_objects(room.walls[i].objects);
  return(room);
}