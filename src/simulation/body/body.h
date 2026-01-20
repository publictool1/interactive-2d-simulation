#pragma once
#include "../core/vec2/vec2.h"

struct Body
{
	Vec2 position;
	Vec2 prevPosition;
	float mass = 1.0f;
	float radius = 1.0f;

	Body() : position(), prevPosition(), mass(1.0f), radius(1.0f) {};

	Body(const Vec2& pos, float m = 1.0f, float r = 1.0f) :
		position(pos), prevPosition(pos), mass(m), radius(r) {}
};