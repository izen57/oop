#pragma once
#include <cstdio>

class ISet
{
	public:
		virtual ~ISet() {};
		virtual void clear() = 0;
		virtual bool is_empty() const = 0;
		virtual size_t size() const = 0;
};