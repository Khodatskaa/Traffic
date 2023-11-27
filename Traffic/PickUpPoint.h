#ifndef PICKUP_POINT_H
#define PICKUP_POINT_H

#include "Dealer.h"

struct PickUpPoint 
{
private:
    int id;
    std::string address;
    Dealer dealer;

public:
    PickUpPoint(int id, const std::string& address, const Dealer& dealer) : id(id), address(address), dealer(dealer) {}

    void storeParcel(Parcel<string>* parcel) 
    {
        std::cout << "Storing parcel at PickUpPoint " << id << " located at: " << address << std::endl;

        ParcelDTO<string>* parcelDTO = new ParcelDTO<string>();
        parcelDTO->receive(nullptr); 
        dealer.deliverParcel(parcelDTO);
    }
};

#endif // PICKUP_POINT_H
