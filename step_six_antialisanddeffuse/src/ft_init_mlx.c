#include "../include/rtv.h"

int			ft_init_mlx(t_win *wind)
{
	wind->mlx = mlx_init();
	wind->win = mlx_new_window(wind->mlx, SCREEN_W, SCREEN_H, "RTv1");
	wind->img = mlx_new_image(wind->mlx, SCREEN_W, SCREEN_H);
	wind->img2 = mlx_get_data_addr(wind->img, &(wind->bps), \
	&(wind->size), &(wind->endian));


//	ft_key_event(wind);
//	mlx_loop(wind->mlx);
	return (1);
}
