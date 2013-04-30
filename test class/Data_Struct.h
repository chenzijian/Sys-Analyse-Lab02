#ifndef _DATA_STRUCT_H_
#define _DATA_STRUCT_H_

//Data struct : Select Search Struct
struct SelectStruct
{
	string	Country;
	string	Region;
	string	StartDate;
	string	EndDate;
	int		DaysNum
	int		StarsMin;
	int		GuestNum;
}

//Data struct : One Hotel
struct Hotel
{
	int		Hotel_ID;
	int		Hotel_Stars;
	int		Hotel_MaxGuestNum;	//one room max guest
	string	Hotel_Name;
	string	Hotel_Country;
	string	Hotel_Region;
	string	Hotel_Description;
}

//Data struct : One Room
//one Room_ID ->> Date\Price
struct Room
{
	int		Hotel_ID;
	int		Room_ID;
	int		Room_MaxGuestNum;
	float	Room_Price;
	string	RoomType_Name;
	string	RoomType_Description;
	string	Room_Date;
}

//Data struct : One Payer Information
struct Payer
{
	string	Payer_Name;
	string	Payer_Email;
	string	Payer_CardID;
	string	Payer_CardType;
}

#endif