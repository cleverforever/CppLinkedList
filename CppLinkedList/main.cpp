/* 
 * File:   main.cpp
 * Author: yuyc
 *
 * Created on 2015年2月12日, 下午4:28
 */

#include <cstdlib>
#include <iostream>
#include "LinkedList/LinkedList.h"
using namespace std;

/*
 * 
 */
int main(int, char**) {
    LinkedList<int>* list = new LinkedList<int>();
    
    for(int i=1;i<=5;i++){
        bool isOK = list->insertInFront(i);
        if(!isOK){           
            delete list;
            return false;
        }
    }
    cout<<"inserted"<<endl;
    list->printList();
    
    for(int j=5;j>=1;j--){
        list->delNodeInFront(j);
        cout<<"deleted"<<j<<endl;    
        list->printList();
    }

//    delete list;
    return 0;
}

