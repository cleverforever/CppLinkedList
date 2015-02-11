/* 
 * File:   LinkedList.cpp
 * Author: yuyc
 * 
 * Created on 2015年2月11日, 下午11:08
 */

#include <cstdlib>
#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList():_head(NULL),_tail(NULL){}

LinkedList::~LinkedList() {
    if (_head){
        listElement* cur = NULL;
        do{
            cur = _head;
            _head = cur->_next;
            delete cur;
        }while(cur);
    }
}

bool LinkedList::insertInfront(int data){
    listElement *newElem = (listElement*)malloc(sizeof(listElement));
    if (!newElem) {
        cout << "error happened @ insertInfront"<<endl;
        return false;
    }
    
    newElem->_data = data;
    newElem->_next = _head;      
    _head = newElem;

    return true;    
}

void LinkedList::printList() {
    if(!_head) return;
   
    int i=0;
    listElement *cur = _head;
    while(cur){
       cout<<"No:"<<i <<" is " << cur->_data <<endl;
       cur = cur->_next;
       i++;
    }
}


