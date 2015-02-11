/* 
 * File:   main.cpp
 * Author: yuyc
 *
 * Created on 2015年2月11日, 下午11:08
 */

#include <cstdlib>
#include <iostream>
#include "LinkedList/LinkedList.h"

/*
 * 
 */
int main(int, char**) {
    LinkedList* list = new LinkedList();
    int value;
    for(int i=0;i<5;i++){
        std::cout <<"Please input the value of the new node" <<std::endl;
        std::cin >> value;
        bool isOK = list->insertInfront(value);
        if(!isOK){           
            delete list;
            return false;
        }
    }
    list->printList();
    return 0;
}


