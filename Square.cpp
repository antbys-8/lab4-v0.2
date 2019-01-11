#include "Square.h"
#include "config.h"
#include "assignmentapp.h"

square::square(float dimention)
{
	possition.set(0.0, 0.0);
	this->dimention = dimention;
}

void square::uppdate() 
{

}
void square::render()
{
	Assignment::AssignmentApp::LineData line;
	line.x1 = -0.3f;
	line.y1 = -0.3f;
	line.x2 = 0.0f;
	line.y2 = 0.5f;
	line.c1.r = 1.0f;
	Assignment::AssignmentApp::DrawLine(line);
	line.x1 = 0.0f;
	line.y1 = 0.5f;
	line.x2 = 0.3f;
	line.y2 = -0.3f;
	Assignment::AssignmentApp::DrawLine(line);
	line.x1 = 0.3f;
	line.y1 = -0.3f;
	line.x2 = -0.3f;
	line.y2 = -0.3f;
	Assignment::AssignmentApp::DrawLine(line);
}