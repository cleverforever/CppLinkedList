
/* 
 * File:   LinkedElement.h
 * Author: yuyc
 *
 * Created on 2015年2月12日, 上午11:56
 */

#ifndef LINKEDELEMENT_H
#define	LINKEDELEMENT_H
#include<cstdio>

template<class T>
class ListElement {
public:
    ListElement(const T& data):_next(NULL), _data(data){}
    virtual ~ListElement(){}
    
    inline  ListElement* getNext()  const {return _next;}
    inline const T& getValue() const {return _data;}
    inline void setNext(ListElement* elem) { _next = elem;}
    inline void setValue(const T&value) { _data = value;}
    
private:
    ListElement* _next;
    T _data;

    ListElement(const ListElement& orig){}
};

#endif	/* LINKEDELEMENT_H */

