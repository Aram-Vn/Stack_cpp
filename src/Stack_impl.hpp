#ifndef STACK_IMPL_HPP
#define STACK_IMPL_HPP

#include "Stack.h"
#include <utility>

template <typename T>
my::Stack<T>::Stack()
{
}

template <typename T>
my::Stack<T>::Stack(Vec<T>& vec)
{
    m_buffer = std::move(vec);
}

template <typename T>
my::Stack<T>::Stack(const Stack& other)
{
    this->m_buffer = other.m_buffer;
}

template <typename T>
my::Stack<T>::Stack(Stack&& other) noexcept
{
    this->m_buffer = std::move(other.m_buffer);
}

template <typename T>
my::Stack<T>& my::Stack<T>::operator=(const Stack& other)
{
    if(this != &other)
    {
        this->m_buffer = other.m_buffer;
    }

    return *this;
}

template <typename T>
my::Stack<T>& my::Stack<T>::operator=(Stack&& other)
{
    if (this != &other)
    {
        this->m_buffer = std::move(other.m_buffer);
    }

    return *this;
}

template <typename T>
const T& my::Stack<T>::top() const
{
    return m_buffer[m_buffer.Size() - 1];
}

template <typename T>
bool my::Stack<T>::empty() const
{
    return m_buffer.Empty();
}

template <typename T>
size_t my::Stack<T>::size() const
{
    return m_buffer.Size();
}

template <typename T>
void my::Stack<T>::push(const_reference val)
{
    m_buffer.push_back(val);
}

template <typename T>
void my::Stack<T>::pop()
{
    m_buffer.pop_back();
}

template <typename T>
void my::Stack<T>::swap(Stack& other)
{
    m_buffer.swap(other.m_buffer);
}

#endif // STACK_IMPL_HPP