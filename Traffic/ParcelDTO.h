#ifndef PACKAGE_DTO_H
#define PACKAGE_DTO_H

#include <iostream>
#include <string>
#include "User.h"
#include "Parcel.h"

template<typename DataType>
struct ParcelDTO 
{
private:
    User* fromDealer;
    User* toUser;
    Parcel<DataType>* parcel;
    bool status = false;

public:
    ParcelDTO() = default;

    ParcelDTO(User* fromDealer, User* toUser, Parcel<DataType>* parcel)
        : fromDealer(fromDealer), toUser(toUser), parcel(parcel) {}

    inline User* getFromDealer() const
    {
        return fromDealer;
    }

    inline User* getToUser() const
    {
        return toUser;
    }

    inline Parcel<DataType>* getParcel() const
    {
        if (status == true)
        {
            return parcel;
        }
        else {
            std::cout << "Status receive false" << std::endl;
            return new Parcel<DataType>("empty");
        }
    }

    ParcelDTO* send() 
    {
        return this;
    }

    void receive(ParcelDTO* receivedParcel)
    {
        if (receivedParcel == nullptr)
        {
            this->status = false;
            return;
        }
        this->fromDealer = receivedParcel->fromDealer;
        this->toUser = receivedParcel->toUser;
        this->parcel = receivedParcel->parcel;
        this->status = true;
    }

    inline bool getStatus() const 
    {
        return status;
    }
};

#endif // PARCEL_DTO_H

