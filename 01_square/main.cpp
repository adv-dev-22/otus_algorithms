#include <iostream>

int main(int argc, char * args [])
{
    const int n = 25;

    for (int x = 0; x < n; ++x) {
        for (int y = 0; y < n; ++y)
        {
            if (x == y)
                std::cout << "# ";
            else
                std::cout << ". ";
        }
        std::cout << std::endl;
    }

    return 0;
}


//
