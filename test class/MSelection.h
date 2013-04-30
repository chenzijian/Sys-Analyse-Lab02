#ifndef _MSELECTION_H_
#define _MSELECTION_H_

#include "Data_Struct.h"

class MSelection
{
private:
	SelectSearch UserSelection;

public:
	MSelection();
	~MSelection();

	void	MSelection_Hotel(SelectSearch UserSelection, Hotel* HotelResult, int &HotelCount)
	{
		/*
		1. get and SAVE UserSelection

		2. db.query(Hotel_Table)
			UserSelection.Country	== Hotel_Country		and
			UserSelection.Region	== Hotel_Region			and
			UserSelection.StarsMin	<= Hotel_Stars			and
			UserSelection.GuestNum	<= Hotel_MaxGuestNum	and

		get query table "HotelTable" from db

		3. get HotelCount
		MSearch_HotelResult[i].Hotel_ID = HotelTable[i].Hotel_ID
		MSearch_HotelResult[i].Hotel_Name = HotelTable[i].Hotel_Name
		........
		MSearch_HotelResult[i].Hotel_Region = HotelTable[i].Hotel_Region

		4. MSearch_HotelResult --> HotelResult
		   MSearch_HotelCount --> HotelCount
		*/
	}
	void	MSelection_Room(Hotel SearchHotel, Room* RoomResult, int &RoomCount)
	{
		/*
		1. get SearchHotel, use SAVED UserSelection

		2. db.query(Room_Table)
			SearchHotel.Hotel_ID	== Hotel_ID			and
			UserSelection.StartDate	<= Room_Date		and
			UserSelection.EndDate	>= Room_Date		and
			UserSelection.GuestNum	<= Room_MaxGuestNum

		get query table "RoomTable" from db

		3. get RoomCount
		MSearch_RoomResult[i].Room_ID = RoomTable[i].Room_ID
		......
		MSearch_RoomResult[i].Room_Price = RoomTable[i].Room_Price

		4. MSearch_RoomResult --> RoomResult
		   MSearch_RoomCount --> RoomCount
		*/
	}
}

#endif