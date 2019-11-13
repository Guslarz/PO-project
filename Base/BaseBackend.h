#pragma once

#include "BaseTool.h"

#include <string>


class BaseBackend
{
public:
	BaseBackend(BaseTool *const);
	virtual ~BaseBackend();

	virtual void bind(const std::string&, void(), const std::string&) = 0;
	virtual void start() = 0;

protected:
	BaseTool *const tool;
};

