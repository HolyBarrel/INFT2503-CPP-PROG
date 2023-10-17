#ifndef PAIR_H
#define PAIR_H

template <class T1, class T2>
class Pair {
  public:
    T1 first;
    T2 second;
    Pair(T1 first_, T2 second_);
    Pair<T1,T2> operator+(const Pair &other) const;
    bool operator>(const Pair &other) const;
    auto get_sum() const;
};

template <class T1, class T2>
Pair<T1,T2>::Pair(T1 first_, T2 second_) : first(first_), second(second_) {}

template <class T1, class T2>
Pair<T1,T2> Pair<T1,T2>::operator+(const Pair &other) const
{
    T1 sum1 = this->first + other.first;
    T2 sum2 = this->second + other.second;
    return Pair(sum1, sum2);
}

template <class T1, class T2>
bool Pair<T1,T2>::operator>(const Pair &other) const
{
    return this->get_sum() > other.get_sum();
}

template <class T1, class T2>
auto Pair<T1,T2>::get_sum() const
{
    return this->first + this->second;
}

#endif