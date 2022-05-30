#ifndef _ITEMS_H_
#define _ITEMS_H_
#include<vector>
#include "Util.h"
#include "Types.h"
#include "Container.h"


// Templates declarations to perform complete CRUD operations of all entities

template<typename C>
void append(std::vector<C> &items, C item, Container& container);

template<typename C>
void remove(std::vector<C>& items, int id);

template<typename C>
bool exist(std::vector<C>& items, const int id);

template<typename C>
void insert(std::vector<C>& items, int index, C item);

template<typename C>
C getItem(std::vector<C>& items, const int index);

template<typename C>
int getIndex(std::vector<C>& items, const int id);

template<typename C>
void display(std::vector<C>& items, Container& container);

template<typename C>
int lenght(const std::vector<C>& items);

#endif
