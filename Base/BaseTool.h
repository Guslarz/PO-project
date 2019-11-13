#pragma once

#include <unordered_map>
#include <string>


class BaseTool
{
public:
	virtual ~BaseTool();

	virtual std::string getEntry(const std::string&);
	virtual void setEntry(const std::string&, const std::string&);

private:
	std::unordered_map<std::string, std::string> entries;
};

