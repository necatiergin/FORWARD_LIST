#include <forward_list>
#include <string>
#include <iostream>
#include <algorithm>

int main()
{
	std::forward_list<std::string> mylist{ "eda", "can", "gul", "efe", "tan", "naz" ,"ela" };
	std::cout << "size = " << distance(mylist.begin(), mylist.end()) << '\n';
	copy(mylist.begin(), mylist.end(), std::ostream_iterator<std::string>{std::cout, " "});
	std::cout.put('\n');
	mylist.insert_after(mylist.begin(), "MERT");
	std::cout << "size = " << distance(mylist.begin(), mylist.end()) << '\n';
	copy(mylist.begin(), mylist.end(), std::ostream_iterator<std::string>{std::cout, " "});
	mylist.erase_after(next(mylist.begin()));
	std::cout << "size = " << distance(mylist.begin(), mylist.end()) << '\n';
	copy(mylist.begin(), mylist.end(), std::ostream_iterator<std::string>{std::cout, " "});
}
