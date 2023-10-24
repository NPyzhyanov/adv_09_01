#include <iostream>
#include <string>
#include <vector>
#include <utility>

#include "move_vectors.h"
#include "print_vector.h"

int main()
{
    std::vector<std::string> one = { "test_string1", "test_string2" };
    std::vector<std::string> two;
    
    std::cout << "Before moving\n";
    std::cout << "Vector #1 (located at " << one.data() << "): ";
    print_vector(one);
    std::cout << "Vector #2 (located at " << two.data() << "): ";
    print_vector(two);
    
    move_vectors(one, two);
    
    std::cout << "\nAfter moving\n";
    std::cout << "Vector #1 (located at " << one.data() << "): ";
    print_vector(one);
    std::cout << "Vector #2 (located at " << two.data() << "): ";
    print_vector(two);
    
    return 0;
}
