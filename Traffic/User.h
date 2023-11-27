#ifndef User_h
#define User_h

#include <iostream>
#include <string>
using namespace std;

struct User
{
private:
	string Firstname;
	string Surname;
	string Midname;

	string Adress;
	string Phone;

public:
	User();
	User(string, string, string, string, string);
	~User();
	inline void SetFirstname(string);
	inline void SetSurname(string);
	inline void SetMidname(string);
	inline void SetAdress(string);
	inline void SetPhone(string);
	inline string GetFirstname() const;
	inline string GetSurname() const;
	inline string GetMidname() const;
	inline string GetAdress() const;
	inline string GetPhone() const;

};


User::User()
{
	Firstname = "Michael";
	Surname = "Perez";
	Midname = "Jr.";
	Adress = "Brazil, Brazilia, st. SHIS EQI apt. 7/9";
	Phone = "+5532334242244";
}

User::User(string firstname, string surname, string midname, string adress, string phone)
{
	Firstname = firstname;
	Surname = surname;
	Midname = midname;
	Adress = adress;
	Phone = phone;
}

User::~User()
{
	Firstname.clear();
	Surname.clear();
	Midname.clear();
	Adress.clear();
	Phone.clear();
}

inline void User::SetFirstname(string firstname)
{
	Firstname = firstname;
}

inline void User::SetSurname(string surname)
{
	Surname = surname;
}

inline void User::SetMidname(string midname)
{
	Midname = midname;
}

inline void User::SetAdress(string adress)
{
	Adress = adress;
}

inline void User::SetPhone(string phone)
{
	Phone = phone;
}


inline string User::GetFirstname()const
{
	return Firstname;
}

inline string User::GetSurname()const
{
	return Surname;
}

inline string User::GetMidname()const
{
	return Midname;
}

inline string User::GetAdress()const
{
	return Adress;
}

inline string User::GetPhone()const
{
	return Phone;
}


#endif 