#ifndef PRINT_VECTOR_H
#define PRINT_VECTOR_H

template <class T>
void print_vector(std::vector<T> vector_to_print)
{
    if (vector_to_print.data() == nullptr)
    {
        std::cout << std::endl;
        return;
    }
    
    for (auto it = vector_to_print.begin(); it != vector_to_print.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

#endif // PRINT_VECTOR_H
