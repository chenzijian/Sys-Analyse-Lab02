#ifndef _MPAYMENT_H_
#define _MPAYMENT_H_

#include "Data_Struct.h"

class MPayment
{
private:
	Payer	Payment_Payer;
	Room	Payment_Room[];		//many rooms with diff Date, same hotel_ID
	string	Payment_UserName[];
	string	Payment_UserSpecialRequest[];
	int		Payment_RoomCount;
	
public:
	MPayment()
	{ Payment_RoomCount = 0; };
	~MPayment();

	//set Basket part
	void MPayment_AddRoom(Room Room_Booked, string Username, string UserRequest)
	{
		Payment_RoomCount++;
		
		Payment_Room[Payment_RoomCount-1].Room_ID				= Room_Booked.Room_ID;
		Payment_Room[Payment_RoomCount-1].Hotel_ID				= Room_Booked.Hotel_ID;
		Payment_Room[Payment_RoomCount-1].RoomType_Name			= Room_Booked.RoomType_Name;
		Payment_Room[Payment_RoomCount-1].RoomType_Description	= Room_Booked.RoomType_Description;
		Payment_Room[Payment_RoomCount-1].Room_MaxGuestNum		= Room_Booked.Room_MaxGuestNum;
		Payment_Room[Payment_RoomCount-1].Room_Date				= Room_Booked.Room_Date;
		Payment_Room[Payment_RoomCount-1].Room_Price			= Room_Booked.Room_Price;
		
		Payment_UserName[Payment_RoomCount-1] = Username;
		Payment_UserSpecialRequest[Payment_RoomCount-1] = UserRequest;
	}
	void MPayment_SetPayer(string Payer_Name, string Payer_Email, string Payer_CardID, string Payer_CardType)
	{
		Payment_Payer.Payer_Name = Payer_Name;
		Payment_Payer.Payer_Email = Payer_Email;
		Payment_Payer.Payer_CardID = Payer_CardID;
		Payment_Payer.Payer_CardType = Payer_CardType;
	}

	//get Basket info part
	void MPayment_GetRoomInfo(Hotel* hotel, Room* room, int &roomCount)
	{
		/*
		1.
		db.query(HotelTable)  
			Payment_Room[0].BookedRoom_Hotel_ID == Hotel_ID

		get "hotel_temp"
		
		2.
		hotel = hotel_temp
		room = &Payment_Room[0]
		roomCount = Payment_RoomCount
		*/
	}
	void MPayment_GetPayer(Payer* payer)
	{
		payer->Payer_Name = Payment_Payer.Payer_Name;
		payer->Payer_Email = Payment_Payer.Payer_Email;
		payer->Payer_CardID = Payment_Payer.Payer_CardID;
		payer->Payer_CardType = Payment_Payer.Payer_CardType;
	}

	//Clear payment
	void MPayment_ClearAll()
	{
		Payment_RoomCount = 0;
	}
	//confirm payment, success ->return true
	bool MPayment_Confirm()
	{
		for (int i=0; i<Payment_RoomCount; i++)
		{
		/*
		1.
		db.query(HotelTable)  
			Payment_Room[i].Hotel_ID == Hotel_ID

		get "hotel name"

		2. Set a file(or text) with  hotel \ room \ payer \ booked room
		fwrite("hotel info......hotel name....:\n
				room info.......Payment_Room[i]....:\n
				payer info......Payment_Payer....:\n
				booked room user....Payment_UserName[i]...:\n");
		*/
		}
		return true;
	}
}

#endif