#pragma once
#include<opencv/cv.hpp>
typedef struct {  //也就是说blob的data成员是一个指向张量的指针。
	IplImage** data;
} blob;