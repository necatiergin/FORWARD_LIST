#include <forward_list>
#include <string>
#include <iostream>

int main()
{
	std::forward_list<std::string> mylist{ "eda", "can", "gul", "efe", "tan", "naz" ,"ela" };

	for (const auto& s : mylist)
		std::cout << s << ' ';

	std::cout << '\n';
	std::string name;
	std::cout << "enter the name to remove: ";
	std::cin >> name;

	auto iter = mylist.cbefore_begin();

	while (next(iter) != mylist.end()) {
		if (*next(iter) == name) {
			mylist.erase_after(iter);
			break;
		}
		++iter;
	}

	for (const auto& s : mylist)
		std::cout << s << ' ';
}
