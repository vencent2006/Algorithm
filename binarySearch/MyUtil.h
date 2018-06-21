//
// Created by vincent on 2018/6/21.
//

#ifndef ALGORITHM_MYUTIL_H
#define ALGORITHM_MYUTIL_H

#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

namespace MyUtil{

    //制造n个[rangeL,rangeR]大小的随机数
    int * generateRandomArray(int n, int rangeL, int rangeR){
        assert(n > 0 && rangeR >= rangeL);

        int * arr = new int[n];

        srand(time(NULL));

        for(int i = 0; i < n; i++){
            arr[i] = rand()%(rangeR - rangeL + 1) + rangeL;
        }

        return arr;
    }

    //制造n个有序的数
    int * generateOrderedArray(int n){
        assert(n > 0);

        int * arr = new int[n];

        for(int i = 0; i < n; i++){
            arr[i] = i;
        }

        return arr;
    }

}

#endif //ALGORITHM_MYUTIL_H
