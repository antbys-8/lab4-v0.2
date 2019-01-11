//------------------------------------------------------------------------------
// assignmentapp.cc
// (C) 2015-2017 Individual contributors, see AUTHORS file
//------------------------------------------------------------------------------
#include "config.h"
#include "assignmentapp.h"
#include "Test.h"
#include "shape.h"
#include "Square.h"

namespace Assignment
{

//------------------------------------------------------------------------------
/**
*/
AssignmentApp::AssignmentApp()
{
	// empty
}

//------------------------------------------------------------------------------
/**
*/
AssignmentApp::~AssignmentApp()
{
	// empty
}

//------------------------------------------------------------------------------
/**
*/
void 
AssignmentApp::Setup()
{
	// create your own objects 

}

//------------------------------------------------------------------------------
/**
*/
void
AssignmentApp::Update()
{
	// testing rendering in another class
	square t(0.5f);
	t.render();


	// demo line drawing code
	
}

} // namespace Assignment
