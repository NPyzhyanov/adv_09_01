#ifndef MOVE_VECTORS_H
#define MOVE_VECTORS_H

template <class T>
void move_vectors(std::vector<T> &source, std::vector<T> &destination)
{
    if (source.data() == nullptr)
    {
        throw std::invalid_argument("Nothing to move\n");
    }
    if (source.data() == destination.data())
    {
        return;
    }
    
    destination = std::move(source);
}

#endif // MOVE_VECTORS_H
