/* 
 * File:   LinkedList.h
 * Author: yuyc
 *
 * Created on 2015年2月11日, 下午11:08
 */

#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include"../ListElement/ListElement.h"
#include <cstdlib>
#include <iostream>

using namespace std;

template<class T>
class LinkedList {
public:
    LinkedList():_head(NULL){}
    virtual ~LinkedList() {
    if (_head){
        ListElement<T>* cur = NULL;
        do{
            cur = _head;
            _head = cur->getNext();
            delete cur;
        }while(cur);
    }
}

    bool insertInfront(T& data){
    ListElement<T> *newElem = new ListElement<T>(data);
    if (!newElem) {
        cout << "error happened @ insertInfront"<<endl;
        return false;
    }
    
    newElem->setNext(_head);      
    _head = newElem;

    return true;    
}

//    bool delNode(T data); 
    
    void printList() {
        if( !_head ) return;

        int i=0;
        ListElement<T> *cur = _head;
        while(cur){
           cout<<"No:"<<i <<" is " << cur->getValue() <<endl;
           cur = cur->getNext();
           i++;
        }
}
    
private:
    ListElement<T>* _head;

};

#endif	/* LINKEDLIST_H */

