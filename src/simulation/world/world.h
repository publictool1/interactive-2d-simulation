#pragma once
#include <vector>
#include "body.h"
#include "vec2.h"

struct World {
	std::vector<Body> items;
	Vec2 gravity = {0, -10.0f};


	void update(float dt) {
		for (Body& item : items) {
			Vec2 pos = item.position - item.prevPosition;
			item.prevPosition = item.position;
			item.position += pos + gravity * dt * dt;
		}
	}
	
};