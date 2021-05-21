template<typename Ty> my_set_iterator<Ty>::my_set_iterator(std::shared_ptr<volume<Ty>> container, const size_t pos)
{
	_container = container;
	_pos = pos;
}

template<typename Ty> Ty& my_set_iterator<Ty>::operator * () const
{
		if (!_container.expired())
			return (*_container.lock())[_pos];
		else
			throw wrong_memory(__LINE__, __FILE__);
}

template<typename Ty> my_set_iterator<Ty>& my_set_iterator<Ty>::operator ++ ()
{
	++_pos;
	return *this;
}

template<typename Ty> my_set_iterator<Ty>& my_set_iterator<Ty>::operator -- ()
{
	--_pos;
	return *this;
}

template<typename Ty> my_set_iterator<Ty> my_set_iterator<Ty>::operator ++ (int)
{
	my_set_iterator<Ty> prev = ++*this;
	return prev;
}

template<typename Ty> my_set_iterator<Ty> my_set_iterator<Ty>::operator -- (int)
{
	my_set_iterator<Ty> prev = --*this;
	return prev;
}

template<typename Ty> bool my_set_iterator<Ty>::operator != (const my_set_iterator<Ty> &other) const
{
	return _pos != other._pos;
}

template<typename Ty> bool my_set_iterator<Ty>::operator == (const my_set_iterator<Ty> &other) const
{
	return _pos == other._pos;
}

template<typename Ty> Ty* my_set_iterator<Ty>::operator -> () const
{
	if (!_container.expired())
		return &_container.lock()[_pos];
	throw wrong_memory(__LINE__, __FILE__);
}

template<typename Ty> my_set_iterator<Ty>::operator bool () const noexcept
{
	return !_container.expired() && _pos < _container.lock()->size();
}