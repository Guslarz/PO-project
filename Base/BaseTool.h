#pragma once

#include <unordered_map>
#include <string>


class BaseTool
{
public:
	BaseTool();
	virtual ~BaseTool();

	std::string getEntry(const std::string&);
	void setEntry(const std::string&, const std::string&);

private:
	std::unordered_map<std::string, std::string> entries;
};

