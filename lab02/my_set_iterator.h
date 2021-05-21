#pragma once
#include "volume.h"

template<typename Ty> class my_set_iterator
{
	size_t _pos;
	std::weak_ptr<volume<Ty>> _container;

	public:
		my_set_iterator(std::shared_ptr<volume<Ty>> container, const size_t pos);

		Ty& operator * () const;
		Ty* operator -> () const;
		my_set_iterator<Ty>& operator ++ ();
		my_set_iterator<Ty>& operator -- ();
		my_set_iterator<Ty> operator ++ (int);
		my_set_iterator<Ty> operator -- (int);
		bool operator != (const my_set_iterator<Ty> &other) const;
		bool operator == (const my_set_iterator<Ty> &other) const;
		operator bool () const noexcept;
};

#include "my_set_iterator.hpp"