#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include<cmath>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
    for(int i = mSize-1;i>=0;i--){
        if(mData[i] == k) return true;
    }
    return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
    for(int i = mSize-1;i>=0;i--){
        if(mData[i] == k){
            float ans = log(i+1)/log(2);
            return floor(ans);
        }
    }
    return -1;
}

#endif

