#include <iostream>
#include <vector>
#include <mutex>
#include <thread>

std::mutex mtx;
std::vector<long long> store(100, -1);
long long factorial(int n)
{
    if (0 >= n)
        return 1;
    if (-1 != store[n])
        return store[n];
    return store[n] = n * factorial(n - 1);
}
int main()
{
    store[0] = 1;
    store[1] = 1;
    auto start = std::chrono::high_resolution_clock::now();
    int f = 5;
    std::cout << "factorial(" << f << ")=" << factorial(f) << std::endl;
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "elapsed time:" << elapsed.count() << "seconds" << std::endl;
    return 0;
}
