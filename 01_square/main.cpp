#include <iostream>
#include <cmath>

int main(int argc, char * args [])
{
    const int n = 25;

    for (int x = 0; x < n; ++x) {
        for (int y = 0; y < n; ++y)
        {
            if ( fabs(fabs(y - 12) + fabs(x - 12)) <= 9)
              //std::cout << x << " " << y << std::endl;
                std::cout << "# ";
            else
                std::cout << ". ";
        }
        std::cout << std::endl;
    }

    return 0;
}


//
