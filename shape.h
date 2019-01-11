#pragma once
#include "assignmentapp.h"
#include "config.h"
#include "Matrix.h"
#include "Vector2D.h"

class shape {
protected: Vector2D possition; Matrix rotation;
		 char color[3];
public: virtual void uppdate()= 0;
		virtual void render() = 0;
};