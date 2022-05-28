#ifndef MINIRT_STRUCTURE_H
# define MINIRT_STRUCTURE_H

#include <stdbool.h>

typedef struct s_rt		t_rt;
typedef struct s_image	t_image;
typedef struct s_ray	t_ray;

struct s_image
{
	void	*ptr;
	char	*data;
	int		bpp;
	int		offset;
	int		endian;
};

struct s_rt
{
	void	*mlx;
	void	*win;
	int		width;
	int		height;
	t_image	img;
};

#endif
