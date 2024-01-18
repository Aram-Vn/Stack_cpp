#ifndef STACK_H
#define STACK_H

#include <Vec_declaration.h>

namespace my {
    template <typename T>
    class Stack
    {
    public:
        using value_type = T;
        using reference = T&;
        using const_reference = const T&;

    public:
        ~Stack() = default;            //
        Stack();                       //
        Stack(Vec<T>& vec);            //
        Stack(const Stack& other);     //
        Stack(Stack&& other) noexcept; //

        Stack& operator=(const Stack& other); //
        Stack& operator=(Stack&& other);      //

    public:
        const_reference top() const; //
        bool empty() const;          //
        size_t size() const;         //

        void push(const_reference val); //
        void pop();                     //
        void swap(Stack& other);        //

    private:
        Vec<value_type> m_buffer;
    };
} // namespace my

#include "Stack_impl.hpp"

#endif // STACK_H