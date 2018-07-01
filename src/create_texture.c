#include "../include/wolf3d.h"

t_obj	**create_obj_brick(t_obj **obj)
{
	int i;
	int j;

	i = -1;
	while (++i < sizeobj)
	{
		j = -1;
		while (++j < sizeobj)
		{
			if (i == 0 || i == 19)
				obj[i][j].color = greywall;
			else if ((j == 0 || j == 19) && i < 11)
				obj[i][j].color = greywall;
			else if (i == 9 || i == 10)
				obj[i][j].color = greywall;
			else if ((j == 9 || j == 10) && i < 20 && i > 8)
				obj[i][j].color = greywall;
			else
				obj[i][j].color = orange;
		}
	}
	return (obj);
}

t_obj	**create_obj_lamp(t_obj **obj)
{
	int i;
	int j;

	i = -1;
	while (++i < sizeobj)
	{
		j = -1;
		while (++j < sizeobj)
		{
			if (i == 0 || i == 19 || j == 0 || j == 19)
				obj[i][j].color = greyfloor;
			else if ((i > 4 && i < 15) && (j > 3 && j < 16))
					obj[i][j].color = white;
			else if ((i == 3 || i == 4 || i == 15 || i == 16) && (j > 2 && j < 17))
					obj[i][j].color = greyroof;
			else if ((j == 3 || j == 4 || j == 15 || j == 16) && (i > 2 && i < 17))
					obj[i][j].color = greyroof;
			else
				obj[i][j].color = yellow;
		}
	}
	return (obj);
}

t_obj	**create_obj_roof(t_obj **obj)
{
	int i;
	int j;

	i = -1;
	while (++i < sizeobj)
	{
		j = -1;
		while(++j < sizeobj)
		{
			obj[i][j].color = greyroof;
		}
	}
	return (obj);
}

t_obj	**create_obj_floor(t_obj **obj)
{
	int i;
	int j;

	i = -1;
	while (++i < sizeobj)
	{
		j = -1;
		while (++j < sizeobj)
		{
			if (i == 0 || i == 5 || i == 10 || i == 15)
				obj[i][j].color = green;
			else if ((j == 0) && ((i > -1 && i < 6) || (i > 9 && i < 16)))
				obj[i][j].color = green;
			else if ((j == 19) && ((i > 4 && i < 11) || (i > 14 && i < 20)))
				obj[i][j].color = green;
			else if ((j == 5 || j == 10 || j == 15) && ((i > -1 && i < 6) || (i > 9 && i < 16)))
				obj[i][j].color = green;
			else if ((j == 4 || j == 9 || j == 14) && ((i > 4 && i < 11) || (i > 14 && i < 20)))
				obj[i][j].color = green;
			else
				obj[i][j].color = greyfloor;
		}
	}
}