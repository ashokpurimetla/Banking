/*
 * CreditCard.h
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#ifndef CREDITCARD_H_
#define CREDITCARD_H_

#include <iostream>
using namespace std;

#include "OfferVisitor.h"

class CreditCard
{
public:
	virtual void getName()=0;
	virtual void accept(OfferVisitor *v)=0;
};

#endif /* CREDITCARD_H_ */
