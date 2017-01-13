#include <vector>

template<class T>
class Almacen
{
    
public:
    Almacen();
    Almacen(int capacity);
    ~Almacen();
    void add(T value);
    void borrar(int position);
    bool empty();
    int getCapacity();
    int size();

    int capacity;
    std::vector<T> data;
};

template <typename T>
Almacen<T>::Almacen()
{
    std::vector<T> data(capacity);
}

template <typename T>
Almacen<T>::Almacen(int n)
{
    std::vector<T> data(10);
    capacity = 10;
}

template <typename T>
bool Almacen<T>::empty()
{
    if(data->size() <= 0)
        return true;
    else
        return false;
}

template <typename T>
int Almacen<T>::getCapacity()
{
    return capacity;
}

template <typename T>
int Almacen<T>::size()
{
    return data->size();
}


template <typename T>
void Almacen<T>::add(T value)
{
    data->push_back(value);
}

template <typename T>
void Almacen<T>::borrar(int position)
{
    data->erase(data->begin()+position);
}

