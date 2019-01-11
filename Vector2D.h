#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vector2D
{

private:
	float x = 0.0, y = 0.0, z = 1.0;

public:
	float vec[3];
	void setX(float x);
	void setY(float x);
	void set(float x, float y);
	Vector2D(float x, float y) : vec{ x, y, 1 } {}
	Vector2D();
	Vector2D(const Vector2D &r);
	void print();
	void print(const Vector2D &r);
	void print(float);
	Vector2D operator+(const Vector2D &r);
	Vector2D operator-(const Vector2D &r);
	float operator*(const Vector2D &r);
	Vector2D operator=(const Vector2D &r);
	bool operator==(const Vector2D &r);
	bool operator!=(const Vector2D &r);
	float dot(const Vector2D &r);
	Vector2D crossZ(const Vector2D &r);
	float dotdivition(const Vector2D &r);
	Vector2D normalisation();
	Vector2D projection(const Vector2D &r);
	float length();
	float getX();
	float getY();
};