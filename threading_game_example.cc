#include <thread>
#include <iostream>
#include <pthread.h>
#include <chrono>
#include <random>

void thread_function()
{
    bool flag = false;
    int score = 0;
    do {
        int random_num = rand() % 5000 + 50;
        std::this_thread::sleep_for(std::chrono::milliseconds(random_num));
        std::cout << "PRESS BUTTON" << std::endl;
        // Record start time
        auto start = std::chrono::high_resolution_clock::now();
        char input;
        std::cin >> input;
        // Record end time
        auto finish = std::chrono::high_resolution_clock::now();
        // Elapsed time
        std::chrono::duration<double> elapsed = finish - start;
        if ((input == 'a' || input == 'A') && elapsed.count() <= 2.0) {
            std::cout << "you pressed the A key in " << elapsed.count() << "seconds" << std::endl;
            score++;
        }
        else if(elapsed.count() > 2.0) {
            std::cout << "you took too long loser\n";
            break;
        }
        else{
            std::cout << "you failed to press the button\n";
            break;
        }
        flag = input == 'a';
    } while (flag);
    std::cout << "your highest score was " << score << std::endl;
        
}
 
int main()  
{
    
    std::thread threadObj(thread_function);
    
    threadObj.join();    
    std::cout<<"It's Game Over"<<std::endl;
    return 0;
}
