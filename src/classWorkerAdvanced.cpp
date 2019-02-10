//
// Created by angelos on 03/02/19.
//

#include "classWorkerAdvanced.h"

void classWorkerAdvanced::join() {
    m_Thread.join();
}

void classWorkerAdvanced::doTheWork() {
    std::cout << "Worker: calculating sqrt(" << m_Number
              << "), itertations = "
              << m_Iterations << std::endl;

    // Use Newton's Method
    float   x;
    float   x_last = m_Guess;

    for (unsigned i=0; i < m_Iterations; i++)
    {
        x = x_last - (x_last*x_last-m_Number)/(2*x_last);
        x_last = x;

        std::cout << "Iter " << i << " = "
                  << x << std::endl;
    }

    std::cout << "Worker: Answer = " << x << std::endl;
}

void classWorkerAdvanced::start() {
    m_Thread = boost::thread(&classWorkerAdvanced::doTheWork, this);
}
