/*
 * Silver.cpp
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#include "Silver.h"

void Silver::getName()
{
	cout << "Silver CreditCard" << endl;
}

void Silver::accept(OfferVisitor *v)
{
	v->visitSilverCreditCard(this);
}

