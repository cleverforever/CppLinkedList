/* 
 * File:   LinkedList.h
 * Author: yuyc
 *
 * Created on 2015年2月11日, 下午11:08
 */

#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include"../ListElement/ListElement.h"
//#include <cstdlib>
//#include <iostream>
//
//using namespace std;

template<class T>
class LinkedList {
public:
    LinkedList():_head(NULL){}
    virtual ~LinkedList();
//    {
//        if (_head){
//            ListElement<T>* cur = NULL;
//            do{
//                cur = _head;
//                _head = cur->getNext();
//                delete cur;
//            }while(cur);
//        }        
//    }
    
    bool insertInfront(const T& data);
//    {
//        ListElement<T> *newElem = new ListElement<T>(data);
//        if (!newElem) {
//            cout << "error happened @ insertInfront"<<endl;
//            return false;
//        }
//
//        newElem->setValue(data);
//        newElem->setNext(_head);      
//        this->setHead(newElem);
//
//        return true;            
//    }
    //bool delNode(T data); 
    
    inline void setHead(ListElement<T>* head){ _head = head; }
    inline ListElement<T>* getHead() const { return _head; }
    
    void printList();
//    {
//        ListElement<T> *head = this->getHead();
//        if( !head ) return;
//
//        int i=0;
//        ListElement<T> *cur = head;
//        while(cur){
//           cout<<"No:"<<i <<" is " << cur->getValue() <<endl;
//           cur = cur->getNext();
//           i++;
//        }        
//    }
    
private:
    ListElement<T>* _head;

};

#endif	/* LINKEDLIST_H */

