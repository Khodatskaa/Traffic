#ifndef BARIGHA_H
#define BARIGHA_H

#include "User.h"
#include "Parcel.h"

struct Barigha 
{
private:
    int numUsers;
    User* users;

public:
    Barigha(int numUsers, User* users) : numUsers(numUsers), users(users) {}

    ~Barigha() 
    {
        delete[] users;
    }

    void processParcel(Parcel<string>* parcel) 
    {
        std::cout << "Processing parcel at Barigha for user: " << users[1].GetFirstname() << std::endl;

        std::cout << "Parcel details - Data: " << parcel->getData() << ", Width: " << parcel->width
            << ", Length: " << parcel->length << ", Weight: " << parcel->weight
            << ", Cost: " << parcel->cost << std::endl;

        std::cout << "Sending notification to recipient: " << users[1].GetPhone() << std::endl;
    }
};

#endif // BARIGHA_H
