/*
	@file appearance.c
	@author Giorgio Bianco Dolino
	@version 1.0
*/
#ifndef APPEARANCE_H
#define APPEARANCE_H
/*
 * \fn void dinosaur1(int y, int x)
 * 	\fn void dinosaur2(int y, int x);
 * 	\fn void cactus1(int y, int x);
 * 	\fn void cactus2(int y, int x);
 * 	\fn void sun(int y, int x);
 * 	\fn void moon(int y, int x);
 * 	\fn void showLoss(int y, int x);
 * 	\fn void showTrex(int x, int y);
 * 	\fn void clearCactus1(int y, int x);
 * 	\fn void cleardinosaurUp(int diY, int diX);
 */
void dinosaur1(int y, int x);
void dinosaur2(int y, int x);
void cactus1(int y, int x);
void cactus2(int y, int x);
void sun(int y, int x);
void moon(int y, int x);
void showLoss(int y, int x);
void showTrex(int x, int y);
void clearCactus1(int y, int x);
void cleardinosaurDown(int diY, int diX);
void cleardinosaurUp(int diY, int diX);

#endif