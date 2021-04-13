#include "ExampleWindow.h"

#include <stdexcept>
#include <SDL2/SDL_image.h>

ExampleWindow::ExampleWindow(int width, int height)
: Window(width, height),
  _sky_x(0), _sky_y(0), _sky_w(width), _sky_h(height), _sky2_x(width),
  _moon_x(width), _moon_y(height/20), _moon_w(width/7), _moon_h(width/7),
  _galaxy_x(width), _galaxy_y(height/15), _galaxy_w(width/2), _galaxy_h(width/4),
  _planet_x(width), _planet_y(height/16), _planet_w(width/5), _planet_h(width/6),
  _fog_x(width), _fog_y(height/18), _fog_w(width/2), _fog_h(width/4), _fog2_x(width/2),
  _mars_x(0), _mars_y(height/3), _mars_w(width), _mars_h(width/4.9), _mars2_x(width),
  _earth_x(0), _earth_y(height/1.5), _earth_w(width), _earth_h(width/4), _earth2_x(width),
  _caaat1_x(width), _caaat1_y(height/4.5), _caaat1_w(width/8), _caaat1_h(width/2),
  _caaat2_x(width/2), _caaat2_y(height/12), _caaat2_w(width/10), _caaat2_h(width/3),
  _caaat3_x(width/3), _caaat3_y(height/4.5), _caaat3_w(width/8), _caaat3_h(width/2),
  _caaat4_x(width/4), _caaat4_y(height/12), _caaat4_w(width/10), _caaat4_h(width/3),
  _cloud_x(width), _cloud_y(height/15), _cloud_w(width/2), _cloud_h(width/4),
  _cloud2_x(width/2), _cloud2_y(height/18), _cloud2_w(width/2), _cloud2_h(width/4),
  _rainbow_x(0), _rainbow_y(height/1.35), _rainbow_w(width), _rainbow_h(width/10), _rainbow2_x(width),
  _cat1_x(0), _cat1_y(height/1.5), _cat1_w(width/7), _cat1_h(width/7),
  _cat2_x(0), _cat2_y(height/2), _cat2_w(width/7), _cat2_h(width/7),
  _nyan_cat_x(0), _nyan_cat_y(height/1.5), _nyan_cat_w(width/6), _nyan_cat_h(width/7)

{
	_sky = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "sky.jpg"),
			SDL_DestroyTexture);
	if (_sky == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить небо: ") +
				std::string(SDL_GetError()));

	_moon = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "moon.png"),
			SDL_DestroyTexture);
	if (_moon == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить Луну: ") +
				std::string(SDL_GetError()));

	_galaxy = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "galaxy.png"),
			SDL_DestroyTexture);
	if (_galaxy == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить галактику: ") +
				std::string(SDL_GetError()));

	_planet = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "planet.png"),
			SDL_DestroyTexture);
	if (_planet == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить планету: ") +
				std::string(SDL_GetError()));

	_fog = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "fog.png"),
			SDL_DestroyTexture);
		if (_fog == nullptr)
			throw std::runtime_error(
					std::string("Не удалось загрузить туман: ") +
					std::string(SDL_GetError()));

	_mars = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "mars.png"),
					SDL_DestroyTexture);
				if (_mars == nullptr)
					throw std::runtime_error(
							std::string("Не удалось загрузить Марс: ") +
							std::string(SDL_GetError()));

	_earth = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "earth.png"),
			SDL_DestroyTexture);
		if (_earth == nullptr)
			throw std::runtime_error(
					std::string("Не удалось загрузить Землю: ") +
					std::string(SDL_GetError()));

	_caaat1 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "caaat1.png"),
			SDL_DestroyTexture);
		if (_caaat1 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось загрузить кота: ") +
					std::string(SDL_GetError()));

	_caaat2 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "caaat2.png"),
			SDL_DestroyTexture);
		if (_caaat2 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось загрузить кота: ") +
					std::string(SDL_GetError()));

	_caaat3 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "caaat3.png"),
			SDL_DestroyTexture);
		if (_caaat3 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось загрузить кота: ") +
					std::string(SDL_GetError()));

	_caaat4 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "caaat4.png"),
			SDL_DestroyTexture);
		if (_caaat4 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось загрузить кота: ") +
					std::string(SDL_GetError()));

	_cloud = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "cloud.png"),
			SDL_DestroyTexture);
		if (_cloud == nullptr)
			throw std::runtime_error(
					std::string("Не удалось загрузить облако: ") +
					std::string(SDL_GetError()));
	_cloud2 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "cloud2.png"),
			SDL_DestroyTexture);
		if (_cloud2 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось загрузить облако: ") +
					std::string(SDL_GetError()));

	_rainbow = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "rainbow.png"),
			SDL_DestroyTexture);
		if (_rainbow == nullptr)
			throw std::runtime_error(
					std::string("Не удалось загрузить радугу: ") +
					std::string(SDL_GetError()));

	_cat1 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "cat1.png"),
			SDL_DestroyTexture);
		if (_cat1 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось загрузить радугу: ") +
					std::string(SDL_GetError()));

	_cat2 = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "cat2.png"),
			SDL_DestroyTexture);
		if (_cat2 == nullptr)
			throw std::runtime_error(
					std::string("Не удалось загрузить радугу: ") +
					std::string(SDL_GetError()));
	_nyan_cat = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "nyan-cat.png"),
			SDL_DestroyTexture);
		if (_nyan_cat == nullptr)
			throw std::runtime_error(
					std::string("Не удалось загрузить радугу: ") +
					std::string(SDL_GetError()));
}

void ExampleWindow::render()
{
	SDL_SetRenderDrawColor(_renderer.get(), 32, 32, 96, 255);
	SDL_RenderClear(_renderer.get());

	SDL_Rect sky_rect { _sky_x, _sky_y, _sky_w, _sky_h };
	SDL_RenderCopy(_renderer.get(), _sky.get(), nullptr, &sky_rect);

	SDL_Rect sky_rect2 { _sky2_x, _sky_y, _sky_w, _sky_h };
	SDL_RenderCopy(_renderer.get(), _sky.get(), nullptr, &sky_rect2);

	SDL_Rect moon_rect { _moon_x, _moon_y, _moon_w, _moon_h };
	SDL_RenderCopy(_renderer.get(), _moon.get(), nullptr, &moon_rect);

	SDL_Rect galaxy_rect { _galaxy_x, _galaxy_y, _galaxy_w, _galaxy_h };
	SDL_RenderCopy(_renderer.get(), _galaxy.get(), nullptr, &galaxy_rect);

	SDL_Rect planet_rect { _planet_x, _planet_y, _planet_w, _planet_h };
	SDL_RenderCopy(_renderer.get(), _planet.get(), nullptr, &planet_rect);

	SDL_Rect fog_rect { _fog_x, _fog_y, _fog_w, _fog_h };
	SDL_RenderCopy(_renderer.get(), _fog.get(), nullptr, &fog_rect);

	SDL_Rect fog_rect2 { _fog2_x, _fog_y, _fog_w, _fog_h };
	SDL_RenderCopy(_renderer.get(), _fog.get(), nullptr, &fog_rect2);

	SDL_Rect mars_rect { _mars_x, _mars_y, _mars_w, _mars_h };
	SDL_RenderCopy(_renderer.get(), _mars.get(), nullptr, &mars_rect);

	SDL_Rect mars_rect2 { _mars2_x, _mars_y, _mars_w, _mars_h };
	SDL_RenderCopy(_renderer.get(), _mars.get(), nullptr, &mars_rect2);

	SDL_Rect earth_rect { _earth_x, _earth_y, _earth_w, _earth_h };
	SDL_RenderCopy(_renderer.get(), _earth.get(), nullptr, &earth_rect);

	SDL_Rect earth_rect2 { _earth2_x, _earth_y, _earth_w, _earth_h };
	SDL_RenderCopy(_renderer.get(), _earth.get(), nullptr, &earth_rect2);

	SDL_Rect cloud_rect { _cloud_x, _cloud_y, _cloud_w, _cloud_h };
	SDL_RenderCopy(_renderer.get(), _cloud.get(), nullptr, &cloud_rect);

	SDL_Rect caaat2_rect { _caaat2_x, _caaat2_y, _caaat2_w, _caaat2_h };
	SDL_RenderCopy(_renderer.get(), _caaat2.get(), nullptr, &caaat2_rect);

	SDL_Rect caaat4_rect { _caaat4_x, _caaat4_y, _caaat4_w, _caaat4_h };
	SDL_RenderCopy(_renderer.get(), _caaat4.get(), nullptr, &caaat4_rect);

	SDL_Rect cloud2_rect { _cloud2_x, _cloud2_y, _cloud2_w, _cloud2_h };
	SDL_RenderCopy(_renderer.get(), _cloud2.get(), nullptr, &cloud2_rect);

	SDL_Rect rainbow_rect { _rainbow_x, _rainbow_y, _rainbow_w, _rainbow_h };
	SDL_RenderCopy(_renderer.get(), _rainbow.get(), nullptr, &rainbow_rect);

	SDL_Rect rainbow_rect2 { _rainbow2_x, _rainbow_y, _rainbow_w, _rainbow_h };
	SDL_RenderCopy(_renderer.get(), _rainbow.get(), nullptr, &rainbow_rect2);

	SDL_Rect cat1_rect { _cat1_x, _cat1_y, _cat1_w, _cat1_h };
	SDL_RenderCopy(_renderer.get(), _cat1.get(), nullptr, &cat1_rect);

	SDL_Rect cat2_rect { _cat2_x, _cat2_y, _cat2_w, _cat2_h };
	SDL_RenderCopy(_renderer.get(), _cat2.get(), nullptr, &cat2_rect);

	SDL_Rect nyan_cat_rect { _nyan_cat_x, _nyan_cat_y, _nyan_cat_w, _nyan_cat_h };
	SDL_RenderCopy(_renderer.get(), _nyan_cat.get(), nullptr, &nyan_cat_rect);

	SDL_Rect caaat1_rect { _caaat1_x, _caaat1_y, _caaat1_w, _caaat1_h };
	SDL_RenderCopy(_renderer.get(), _caaat1.get(), nullptr, &caaat1_rect);

	SDL_Rect caaat3_rect { _caaat3_x, _caaat3_y, _caaat3_w, _caaat3_h };
	SDL_RenderCopy(_renderer.get(), _caaat3.get(), nullptr, &caaat3_rect);
}

void ExampleWindow::do_logic()
{
	_sky_x -= 2;
	if (_sky_x <= -width())
		_sky_x = width();

	_sky2_x -= 2;
	if (_sky2_x <= -width())
		_sky2_x = width();

	_moon_x -= 1;
		if (_moon_x <= -width())
			_moon_x = width();

	_galaxy_x -= 2;
		if (_galaxy_x <= -width())
			_galaxy_x = width();

	_planet_x -= 3;
		if (_planet_x <= -width())
			_planet_x = width();

	_fog_x -= 4;
		if (_fog_x <= -width())
			_fog_x = width();

	_fog2_x -= 2;
		if (_fog2_x <= -width())
			_fog2_x = width();

	_mars_x -= 2;
		if (_mars_x <= -width())
			_mars_x = width();

	_mars2_x -= 2;
		if (_mars2_x <= -width())
			_mars2_x = width();

	_earth_x -= 2;
		if (_earth_x <= -width())
			_earth_x = width();

	_earth2_x -= 2;
		if (_earth2_x <= -width())
			_earth2_x = width();

	_caaat1_x -= 2;
		if (_caaat1_x <= -width())
			_caaat1_x = width();

	_caaat2_x -= 3;
		if (_caaat2_x <= -width())
			_caaat2_x = width();

	_caaat3_x -= 4;
		if (_caaat3_x <= -width())
			_caaat3_x = width();

	_caaat4_x -= 5;
		if (_caaat4_x <= -width())
			_caaat4_x = width();

	_cloud_x -= 6;
		if (_cloud_x <= -width())
			_cloud_x = width();

	_cloud2_x -= 5;
		if (_cloud2_x <= -width())
			_cloud2_x = width();

	_rainbow_x -= 4;
		if (_rainbow_x <= -width())
			_rainbow_x = width();

	_rainbow2_x -= 4;
		if (_rainbow2_x <= -width())
			_rainbow2_x = width();

	_cat1_x += 5;
		if (_cat1_x >= width())
			_cat1_x = 0-width()/4;

	_cat2_x += 6;
		if (_cat2_x >= width())
			_cat2_x = 0-width()/4;

	_nyan_cat_x += 2;
		if (_nyan_cat_x >= width())
			_nyan_cat_x = 0-width()/4;
}

void ExampleWindow::handle_keys(const Uint8 *keys)
{
	if (keys[SDL_SCANCODE_DOWN] && _nyan_cat_y < height()-_nyan_cat_h)
		_nyan_cat_y += 6;

	if (keys[SDL_SCANCODE_UP] && _nyan_cat_y > 0)
		_nyan_cat_y -= 6;

	if (keys[SDL_SCANCODE_RIGHT] && _nyan_cat_x < width()-_nyan_cat_w)
			_nyan_cat_x += 6;

	if (keys[SDL_SCANCODE_LEFT] && _nyan_cat_x > 0)
			_nyan_cat_x -= 6;
}
