/*
 *  * Copyright (C) Carlos Sá, Filipe Oliveira, Sérgio Caldas
 *  * Copyright (C) Laboratórios Informática III, Universidade do Minho, 2015
 *  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "month.h"

struct month {

  int numberSales;
  float totalBilled;
};

Month newMonth ( void ) {
  Month newMonth = (Month) malloc ( sizeof (struct month));
  memset (( newMonth ) , '\0', ( sizeof ( struct month)) );
  return newMonth;
}

void initMonth( Month initMonth ){
  initMonth->numberSales = 0;
  initMonth->totalBilled = 0.0;
}

int getNumberSales( Month getMonth ){
  return getMonth->numberSales;
}

float getTotalBilled ( Month getMonth ){
  return getMonth->totalBilled;
} 

void addSales ( Month addMonth , int sales ) {
  addMonth->numberSales += sales;
}

void addBills ( Month addMonth, float bill) {
  addMonth->totalBilled += bill;
}

void deleteMonth ( Month monthToDelete ){
  free( monthToDelete );
}

