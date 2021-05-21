#pragma once

#include <cstdio>
#include <cstring>
#include <iostream>
#include <memory>
#include "my_exceptions.h"

template <typename Ty> class volume
{
	std::shared_ptr<Ty []> _array;
	size_t _size = 0;
	size_t _max_count = 0;

	public:
		volume();
		explicit volume(const volume<Ty> &other);
		explicit volume(volume<Ty> &&other);
		volume(std::initializer_list<Ty> list);

		size_t size() const;
		void insert(const size_t index, const Ty &element);
		void push_back(const Ty &element);
		void push_front(const Ty &element);
		void erase(const size_t index);

		Ty& operator [] (const size_t index) const; // возвращение ссылки на объект Ty
		volume<Ty>& operator = (const volume<Ty> &other);
		volume<Ty>& operator = (volume<Ty> &&other);
};

#include "volume.hpp"