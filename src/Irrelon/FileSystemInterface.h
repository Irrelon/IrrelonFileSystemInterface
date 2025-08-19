#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace Irrelon {
	class FileSystemInterface {
	public:
		virtual void setup(std::string rootPath) = 0;
		virtual bool exists(const char* path) = 0;
		virtual bool write(const char* path, const std::vector<uint8_t>& writeData) = 0;
		virtual bool read(const char* path, std::vector<uint8_t>& readData) = 0;
		virtual ~FileSystemInterface() = default;
	};
}