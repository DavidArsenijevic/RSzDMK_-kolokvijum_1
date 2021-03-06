	/**
	 * @file milis.h
	 * @brief Datoteka koja deklarise funkcije za upravljanje vremenom (milisekundi)
	 * @author David Arsenijevic
	 * @date 16-5-2021
	 * @version 1.0
	 */

#ifndef TIMER0_H_
#define TIMER0_H_
#include <avr/io.h>
#include <avr/interrupt.h>

/// Promenljiva koja skladisti broj milisekundi proteklih od pokretanja aplikacije
volatile unsigned long ms = 0;
/**
 * timer0DelayMs - Funkcija koja implementira pauzu u broju milisekundi koji je prosledjen
 * kao parametar
 * @param delay_length - ulaz tipa unsigned long - Duzina pauze u milisekundama
 * @return Povratna vrednost je tipa unsigned long i ima vrednost broja milisekundi
 * proteklih od pocetka aplikacije do trenutka izlaska iz funkcije
 */
unsigned long timer0DelayMs(unsigned long delay_length);

/**
 * timer0InteruptInit - Funkcija koja inicijalizuje timer 0 tako da pravi prekide
 * svake milisekunde
 * @return Nema povratnu vrednost
 */
void timer0InteruptInit();


/**
* calculateHalfPeriod - Funkcija koja izracunava polovinu prosledjene
periode
* @param period - input tipa unsigned long - Duzina periode
* @return Povratna vrednost je tipa unsigned long i predstavlja polovinu
periode
*/
calculateHalfPeriod(unsigned long period);

#endif /* TIMER0_H_ */
