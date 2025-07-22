#ifndef ARRAY_TPP
#define ARRAY_TPP




template<typename T>
Array<T>::Array():data(0),_size(0){}

template<typename T>
Array<T>::Array(unsigned int n)
{
data = new T[n]();_size =n ;}

template<typename T>

Array<T>::Array(const Array &o)
    :data(new T[o.size()]),_size(o.size())
{
    *this = o; 
}
template<typename T>
Array<T> &  Array <T>::operator=(const Array<T> &o)
{;
    if(this != &o)
    {
        T *tmp = new T[o.size()];
        for(std::size_t  i=0; i < o.size() ; i++) tmp[i] = o.data[i]; 
        delete [] data;
        this->data = tmp;
        this->_size = o.size();
    }
        return(*this);
}

template<typename T>
T & Array<T>::operator[](std::size_t i) 
{
       if(i >= _size || i < 0)
        throw  std::logic_error("invalid Index");
    return(data[i]);
}

template<typename T>
const T & Array<T>::operator[](std::size_t i) const
{
       if(i >= this->_size || i < 0)
        throw  std::logic_error("invalid Index");
    return(data[i]); 

}
template<typename T>

Array<T>::~Array()
{
    if(*data)
        delete [] this->data;
}
template<typename T>
std::size_t Array<T>::size() const
{return _size;} 
#endif