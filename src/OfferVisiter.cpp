#include "OfferVisitor.h"

void GasOfferVisitor::visitBronzeCreditCard(Bronze *b)
{
	cout << "Gas offer for Bronze CreditCard" << endl;
}

void GasOfferVisitor::visitSilverCreditCard(Silver *s)
{
	cout << "Gas offer for Silver CreditCard" << endl;
}

void GasOfferVisitor::visitGoldCreditCard(Gold *g)
{
	cout << "Gas offer for Gold CreditCard" << endl;
}

void FoodOfferVisitor::visitBronzeCreditCard(Bronze *b)
{
	cout << "Food offer for Bronze CreditCard" << endl;
}

void FoodOfferVisitor::visitSilverCreditCard(Silver *s)
{
	cout << "Food offer for Silver CreditCard" << endl;
}

void FoodOfferVisitor::visitGoldCreditCard(Gold *g)
{
	cout << "Food offer for Gold CreditCard" << endl;
}

void HotelOfferVisitor::visitBronzeCreditCard(Bronze *b)
{
	cout << "Hotel offer for Bronze CreditCard" << endl;
}

void HotelOfferVisitor::visitSilverCreditCard(Silver *s)
{
	cout << "Hotel offer for Silver CreditCard" << endl;
}

void HotelOfferVisitor::visitGoldCreditCard(Gold *g)
{
	cout << "Hotel offer for Gold CreditCard" << endl;
}

void FlightOfferVisitor::visitBronzeCreditCard(Bronze *b)
{
	cout << "Flight offer for Bronze CreditCard" << endl;
}

void FlightOfferVisitor::visitSilverCreditCard(Silver *s)
{
	cout << "Flight offer for Silver CreditCard" << endl;
}

void FlightOfferVisitor::visitGoldCreditCard(Gold *g)
{
	cout << "Flight offer for Gold CreditCard" << endl;
}



