#include "pch.h"
#include <iostream>
#include "radixsort.h"
#include "linkedlist.h"
#include "mergesort.h"
using edu::vcccd::vc::csv15::radixsort;
using edu::vcccd::vc::csv15::mergesort;
int main()
{
    int whomp[] = { 1,20,31,5, 76,100 };
    int64_t numbers[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
    int64_t arraySize = (sizeof(numbers) / sizeof(int64_t));
    mergesort(numbers, arraySize);


    //radixsort(whomp, 6);

}