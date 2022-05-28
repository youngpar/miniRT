#include "../../inc/minirt.h"

bool	init_window(t_rt *rt)
{
	rt->mlx = mlx_init();
	if (rt->mlx == NULL)
		return (false);
	rt->win = mlx_new_window(rt->mlx, WIDTH, HEIGHT, "./minirt");
	if (rt->win == NULL)
		return (false);
	rt->img.ptr = mlx_new_image(rt->mlx, WIDTH, HEIGHT);
	if (rt->img.ptr == NULL)
		return (false);
	rt->img.data = mlx_get_data_addr(
			rt->img.ptr, &rt->img.bpp, &rt->img.offset, &rt->img.endian);
	if (rt->img.data == NULL)
		return (false);
	return (true);
}

int		destroy_win(t_rt *rt)
{
	if (rt)
	{
		mlx_destroy_window(rt->mlx, rt->win);
		exit(0);
	}
	return (0);
}
