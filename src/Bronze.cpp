/*
 * Bronze.cpp
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#include "Bronze.h"

void Bronze::getName()
{
	cout << "Bronze CreditCard" << endl;
}

void Bronze::accept(OfferVisitor *v)
{
	v->visitBronzeCreditCard(this);
}


