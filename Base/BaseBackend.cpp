#include "BaseBackend.h"



BaseBackend::BaseBackend(BaseTool *tool) :
	tool(tool)
{
}


BaseBackend::~BaseBackend()
{
	delete this->tool;
}