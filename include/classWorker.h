//
// Created by angelos on 03/02/19.
//

#ifndef BOOSTTHREADS_CLASSWORKER_H
#define BOOSTTHREADS_CLASSWORKER_H

#include <iostream>

class classWorker {
public:
    classWorker(unsigned N, float guess, unsigned iter):m_Number {N}, m_Guess {guess}, m_Iterations {iter}
    {}
    void doTheWork();
private:
    unsigned m_Number;
    float m_Guess;
    unsigned m_Iterations;

};


#endif //BOOSTTHREADS_CLASSWORKER_H
