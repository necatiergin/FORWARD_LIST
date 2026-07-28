#include <forward_list>
#include <string>
#include <iostream>

template <typename T>
void print(const std::forward_list<T>& flist)
{
	for (const auto& elem : flist)
		std::cout << elem << ' ';
	std::cout << '\n';
}

int main()
{
	std::forward_list<std::string> mylist{ "eda", "can", "gul", "efe", "tan", "naz" ,"ela" };

	while (!mylist.empty()) {
		print(mylist);
		mylist.pop_front();
	}
}
