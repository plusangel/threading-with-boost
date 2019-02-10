//
// Created by angelos on 03/02/19.
//

#ifndef BOOSTTHREADS_FUNCTORWORKER_H
#define BOOSTTHREADS_FUNCTORWORKER_H

#include <iostream>

class functorWorker {
public:
    functorWorker(unsigned N, float guess, unsigned iter):m_Number {N}, m_Guess {guess}, m_Iterations {iter}
    {}
    void operator()();
private:
    unsigned m_Number;
    float m_Guess;
    unsigned m_Iterations;

};


#endif //BOOSTTHREADS_FUNCTORWORKER_H
