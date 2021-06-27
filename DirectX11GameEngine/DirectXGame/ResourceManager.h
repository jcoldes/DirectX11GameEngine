#pragma once
#include <unordered_map>
#include <string>

#include "Prerequisites.h"
#include "Resource.h"

class ResourceManager
{
public:
	ResourceManager();
	~ResourceManager();

	ResourcePtr createResourceFromFile(const wchar_t* file_path);
private:
	std::unordered_map<std::wstring, ResourcePtr> m_map_resources;
};

