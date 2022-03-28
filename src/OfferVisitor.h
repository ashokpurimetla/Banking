

#ifndef OFFERVISITOR_H_
#define OFFERVISITOR_H_

#include <iostream>
using namespace std;

class Bronze;//forward declaration of class
class Silver;
class Gold;
//#include "Bronze.h"

class OfferVisitor
{
public:
	virtual void visitBronzeCreditCard(Bronze *b)=0;
	virtual void visitSilverCreditCard(Silver *b)=0;
	virtual void visitGoldCreditCard(Gold *b)=0;
};

class GasOfferVisitor : public OfferVisitor
{
public:
	void visitBronzeCreditCard(Bronze *b);
	void visitSilverCreditCard(Silver *b);
	void visitGoldCreditCard(Gold *b);
};

class FoodOfferVisitor : public OfferVisitor
{
public:
	void visitBronzeCreditCard(Bronze *b);
	void visitSilverCreditCard(Silver *b);
	void visitGoldCreditCard(Gold *b);
};

class HotelOfferVisitor : public OfferVisitor
{
public:
	void visitBronzeCreditCard(Bronze *b);
	void visitSilverCreditCard(Silver *b);
	void visitGoldCreditCard(Gold *b);
};

class FlightOfferVisitor : public OfferVisitor
{
public:
	void visitBronzeCreditCard(Bronze *b);
	void visitSilverCreditCard(Silver *b);
	void visitGoldCreditCard(Gold *b);
};

#endif /* OFFERVISITOR_H_ */
