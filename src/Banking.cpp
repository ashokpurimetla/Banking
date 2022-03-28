
#include "CreditCard.h"
#include "Bronze.h"
#include "Silver.h"
#include "Gold.h"

int main()
{
	CreditCard *cc = new Bronze;
	OfferVisitor *vGas = new GasOfferVisitor;
	OfferVisitor *vFood = new FoodOfferVisitor;
	OfferVisitor *vHotel = new HotelOfferVisitor;
	OfferVisitor *vFlight = new FlightOfferVisitor;

	cout << "---------Bronze--------- " <<endl;
	cc->accept(vGas);
	cc->accept(vFood);
	cc->accept(vHotel);
	cc->accept(vFlight);

	cout << "---------Silver--------- " <<endl;
	CreditCard *cc1 = new Silver;
	cc1->accept(vGas);
	cc1->accept(vFood);
	cc1->accept(vHotel);
	cc1->accept(vFlight);

	cout << "---------Gold--------- " <<endl;
	CreditCard *cc2 = new Gold;
	cc2->accept(vGas);
	cc2->accept(vFood);
	cc2->accept(vHotel);
	cc2->accept(vFlight);

	return 0;
}
