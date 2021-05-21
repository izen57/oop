template<typename Ty> volume<Ty>::volume()
{
	_array.reset(new Ty[10]);
	_max_count = 10;
}

template<typename Ty> volume<Ty>::volume(const volume<Ty> &other)
{
	_max_count = other._max_count;
	_size = other._size;
	_array.reset(new Ty[10]);

	for (size_t i = 0; i < _size; ++i)
		_array[i] = other._array[i];
}

template<typename Ty> volume<Ty>::volume(volume<Ty> &&other)
{
	_max_count = other._max_count;
	_size = other._size;
	_array = other._array;
	other._array = nullptr;
	other._size = 0;
	other._max_count = 0;
}

template<typename Ty> volume<Ty>::volume(std::initializer_list<Ty> list)
{
	_max_count = list.size();
	_size = list.size();
	_array.reset(new Ty[_size]);
	int i = 0;
	for (auto it = list.begin(); it != list.end(); ++it)
		_array[i++] = *it;
}

template<typename Ty> size_t volume<Ty>::size() const
{
	return _size;
}

template<typename Ty> void volume<Ty>::insert(const size_t index, const Ty &element)
{
	if (index > _size)
		throw wrong_index(__LINE__, __FILE__);

	if (_size + 1 > _max_count)
	{
		std::shared_ptr<Ty []> new_array;
		new_array.reset(new Ty[_size * 2]);

		memcpy(new_array.get(), _array.get(), index * sizeof(Ty));
		new_array[index] = element;
		memcpy(new_array.get() + index + 1, _array.get() + index, (_size - index) * sizeof(Ty));

		_max_count = _size++ * 2;

		_array = new_array;
	}
	else
	{
		for (size_t i = _size - 1; i != index - 1; --i)
			_array[i + 1] = _array[i];
		_array[index] = element;
		_size++;
	}
}

template<typename Ty> void volume<Ty>::push_back(const Ty &element)
{
	insert(_size, element);
}

template<typename Ty> void volume<Ty>::push_front(const Ty &element)
{
	insert(0, element);
}

template<typename Ty> void volume<Ty>::erase(const size_t index)
{
	memmove(_array.get() + index, _array.get() + index + 1, (_size-- - index - 1) * sizeof(Ty));
}

template<typename Ty> Ty& volume<Ty>::operator [] (const size_t index) const // возвращение ссылки на объект Ty
{
	return _array[index];
}

template<typename Ty> volume<Ty>& volume<Ty>::operator = (const volume<Ty> &other)
{
	if (this == &other)
		return *this;

	_max_count = other._max_count;
	_size = other._size;
	_array.reset(new Ty[10]);

	for (size_t i = 0; i < _size; ++i)
		_array[i] = other._array[i];
}

template<typename Ty> volume<Ty>& volume<Ty>::operator = (volume<Ty> &&other)
{
	if (this == &other)
		return *this;

	_max_count = other._max_count;
	_size = other._size;
	_array = other._array;
	other._array = nullptr;
	other._size = 0;
	other._max_count = 0;
}