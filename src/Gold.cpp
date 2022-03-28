/*
 * Gold.cpp
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#include "Gold.h"

void Gold::getName()
{
	cout << "Gold CreditCard" << endl;
}

void Gold::accept(OfferVisitor *v)
{
	v->visitGoldCreditCard(this);
}
