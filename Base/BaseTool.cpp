#include "BaseTool.h"


using std::string;


BaseTool::BaseTool()
{
}


BaseTool::~BaseTool()
{
}


string BaseTool::getEntry(const string &key)
{
	return this->entries[key];
}


void BaseTool::setEntry(const string &key, const string &value)
{
	this->entries[key] = value;
}