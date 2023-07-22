// Principles of Programming Languages
// Created by jackalope on 7/17/23.
// Homework 4 - Array Passing
/*
 * Reference: https://en.cppreference.com/w/cpp/chrono/c/clock
 *            https://en.cppreference.com/w/cpp/chrono/high_resolution_clock/now
 */

#include <iostream>
#include <vector>
#include <chrono>
#include <thread>


using namespace std;

void testMyArrayValueChar(vector<char> largeVector) {
    cout << "Pass by value function called - Characters\n";
}

void testMyArrayReferenceChar(vector<char> &largeVector) {
    cout << "Pass by reference function called - Characters\n";
}

void testMyArrayValueInteger(vector<int> largeVector) {
    cout << "Pass by value function called - Integers\n";
}

void testMyArrayReferenceInteger(vector<int> &largeVector) {
    cout << "Pass by reference function called - Integers\n";
}

int main() {
    //using a vector since they should be able to create a bigger array. Stored in the heap vs the stack, i think?
    vector<char> largeVector(1000000000,'a');

    cout << "Testing to see if the Pass by Value method is in fact much slower for CHARACTERS:\n";

    /*
     * the clock() function didn't provide precise enough timestamps - the difference was always showing as '0' so instead
     * of showing both formats, the imprecise on is commented out. The chrono::high_resolution_clock::now() method provides much better precision.
     */


    // record the start time
    // clock_t cpu_start_value = clock();
    // record the wall clock time right before the method is called
    auto wall_start_Value = chrono::high_resolution_clock::now();

    // call the method passing by value
    testMyArrayValueChar(largeVector);


    // record the end time
    //clock_t cpu_end_value = clock();
    //record the end time of the function executing
    auto wall_end_Value = chrono::high_resolution_clock::now();

    //auto cpu_diff_value = (cpu_end_value - cpu_start_value) / CLOCKS_PER_SEC;
    chrono::duration<double> wall_diff_Value = wall_end_Value - wall_start_Value;

    //cout << "CPU time to pass by value: " << cpu_diff_value * 1000 << " ms\n";
    cout << "Clock time to pass by value: " << wall_diff_Value.count() * 1000 << " ms \n";

    // record the start time
    //clock_t cpu_start_ref = clock();
    // record the time right before the method is called
    auto start_Ref = chrono::high_resolution_clock::now();

    // call the method passing by value
    testMyArrayReferenceChar(largeVector);

    // record the end time
    // clock_t cpu_end_ref = clock();
    //record the end time of the function executing
    auto end_Ref = chrono::high_resolution_clock::now();

    //  = (cpu_end_ref - cpu_start_ref) / CLOCKS_PER_SEC;
    chrono::duration<double> diff_Ref = end_Ref - start_Ref;

    // cout << "CPU time to pass by reference: " << cpu_diff_ref * 1000 << " ms\n";
    cout << "Clock time to pass by reference: " << diff_Ref.count() * 1000 << " ms \n";

    cout << "----------------------------------------------------------------------------------------------------\n";

    //using a vector since they should be able to create a bigger array. Stored in the heap vs the stack, i think?
    vector<int> largeVectorInt(1000000000,'a');

    cout << "Testing to see if the Pass by Value method is in fact much slower for INTEGERS:\n";


    // record the start time
    // clock_t cpu_start_value = clock();
    // record the wall clock time right before the method is called
    wall_start_Value = chrono::high_resolution_clock::now();

    // call the method passing by value
    testMyArrayValueInteger(largeVectorInt);


    // record the end time
    //clock_t cpu_end_value = clock();
    //record the end time of the function executing
    wall_end_Value = chrono::high_resolution_clock::now();

    //auto cpu_diff_value = (cpu_end_value - cpu_start_value) / CLOCKS_PER_SEC;
    wall_diff_Value = wall_end_Value - wall_start_Value;

    //cout << "CPU time to pass by value: " << cpu_diff_value * 1000 << " ms\n";
    cout << " Clock time to pass by value: " << wall_diff_Value.count() * 1000 << " ms \n";

    // record the start time
    //clock_t cpu_start_ref = clock();
    // record the time right before the method is called
    start_Ref = chrono::high_resolution_clock::now();

    // call the method passing by value
    testMyArrayReferenceInteger(largeVectorInt);

    // record the end time
    // clock_t cpu_end_ref = clock();
    //record the end time of the function executing
    end_Ref = chrono::high_resolution_clock::now();

    //  = (cpu_end_ref - cpu_start_ref) / CLOCKS_PER_SEC;
    diff_Ref = end_Ref - start_Ref;

    // cout << "CPU time to pass by reference: " << cpu_diff_ref * 1000 << " ms\n";
    cout << "Clock time to pass by reference: " << diff_Ref.count() * 1000 << " ms \n";

    return 0;
}
