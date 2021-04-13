#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_

#include "Window.h"

class ExampleWindow: public Window
{
protected:
	std::shared_ptr<SDL_Texture> _sky, _moon, _galaxy, _planet, _fog, _mars, _earth,
		_caaat1, _caaat2, _caaat3, _caaat4, _cloud, _cloud2, _rainbow, _cat1, _cat2, _nyan_cat;
	int _sky_x, _sky_y, _sky_w, _sky_h, _sky2_x,
		_moon_x, _moon_y, _moon_w, _moon_h,
		_galaxy_x, _galaxy_y, _galaxy_w, _galaxy_h,
		_planet_x, _planet_y, _planet_w, _planet_h,
		_fog_x, _fog_y, _fog_w, _fog_h, _fog2_x,
		_mars_x, _mars_y, _mars_w, _mars_h, _mars2_x,
		_earth_x, _earth_y, _earth_w, _earth_h, _earth2_x,
		_caaat1_x, _caaat1_y, _caaat1_w, _caaat1_h,
		_caaat2_x, _caaat2_y, _caaat2_w, _caaat2_h,
		_caaat3_x, _caaat3_y, _caaat3_w, _caaat3_h,
		_caaat4_x, _caaat4_y, _caaat4_w, _caaat4_h,
		_cloud_x, _cloud_y, _cloud_w, _cloud_h,
		_cloud2_x, _cloud2_y, _cloud2_w, _cloud2_h,
		_rainbow_x, _rainbow_y, _rainbow_w, _rainbow_h, _rainbow2_x,
		_cat1_x, _cat1_y, _cat1_w, _cat1_h,
		_cat2_x, _cat2_y, _cat2_w, _cat2_h,
		_nyan_cat_x, _nyan_cat_y, _nyan_cat_w, _nyan_cat_h;

public:
	ExampleWindow(
			int width = DEFAULT_WIDTH,
			int height = DEFAULT_HEIGHT);
	virtual ~ExampleWindow() = default;

	virtual void render() override;
	virtual void do_logic() override;
	virtual void handle_keys(const Uint8 *keys) override;
};


#endif /* EXAMPLEWINDOW_H_ */
