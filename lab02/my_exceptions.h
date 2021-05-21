#pragma once
#include <iostream>
#include <string>

class my_exceptions: std::exception
{
	protected:
		std::string error_info;
	public:
		my_exceptions(int error_line, std::string error_filename, std::string error_text);
		virtual const char* what() const noexcept;
};

class inserting_an_existent_element: my_exceptions
{
	public:
		inserting_an_existent_element(int line, std::string filename, std::string text = "Попытка вставить существующий элемент"):
			my_exceptions(line, filename, text) {};
};

class removing_a_nonexistent_element: my_exceptions
{
	public:
		removing_a_nonexistent_element(int line, std::string filename, std::string text = "Попытка удалить несуществующий элемент"):
			my_exceptions(line, filename, text) {};
};

class wrong_index: my_exceptions
{
	public:
		wrong_index(int line, std::string filename, std::string text = "Неправильный индекс"):
				my_exceptions(line, filename, text) {};
};

class wrong_memory: my_exceptions
{
	public:
		wrong_memory(int line, std::string filename, std::string text = "Ошибка памяти"):
				my_exceptions(line, filename, text) {};
};