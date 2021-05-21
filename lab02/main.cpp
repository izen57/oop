#include <iostream>
#include <cstdio>
#include "my_set.h"

int main(void)
{
	my_set<int> A, B;
	A.add(0);
	A.add(1);
	A.add(2);
	A.add(4);
	// A.add(4);
	A.add(5);

	B.add(2);
	B.add(3);
	B.add(4);
	B.add(7);
	B.add(10);

	std::cout << "Test A:" << std::endl;
	for (auto it = A.begin(); it != A.end(); ++it)
		if (it)
			std::cout << *it << ' ';

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Test B:" << std::endl;
	for (auto it = B.begin(); it != B.end(); ++it)
		std::cout << *it << ' ';

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Test A *= B:";
	A *= B;
	std::cout << std::endl;
	for (auto it = A.begin(); it != A.end(); ++it)
		std::cout << *it << ' ';

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Test d:" << std::endl;
	my_set<int> d{2, 1, 5};
	for (auto it = d.begin(); it != d.end(); ++it)
		std::cout << *it << ' ';

	std::cout << std::endl;

	d += {9, 0, 1};
	for (auto it = d.begin(); it != d.end(); ++it)
		std::cout << *it << ' ';

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Test e:" << std::endl;
	my_set<int> e(2);
	for (auto it = e.begin(); it != e.end(); ++it)
		std::cout << *it << ' ';

	return 0;
}