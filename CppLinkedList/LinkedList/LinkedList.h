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
        ListElement<T>* head = this->getHead();        
        if (head){
            ListElement<T>* cur = NULL;
            do{
                cur = head;
                this->setHead(cur->getNext());
                delete cur;
            }while(cur);
    }
}

    bool insertInfront(const T& data){
        ListElement<T> *newElem = new ListElement<T>(data);
        if (!newElem) {
            cout << "error happened @ insertInfront"<<endl;
            return false;
        }

        ListElement<T>* head = this->getHead();  
        newElem->setNext(head);
        this->setHead(newElem);

        return true;
}

    bool delNode(const T& data){
        ListElement<T>* pDeleteme = findNode(data);
        if(!pDeleteme) return false;
        this->setHead(pDeleteme->getNext());
        delete pDeleteme;
        return true;
    }
    
    void printList() const{
        ListElement<T>* head = this->getHead();
        if( !head ) return;

        int i=0;
        ListElement<T> *cur = head;
        while(cur){
           cout<<"No:"<<i <<" is " << cur->getValue() <<endl;
           cur = cur->getNext();
           i++;
        }
}
    
    ListElement<T>* getHead() const {
        return _head;
    }
    
    ListElement<T>* findNode(const T& data)const{
        ListElement<T>* cur = this->getHead();
        while(cur){
            if(cur->getValue() == data){
                break;
            }
            else
                cur = cur->getNext();
        }
        return cur;        
    }
    
protected:   
   void setHead(ListElement<T>* head){
       _head = head;
   }
   
private:
    ListElement<T>* _head;

};

#endif	/* LINKEDLIST_H */

