/*
 * Bronze.h
 *
 *  Created on: Mar 28, 2022
 *      Author: ashok
 */

#ifndef BRONZE_H_
#define BRONZE_H_

#include "CreditCard.h"
//#include "OfferVisitor.h"

class Bronze : public CreditCard
{
public:
	void getName();
	void accept(OfferVisitor *v);
};

#endif /* BRONZE_H_ */
