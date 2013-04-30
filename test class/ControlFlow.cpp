#include "MPayment.h"
#include "MSelection.h"
#include "MSearch.h"
#include "Data_Struct.h"

void ControlFlow_main()
{
	//1. Search or Selection
	MSearch		searchClass;
	MSelection	selectionClass;
	MPayment	paymentClass;
	Hotel		*HotelList;
	int			HotelCount;
	Room		*RoomList;
	int			RoomCount;
	
	bool		isSelect = false;	//modes
	
	paymentClass.ClearAll();
	if (isSelect){
		//1) get inputstring from VIEW.....
		string inputstring = "";
		//2) get hotel list
		searchClass.MSearch_Hotel(inputstring, HotelList, HotelCount);
		//3) show hotel list on VIEW
		//4) get hotel choice Num on VIEW
		int NumH = 0;
		//5) get room list
		searchClass.MSearch_Room(HotelList[Num], RoomList, RoomCount);
		//6) get room choices NumR[i] on VIEW
		int n=10;
		int NumR[10];
		//7) get User info
		string username,userrequest;
		//8) add to MPayment
		for (int i=0;i<n;i++)
			paymentClass.MPayment_AddRoom(RoomList[NumR[i]], username, userrequest);
	}
	else {
		//1) get select struct from VIEW.....
		SelectStruct input={.......};
		//2) get hotel list
		selectionClass.MSelection_Hotel(input, HotelList, HotelCount);
		//3) show hotel list on VIEW
		//4) get hotel choice Num on VIEW
		int NumH = 0;
		//5) get room list
		selectionClass.MSelection_Room(HotelList[Num], RoomList, RoomCount);
		//6) get room choices NumR[i] on VIEW
		int n=10;
		int NumR[10];
		//7) get User info
		string username,userrequest;
		//8) add to MPayment
		for (int i=0;i<n;i++)
			paymentClass.MPayment_AddRoom(RoomList[NumR[i]], username, userrequest);
	}
	
	//9) set payer info
	paymentClass.MPayment_SetPayer(Payer_Name, Payer_Email, Payer_CardID, Payer_CardType);
	//10) confirm
	paymentClass.MPayment_Confirm();
	
	//finish one bill
}