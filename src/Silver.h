/*
 * Silver.h
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#ifndef SILVER_H_
#define SILVER_H_

#include "CreditCard.h"

class Silver : public CreditCard
{
public:
	void getName();
	void accept(OfferVisitor *v);
};



#endif /* SILVER_H_ */
