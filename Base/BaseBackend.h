#pragma once

#include "BaseTool.h"

#include <string>
#include <functional>


class BaseBackend
{
public:
	BaseBackend(BaseTool *const);
	virtual ~BaseBackend();

	virtual void bind(const std::string&, std::function<void()>, const std::string&) = 0;
	virtual void start() = 0;

protected:
	BaseTool *const tool;
};

