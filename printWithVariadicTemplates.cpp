#include <iostream>

template <typename Arg, typename... Args>
void doPrint(std::ostream& out, Arg arg, Args... args)
{
    out << arg;
    using expander = int[];
    (void)expander{0, (void(out << ',' << args), 0)...};
}

int main()
{
    doPrint(std::cout, 34, 15);
}