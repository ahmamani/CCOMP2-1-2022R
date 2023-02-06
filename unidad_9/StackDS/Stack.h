#ifndef __STACK_H__
#define __STACK_H__

#include <iostream>
#include <ostream>
#include <vector>

template <typename T>
class Stack;

template <typename T>
std::ostream& operator<<(std::ostream&, const Stack <T>&);

// template <typename T>
// Stack<T> operator+(const Stack<T>&o, const Stack<T>&p);

template <typename T>
class Stack {
        std::vector<T> items;
    public:
        //friend Stack<T> operator+<>(const Stack<T>&o, const Stack<T>&p);
        friend std::ostream& operator<< <>(std::ostream& output, const Stack<T>&o);
        bool empty() const {
            return items.empty();
        }
        void push(const T &item) {
            items.push_back(item);
        }
        T pop() {
            T last = items.back();
            items.pop_back();
            return last;
        }
        Stack<T> operator+(const Stack<T>&o){
            Stack<T> tmp;
            for (int i = 0; i<this->items.size();i++)
                tmp.push(this->items[i]);
            for (int i = 0; i<o.items.size();i++)
                tmp.push(o.items[i]);
            return tmp;
        } 
};

template <typename T>
std::ostream& operator<<(std::ostream& output, const Stack<T>&o){
    output << "[ ";
    for (auto ptr = o.items.begin(); ptr != o.items.end(); ++ptr){
        output<<*ptr<<" ";}
    output << " ]";
    return output;
}

// template<typename T>
// Stack<T> operator+(const Stack<T> &o ;const Stack<T>&p){
//     Stack<T> res;
//     for (int i = 0; i<o.items.size();i++){
//         res.push(o.items[i]);}
//     for (int i = 0; i<p.items.size();i++){
//         res.push(p.items[i]);}
//     return res;
// }
                                                                                                                                                                                                                                                                                                            
#endif