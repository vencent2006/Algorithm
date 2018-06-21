//
// Created by vincent on 2018/6/21.
//

#include <iostream>
#include <cmath>
#include <cassert>
#include <ctime>
#include "MyUtil.h"

template <typename T>
int binarySearch(T arr[], int n, T target){
    int l = 0, r = n - 1;//在[l,r]区间内查找target
    while(l <= r){//因为依然复合[l,r]区间的定义
//       int mid = (l + r)/2;
       int mid = l + (r - l)/2;//避免整形溢出
       if (arr[mid] == target){
           return mid;
       }else if (arr[mid] > target){//target < mid
           r = mid - 1;//target在[l,mid-1]中
       }else{//target > mid
           l = mid + 1;//target在[mid+1,r]中
       }
    }

    return -1;
}

int main(){
    int n = 1000000;
    int * data = MyUtil::generateOrderedArray(n);

    clock_t startTime = clock();
    for(int i = 0; i < n; i++){
        assert(i == binarySearch(data, n, i));
    }
    clock_t endTime = clock();

    cout<<"binarySearch Test Completed."<<endl;
    cout<<"Exec "<<n<<" times"<<endl;
    cout<<"Time Cost :"<<double(endTime - startTime)/CLOCKS_PER_SEC<<" sec"<<endl;

    return 0;
}