#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> a;
    a.assign(1024,0);
    int nb=a.size();
    int size=a.capacity();
    std::cout << "value of a.0: " << a[0] << '\n';

    for(int i =0; i <=1024; i++)
    {a[i] = i;};

    std::cout << "value of a.1024: " << a[1024] << '\n';



    a.push_back(4);
    std::cout << "value of a.1024: " << a[1024] << '\n';

    a.push_back(0);
    std::cout << "Size of a: " << nb << '\n';
    std::cout << "Size memoire: " << size << '\n';


    return 0;
}
