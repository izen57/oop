template<typename Ty> my_set<Ty>::my_set(my_set<Ty> &&other)
{
	_container = other._container;
	other._container.reset();
}

template<typename Ty> my_set<Ty>::my_set(const Ty &elem)
{
	_container.reset(new volume<Ty>());
	_container->push_back(elem);
}

template<typename Ty> my_set<Ty>::my_set(std::initializer_list<Ty> list)
{
	_container.reset(new volume<Ty>());
	for (auto it = list.begin(); it != list.end(); ++it)
		add(*it);
}

template<typename Ty> my_set<Ty>& my_set<Ty>::operator = (const my_set<Ty> &other)
{
	return _container.operator =(other._container);
}

template<typename Ty> my_set<Ty>& my_set<Ty>::operator = (my_set<Ty> &&other)
{
	return _container.operator =(other._container);
}

template<typename Ty> const my_set_iterator<Ty> my_set<Ty>::begin() const
{
	return my_set_iterator<Ty>(_container, 0);
}

template<typename Ty> const my_set_iterator<Ty> my_set<Ty>::end() const
{
	return my_set_iterator<Ty>(_container, size());
}

template<typename Ty> bool my_set<Ty>::binary_search(const Ty &elem, size_t &pos) const
{
	if (!size())
		return false;

	size_t a = 0, b = size() - 1, middle = 0;
	while (b >= a)
	{
		middle = (b - a) / 2 + a;
		if ((*_container)[middle] == elem)
		{
			pos = middle;
			return true;
		}
		else if ((*_container)[middle] < elem)
			a = ++middle;
		else
		{
			if (!middle)
				break;
			b = middle - 1;
		}
	}
	pos = middle;
	return false;
}

template<typename Ty> bool my_set<Ty>::find(const Ty &elem) const
{
	size_t pos = 0;
	return binary_search(elem, pos);
}

template<typename Ty> void my_set<Ty>::add(const Ty &elem)
{
	size_t pos = 0;
	bool is_exist = binary_search(elem, pos);

	if (is_exist == true)
		throw inserting_an_existent_element(__LINE__, __FILE__);

	_container->insert(pos, elem);
}

template<typename Ty> void my_set<Ty>::erase(const Ty &elem)
{
	size_t pos = 0;
	bool is_exist = binary_search(elem, pos);

	if (is_exist == false)
		throw removing_a_nonexistent_element(__LINE__, __FILE__);

	_container->erase(pos);
}

template<typename Ty> size_t my_set<Ty>::size() const
{
	return _container->size();
}

template<typename Ty> void my_set<Ty>::clear()
{
	if (is_empty() == true)
		std::cout << "Множество пусто" << std::endl;
	while (is_empty() == false)
		erase((*_container)[0]);
}

template<typename Ty> bool my_set<Ty>::is_empty() const
{
	return !_container->size()? true : false;
}

template<typename Ty> my_set<Ty> my_set<Ty>::operator + (const my_set<Ty> &term) const // объединение
{
	my_set<Ty> result;
	for (auto it = begin(); it != end(); ++it)
			result.add(*it);

	for (auto it = term.begin(); it != term.end(); ++it)
		if (find(*it) == false)
			result.add(*it);

	return result;
}

template<typename Ty> my_set<Ty>& my_set<Ty>::operator += (const my_set<Ty> &term)
{
	for (auto it = term.begin(); it != term.end(); ++it)
		if (find(*it) == false)
			add(*it);

	return *this;
}

template<typename Ty> my_set<Ty> my_set<Ty>::operator * (const my_set<Ty> &multiplicand) const // пересечение
{
	my_set<Ty> result;
	for (auto it = begin(); it != end(); ++it)
		if (multiplicand.find(*it) == true)
			result.add(*it);

	return result;
}

template<typename Ty> my_set<Ty>& my_set<Ty>::operator *= (const my_set<Ty> &multiplicand)
{
	for (int i = 0; i < _container->size(); ++i)
		if (multiplicand.find((*_container)[i]) == false)
			_container->erase(i--);

	return *this;
}

template<typename Ty> my_set<Ty> my_set<Ty>::operator / (const my_set<Ty> &subtrahend) const // разность
{
	my_set<Ty> result;
	for (auto it = begin(); it != end(); ++it)
		if (subtrahend.find(*it) == false)
			result.add(*it);

	return result;
}

template<typename Ty> my_set<Ty>& my_set<Ty>::operator /= (const my_set<Ty> &subtrahend)
{
	for (auto it = subtrahend.begin(); it != subtrahend.end(); ++it)
		if (find(*it) == false)
			erase(*it);

	return *this;
}

template<typename Ty> my_set<Ty> my_set<Ty>::operator - (const my_set<Ty> &subtrahend) const
{
	return (*this - subtrahend) + (subtrahend + *this);
}

template<typename Ty> my_set<Ty>& my_set<Ty>::operator -= (const my_set<Ty> &subtrahend)
{
	*this = (*this - subtrahend) + (subtrahend + *this);
	return *this;
}

template<typename Ty> my_set<Ty> my_set<Ty>::set_union(const my_set<Ty> &term) const
{
	return operator +(term);
}

template<typename Ty> my_set<Ty>& my_set<Ty>::set_union_eq(const my_set<Ty> &term)
{
	return operator +=(term);
}

template<typename Ty> my_set<Ty> my_set<Ty>::set_intersection(const my_set<Ty> &term) const
{
	return operator *(term);
}

template<typename Ty> my_set<Ty>& my_set<Ty>::set_intersection_eq(const my_set<Ty> &term)
{
	return operator *=(term);
}

template<typename Ty> my_set<Ty> my_set<Ty>::set_complement(const my_set<Ty> &term) const
{
	return operator /(term);
}

template<typename Ty> my_set<Ty>& my_set<Ty>::set_complement_eq(const my_set<Ty> &term)
{
	return operator /=(term);
}

template<typename Ty> my_set<Ty> my_set<Ty>::sym_diff(const my_set<Ty> &term) const
{
	return operator -(term);
}

template<typename Ty> my_set<Ty>& my_set<Ty>::sym_diff_eq(const my_set<Ty> &term)
{
	return operator -=(term);
}