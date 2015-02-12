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

template<class T>
LinkedList<T>::~LinkedList() {
    if (_head){
        ListElement<T>* cur = NULL;
        do{
            cur = _head;
            _head = cur->getNext();
            delete cur;
        }while(cur);
    }
}

template<class T>
bool LinkedList<T>::insertInfront(const T& data){
    ListElement<T> *newElem = new ListElement<T>(data);
    if (!newElem) {
        cout << "error happened @ insertInfront"<<endl;
        return false;
    }
    
    newElem->setValue(data);
    newElem->setNext(_head);      
    this->setHead(newElem);

    return true;    
}

template<class T>
void LinkedList<T>::printList() {
    ListElement<T> *head = this->getHead();
    if( !head ) return;
   
    int i=0;
    ListElement<T> *cur = head;
    while(cur){
       cout<<"No:"<<i <<" is " << cur->getValue() <<endl;
       cur = cur->getNext();
       i++;
    }
}

int main(int, char**) {
    LinkedList<int>* list = new LinkedList<int>();
    int value;
    for(int i=0;i<5;i++){
        cout <<"Please input the value of the new node" <<endl;
        cin >> value;
        bool isOK = list->insertInfront(value);
        if(!isOK){           
            delete list;
            return false;
        }
    }
    list->printList();
    return 0;
}
