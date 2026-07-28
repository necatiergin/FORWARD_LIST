#include <forward_list>
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
    std::forward_list flist{ 1, 3, 2, 6, 8, 5, 7, 20, 16, 9, 13, 18 };
    print(flist);
    auto prev = flist.before_begin();
    auto curr = flist.begin();
    while (curr != flist.end()) {
        if (*curr % 2 == 0) {
            curr = flist.erase_after(prev);
        }
        else {
            prev = curr;
            ++curr;
        }
    }
    print(flist);
}



