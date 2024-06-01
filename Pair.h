// Copyright (c) Anas Abu Farraj 2024.

#ifndef HELLO_CPP_PAIR_H
#define HELLO_CPP_PAIR_H

template<typename K, typename V>
class Pair {
public:
    Pair(K key, V value);

private:
    K key;
    V value;
};

template<typename K, typename V>
Pair<K, V>::Pair(K key, V value):key(key), value(value) {}

#endif //HELLO_CPP_PAIR_H
