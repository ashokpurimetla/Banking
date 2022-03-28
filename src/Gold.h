/*
 * Gold.h
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#ifndef GOLD_H_
#define GOLD_H_

#include "CreditCard.h"

class Gold : public CreditCard
{
public:
	void getName();
	void accept(OfferVisitor *v);
};

#endif /* GOLD_H_ */
