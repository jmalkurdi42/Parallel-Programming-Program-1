#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) 
{
    int n = atoi(argv[1]); // # of elements
    int p = atoi(argv[2]); // # of cores

    // Number of iterations per core
    int q = n / p;
    
    // Compute the first and last index
    for (int i = 0; i < p; i++) 
    {
        int my_first_i = i * q;
        int my_last_i = (i < p - 1) ? (i + 1) * q - 1 : n - 1;

        // Print indices
        cout << "core " << i << ": my_first_i = "  << my_first_i << ", my_last_i = " << my_last_i << endl;
    }
    
    return 0;
}
