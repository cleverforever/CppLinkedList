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

template<class T>
class LinkedList {
public:
    LinkedList():_head(NULL){}
    
    virtual ~LinkedList() {
        ListElement<T>* head = this->getHead();        
        while(head){
//            cout << "~LinkedList is invoked"<<endl;            
            this->setHead(head->getNext());
            delete head;
            head = this->getHead();   
        }
    }

    bool insertInFront(const T& data){
        ListElement<T> *newElem = new ListElement<T>(data);
        if (!newElem) {
            std::cout << "error happened @ insertInfront"<<std::endl;
            return false;
        }

        ListElement<T>* head = this->getHead();  
        newElem->setNext(head);
        this->setHead(newElem);

        return true;
    }

    bool delNodeInFront(const T& data){
        ListElement<T> *pCur = this->getHead(), *pNext = NULL;
        bool isOK = false;
        if(!pCur) return isOK;
        pNext = pCur->getNext();
         //The head will be deleted
        if(pCur->getValue() == data){
            this->setHead( pNext );
            delete pCur;
            pCur = pNext;
            isOK = true;
        }
    
        while(pNext){            
            if(pNext->getValue() == data){
                pCur->setNext(pNext->getNext());
                delete pNext;
                isOK = true;
            }
            else {
                pCur = pNext;
            }
            pNext = pCur->getNext();
        }
        return isOK;
    }
    
    void printList() const{
        ListElement<T>* head = this->getHead();
        if( !head ){
            std::cout<<"There is no element!"<<std::endl;
            return;
        }

        int i=0;
        ListElement<T> *cur = head;
        while(cur){
           std::cout<<"No:"<<i <<" is " << cur->getValue() <<std::endl;
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

