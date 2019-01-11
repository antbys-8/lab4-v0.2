#pragma once
#include "shape.h"
#include "config.h"
#include "assignmentapp.h"


class square : public shape 
{
private: float dimention;
public:
	square(float dimention);
	void uppdate();
	void render();
	Assignment::AssignmentApp::LineData line;

};