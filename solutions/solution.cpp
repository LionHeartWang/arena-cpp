//
// Created by wangyiguang on 17/11/18.
//

#include "solution.h"

#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;


void Solution::run() {
    cout << "run solution." << endl;
}

void printUsage() {
    cout << "usage: solution <id>" << endl;
}

void unkownSolutionWarnning(int solutionId) {
    cout << "unkouwn solution id " << solutionId << "." << endl;
}


int main(int argc, char **argv) {
    if (argc < 2) {
        printUsage();
        exit(1);
    }

    int solutionId = atoi(argv[1]);
    Solution* solution;

    switch (solutionId) {
        case 28:
            solution = new Solution028();
            break;
        case 461:
            solution = new Solution461();
            break;
        case 657:
            solution = new Solution657();
            break;
        case 680:
            solution = new Solution680();
            break;
        case 686:
            solution = new Solution686();
            break;
        case 696:
            solution = new Solution696();
            break;
        case 728:
            solution = new Solution728();
            break;
        case 771:
            solution = new Solution771();
            break;
        default:
            unkownSolutionWarnning(solutionId);
            exit(1);
    }

    solution->run();
    return 0;
}