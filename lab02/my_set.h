#pragma once

#include <cstring>
#include "volume.h"
#include "iset.h"
#include "my_set_iterator.h"
#include "my_exceptions.h"
#include "memory"

template<typename Ty> class my_set: ISet
{
	std::shared_ptr<volume<Ty>> _container; // указатель на volume
	bool binary_search(const Ty &elem, size_t &pos) const;

	public:
		my_set():
			_container(new volume<Ty>()) {};

		explicit my_set(const my_set<Ty> &other):
			_container(new volume<Ty>(*other._container)) {}; // конструктор копирования

		my_set(my_set<Ty> &&other); // конструктор перемещения
		my_set(std::initializer_list<Ty> list);
		my_set(const Ty &elem);

		const my_set_iterator<Ty> begin() const;
		const my_set_iterator<Ty> end() const;

		bool find(const Ty &elem) const;
		void add(const Ty &elem);
		void erase(const Ty &elem);

		my_set<Ty>& operator = (const my_set<Ty> &other);
		my_set<Ty>& operator = (my_set<Ty> &&other);

		my_set<Ty> operator + (const my_set<Ty> &term) const;
		my_set<Ty>& operator += (const my_set<Ty> &term);
		my_set<Ty> set_union(const my_set<Ty> &term) const;
		my_set<Ty>& set_union_eq(const my_set<Ty> &term);

		my_set<Ty> operator * (const my_set<Ty> &multiplicand) const;
		my_set<Ty>& operator *= (const my_set<Ty> &multiplicand);
		my_set<Ty> set_intersection(const my_set<Ty> &multiplicand) const;
		my_set<Ty>& set_intersection_eq(const my_set<Ty> &multiplicand);

		my_set<Ty> operator / (const my_set<Ty> &subtrahend) const;
		my_set<Ty>& operator /= (const my_set<Ty> &subtrahend);
		my_set<Ty> set_complement(const my_set<Ty> &subtrahend) const;
		my_set<Ty>& set_complement_eq(const my_set<Ty> &subtrahend);

		my_set<Ty> operator - (const my_set<Ty> &subtrahend) const;
		my_set<Ty>& operator -= (const my_set<Ty> &subtrahend);
		my_set<Ty> sym_diff(const my_set<Ty> &subtrahend) const;
		my_set<Ty>& sym_diff_eq(const my_set<Ty> &subtrahend);

		size_t size() const;
		void clear();
		bool is_empty() const;
};

#include "my_set.hpp"