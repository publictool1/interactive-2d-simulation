#pragma once


struct Vec2 {
	float x;
	float y;

	Vec2() : x(0), y(0) {};
	Vec2(float x_, float y_) : x(x_), y(y_) {};


	Vec2 operator+(const Vec2& point) const {
		return { x + point.x, y + point.y };
	}

	Vec2 operator-(const Vec2& point) const {
		return { x - point.x, y - point.y };
	}

	Vec2 operator+=(const Vec2& point) {
		x += point.x;
		y += point.y;
		return *this;
	};

};

inline Vec2 operator*(const Vec2& v, float scalar) {
	return Vec2(v.x * scalar, v.y * scalar);
}
