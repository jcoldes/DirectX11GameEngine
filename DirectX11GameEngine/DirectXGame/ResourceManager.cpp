#if __cplusplus <= 201402L
#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING
#include <experimental/filesystem>
#endif

#if __cplusplus >= 201703L
#include <filesystem>
#endif

#include "ResourceManager.h"


ResourcePtr ResourceManager::createResourceFromFile(const wchar_t* file_path)
{
#if (_MSC_VER >= 1900 && _MSC_VER <= 1916) || (_MSC_VER >= 1920 && __cplusplus <= 201402L)
    std::wstring full_path = std::experimental::filesystem::absolute(file_path);
#endif

#if _MSC_VER >= 1920 && __cplusplus > 201402L
    std::wstring full_path = std::filesystem::absolute(file_path);
#endif

    return ResourcePtr();
}
