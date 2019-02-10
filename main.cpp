#include <iostream>
#include <boost/thread.hpp>
#include <boost/chrono.hpp>
#include <classWorkerAdvanced.h>
#include "include/functorWorker.h"
#include "include/classWorker.h"
#include "include/classWorkerAdvanced.h"

void wait(int secs)
{
    boost::this_thread::sleep_for(boost::chrono::seconds(secs));
}

void thread(int limit) {
    try {
        for (int i = 0; i < limit; ++i)
        {
            wait(1);
            std::cout << i << '\n';
        }
    } catch (boost::thread_interrupted&) {}
}

int main()
{
    /*
    // case 1: simple example with a function (with argument) as thread
    boost::thread t{thread, 7};
    t.join();
    */

    /*
    // case 2: functor
    std::cout << "main: startup" << std::endl;
    functorWorker w{612, 10, 5};
    boost::thread t{w};
    std::cout << "main: waiting for thread" << std::endl;
    t.join();
    std::cout << "main: done" << std::endl;
    */

    /*
    // case 3: class
    std::cout << "main: startup" << std::endl;
    classWorker w{612, 10, 5};
    boost::thread t{&classWorker::doTheWork, &w};
    std::cout << "main: waiting for thread" << std::endl;
    t.join();
    std::cout << "main: done" << std::endl;
    */

    //case 4: class with integrated thread
    std::cout << "main: startup" << std::endl;
    classWorkerAdvanced w{612, 10, 5};
    w.start();
    std::cout << "main: waiting for thread" << std::endl;
    w.join();
    std::cout << "main: done" << std::endl;
    return 0;
}