#pragma once
#include <rpcndr.h>
#include "../math/Vector.hpp"

enum dlight_flags
{
	dlight_no_world_illumination = 0x1,
	dlight_no_model_illumination = 0x2,
	dlight_add_displacement_alpha = 0x4,
	dlight_subtract_displacement_alpha = 0x8,
	dlight_displacement_mask = (dlight_add_displacement_alpha | dlight_subtract_displacement_alpha),
};

struct ColorRGBExp32
{
    byte r, g, b;
	signed char exponent;
};

struct dlight_t
{
	int flags;
	Vector origin;
	float radius;
	ColorRGBExp32 color;
	float die_time;
	float decay;
	float min_light;
	int	key;
	int	style;
	Vector direction;
	float inner_angle;
	float outer_angle;
};