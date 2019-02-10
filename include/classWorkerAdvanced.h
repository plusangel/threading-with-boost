//
// Created by angelos on 03/02/19.
//

#ifndef BOOSTTHREADS_CLASSWORKERADVANCED_H
#define BOOSTTHREADS_CLASSWORKERADVANCED_H

#include <iostream>
#include <boost/thread.hpp>

class classWorkerAdvanced {
public:
    classWorkerAdvanced(unsigned N, float guess, unsigned iter):m_Number {N}, m_Guess {guess}, m_Iterations {iter}
    {}
    void doTheWork();
    void start();
    void join();

private:
    unsigned m_Number;
    float m_Guess;
    unsigned m_Iterations;
    boost::thread m_Thread;
};


#endif //BOOSTTHREADS_CLASSWORKERADVANCED_H
