	/**
	 * @file arrays.h
	 * @brief Datoteka koja upravlja nizovima
	 * @author David Arsenijevic
	 * @date 16-5-2021
	 * @version 1.0
	 */
#ifndef ARRAYS_H_
#define ARRAYS_H_

#include <stdint.h>

/// Izracunava vrednost n-tog clana aritmetickog niza
int16_t Element (int16_t first_element, int16_t difference, int16_t n);


/// racuna sumu vrednosti
void Sum(int16_t first_element, int16_t difference, int16_t n, int8_t mode);



#endif /* ARRAYS_H_ */
