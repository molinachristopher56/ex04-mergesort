//
// Created by Chris on 12/18/2018.
//

#ifndef EX04_MERGESORT_MERGESORT_H
#define EX04_MERGESORT_MERGESORT_H

#include <cstdint>
#include <iostream>

namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv15 {
                template<class T>
                void merge(T lower[], T upper[], int64_t size) {
                    std::cout << "lower = " << *lower << ", upper = " << *upper << ", size = " << size << std::endl;
                    T *hold = new T[size];
                    T *b = lower, *u = upper, *h = hold;
                    while (b < upper && u < upper + size / 2 + size % 2) {
                        if (*b < *u) {
                            *h = *b;
                            b++;
                        }
                        else {
                            *h = *u;
                            u++;
                        }
                        h++;
                    }
                    while (b < upper) {
                        *h = *b;
                        b++;
                        h++;
                    }
                    while (u < upper + size / 2 + size % 2) {
                        *h = *u;
                        u++;
                        h++;
                    }


                    for (int64_t k = 0; k < size; k++) {
                        std::cout << hold[k] << " ";
                        lower[k] = hold[k];
                    }
                    std::cout << std::endl;
                    delete[] hold;
                }


                template<class T>
                void mergesort(T array[], size_t size) {
                    std::cout << "array = " << array << ", size = " << size << std::endl;
                    if (size > 2) {
                        mergesort(array, size / 2);

                        mergesort(array + size / 2, size / 2 + (size % 2));

                        merge(array, array + size / 2, size);

                    }
                    else if (size == 2) {
                        if (array[1] < array[0]) {
                            std::swap(array[0], array[1]);
                        }
                    }
                }



            }
        }
    }
}


#endif //EX04_MERGESORT_MERGESORT_H
