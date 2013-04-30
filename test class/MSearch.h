#ifndef _MSEARCH_H_
#define _MSEARCH_H_

#include "Data_Struct.h"

class MSearch
{
private:	
	string	SearchStr;

	/* temp var:
	Hotel	*MSearch_HotelResult;
	int		MSearch_HotelCount;

	Room	*MSearch_RoomResult;
	int		MSearch_RoomCount;
	*/

public:
	MSearch();
	~MSearch();

	void	MSearch_Hotel(string SearchStr, Hotel* HotelResult, int &HotelCount)
	{
		/*
		1. get and SAVE SearchStr

		2. db.query(Hotel_Table)
			SearchStr == Hotel_Name		or
			SearchStr == Hotel_Country	or
			SearchStr == Hotel_Region
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
	void	MSearch_Room(Hotel SearchHotel, Room* RoomResult, int &RoomCount)
	{
		/*
		1. get SearchHotel

		2. db.query(Room_Table)
			SearchHotel.Hotel_ID == Hotel_ID
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