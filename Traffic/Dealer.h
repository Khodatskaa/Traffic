#ifndef DEALER_H
#define DEALER_H

#include "ParcelDTO.h"

struct Dealer 
{
public:
    void deliverParcel(ParcelDTO<string>* parcelDTO) 
    {
        if (parcelDTO->getStatus()) 
        {
            std::cout << "Dealer delivering parcel to: " << parcelDTO->getToUser()->GetAdress() << std::endl;
        }
        else 
        {
            std::cout << "Delivery failed. Parcel status is false" << std::endl;
        }
    }
};

#endif // DEALER_H
