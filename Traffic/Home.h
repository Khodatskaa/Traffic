#ifndef HOME_H
#define HOME_H

#include "User.h"
#include "Barigha.h"
#include "Dealer.h"
#include "PickUpPoint.h"
#include "Parcel.h"

struct Home 
{
    static inline void show()  
    {
        User* userFrom = new User();
        User* userTo = new User("Carlos", "Sainz", "", "Brazil, Brazilia, st. Shin QI apt. 3", "+559864366233");
        User* users = new User[2]{ *userFrom, *userTo };

        Barigha* barigha = new Barigha(2, users);
        Dealer dealer;  
        PickUpPoint* pickUpPoint_1 = new PickUpPoint(1, "Brazil, Brazilia, st. Shin apt. 6", dealer);
        PickUpPoint* pickUpPoint_2 = new PickUpPoint(2, "Brazil, Brazilia, st. Shin apt. 4", dealer);

        Parcel<string>* parcel = new Parcel<string>("MESSAGE DATA");

        ParcelDTO<string>* parcelDTO = new ParcelDTO<string>(userFrom, userTo, parcel);

        ParcelDTO<string>* parcelDTOReceive = new ParcelDTO<string>();
        parcelDTOReceive->receive(nullptr);
        cout << "Data: " << parcelDTOReceive->getParcel()->getData() << endl;

        delete userFrom;
        delete userTo;
        delete[] users;
        delete barigha;
        delete pickUpPoint_1;
        delete pickUpPoint_2;
        delete parcel;
        delete parcelDTO;
        delete parcelDTOReceive;
    }
};

#endif // HOME_H
