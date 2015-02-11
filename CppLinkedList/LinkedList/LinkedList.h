/* 
 * File:   LinkedList.h
 * Author: yuyc
 *
 * Created on 2015年2月11日, 下午11:08
 */

#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

class LinkedList {
typedef struct element{
    struct element* _next;
    int _data;
}listElement;

public:
    LinkedList();
    virtual ~LinkedList();
    
    bool insertInfront(int data);
    
    bool delNode(int data); 
    
    void printList();
    
private:
    listElement* _head;
    listElement* _tail;

    LinkedList(const LinkedList& orig){}
};

#endif	/* LINKEDLIST_H */

