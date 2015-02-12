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

