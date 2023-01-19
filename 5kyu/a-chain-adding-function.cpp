#include <iostream>

template <typename T>
struct adder
{
    T sum;
  
    explicit adder(T t): sum(t) {}
  
    template <typename U>
    auto operator()(U u) -> adder<decltype(sum + u)>
    {
        return adder<decltype(sum + u)>(sum + u);
    }
  
    operator T() const {return sum;}
  
    friend std::ostream& operator<<(std::ostream& output, const adder<T>& obj)
    { 
      output << obj.sum;
      return output;            
    }
};

template <typename T>
adder<T> add(T t)
{
    return adder<T>(t);
}