#include <vector>

template<class T>
class Almacen
{
public:
    Almacen(int capacity)
    {
        data = new std::vector<T>();
        data->reserve(capacity);
    }
    Almacen()
    {
        data = new std::vector<T>;
        capacity = 10;
        data->reserve(capacity);
    }
    int getCapacity()
    {
        return data->capacity();
    }
    void addBack(T value)
    {
        data->push_back(value);
    }
    int getSize()
    {
        return data->size();
    }
private:
    int capacity;
    std::vector<T>* data;
};