#include <iostream>
#include <array>
#include "charnode.h"
#include "queue.h"
#include "charstack.h"
#include "templatestack.h"
#include "charqueue.h"
#include "templatequeue.h"
#include "sorting.h"
#include <chrono>


void oppgave_1_9_1() {
    charstack myStack;

    //char stack push
    myStack.push('X');
    myStack.push('y');
    myStack.push('T');
    myStack.push('R');
    myStack.push('S');

    //char stack pop
    myStack.pop();

    //char stack top
    std::cout << "top: " << myStack.top() << std::endl;

    //char stack size
    std::cout << "size: " << myStack.size() << std::endl;

    //char stack empty
    if (myStack.empty() == true) {
        std::cout << "isEmpty: true" << std::endl;
    }
    else {
        std::cout << "isEmpty: false" << std::endl;
    }
}

void oppgave_1_9_2() {
    //everything printed in console in this task looks strange because of it thinking "<<" is a part of a template so cant use std::endl; or writing text before the value.
    templatestack<char> myStack;

    //template char stack push
    myStack.push('A');
    myStack.push('B');
    myStack.push('C');
    myStack.push('D');
    myStack.push('E');

    //template char stack pop
    myStack.pop();

    //template char stack top (prints in console)
    myStack.top();

    //template char stack size (prints in console)
    myStack.size();

    //template char stack empty
    if (myStack.empty() == true) {
        std::cout << "isEmpty: true" << std::endl;
    }
    else {
        std::cout << "isEmpty: false" << std::endl;
    }
}

void oppgave_1_9_3() {
    //del 1 char queue ////////////////////////////////////////////////////////////////////////////
    charqueue myQueue;

    // char queue push
    myQueue.push('A');
    myQueue.push('D');
    myQueue.push('T');
    myQueue.push('W');
    myQueue.push('X');

    // char queue pop
    myQueue.pop();

    //char queue front 
    std::cout <<"front: "<< myQueue.front() << std::endl;

    //char queue size
    std::cout << "size: " << myQueue.size() << std::endl;

    //char queue empty
    if (myQueue.empty() == true) {
        std::cout << "isEmpty: true" << std::endl;
    }
    else {
        std::cout << "isEmpty: false" << std::endl;
    }

    //del 2 template char queue i array ///////////////////////////////////////////////////////////
    //I denne delen har jeg tatt litt inspirasjon fra andre nettsteder siden det sto så lite om det i pdf vi fikk.
    templatequeue<char> myQueue2;

    //template queue array push
    myQueue2.push('A');
    myQueue2.push('R');
    myQueue2.push('D');
    myQueue2.push('E');
    myQueue2.push('K');

    //template queue array pop
    myQueue2.pop();

    //template queue array front element
    std::cout << "frontElement: " << myQueue2.front() << std::endl;

    //template queue array back element
    std::cout << "backElement: " << myQueue2.back() << std::endl;

    //template queue array size
    std::cout << "size; " << myQueue2.size() << std::endl;

    //template queue array current capacity
    std::cout << "currentCapacity: " << myQueue2.capasity() << std::endl;

    //template queue array empty
    if (myQueue2.empty() == true) {
        std::cout << "isEmpty: true" << std::endl;
    }
    else {
        std::cout << "isEmpty: false" << std::endl;
    }
}



void oppgave_2_3_1() { 
    //selection sort n=10
    sortTid1();
    //selection sort n=100
    sortTid2();
    //selection sort n=1000
    sortTid3();
    //selection sort n=10000
    sortTid4();
    //selection sort n=100000
    sortTid5();
    //std::sort n = 10
    sortTid6();
    //std::sort n = 100
    sortTid7();
    //std::sort n = 1000
    sortTid8();
    //std::sort n = 10000
    sortTid9();
    //std::sort n = 100000
    sortTid10();
}






int main() {
    oppgave_1_9_1();
    oppgave_1_9_2();
    oppgave_1_9_3();
    oppgave_2_3_1();
    return 0;
}