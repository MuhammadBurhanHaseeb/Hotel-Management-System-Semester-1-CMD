# include<iostream>
# include <cmath>
# include <stdlib.h>
# include <conio.h>
using namespace std;
void header();
void loginHeader( );
string userMenu();
string menu();
void guestlist ( int id ,string name , string addres ,double contact ,string email , string gender );
void roomlist (int id , int roomNo , string roomType , string roomStatus , int roomRate);
void typediscount(int id , string discountType , string discountStatus , string discountRate);
void checkInList(int id , string name , string addres ,double contact ,string email , string gender ,int adult ,int children ,string checkInDate , string checkOutDate , int days , int roomNo , string roomType , string roomStatus , int roomRate ,string discountType , string discountStatus  , int discountRate , float balance);
void checkOutList(int id , string name , string addres ,double contact ,string email , string gender ,int adult ,int children ,string checkInDate , string checkOutDate , int days , int roomNo , string roomType , string roomStatus , int roomRate ,string discountType , string discountStatus  , int discountRate , float balance);
void reservationList(int id , string name , string addres ,double contact ,string email , string gender ,int adult ,int children ,string checkInDate , string checkOutDate , int days , int roomNo , string roomType , string roomStatus , int roomRate ,string discountType , string discountStatus  , int discountRate , float balance);
void availableRoom (int id , int roomNo , string roomType , string roomStatus , int roomRate);
void clearScreen();

main ()
{
     string name , password ;

    

    int Gid1,Gid2,Gid3,Gid4;// guest id
    string name1,name2,name3,name4;
    string addres1,addres2,addres3,addres4;
    string gender1,gender2,gender3,gender4;
    string email1,email2,email3,email4;  
    double contact1,contact2,contact3,contact4;


    int Rid1,Rid2,Rid3,Rid4;// room id
    int roomNO1,roomNO2,roomNO3,roomNO4;
    string Troom1,Troom2,Troom3,Troom4;//room type
    string Sroom1,Sroom2,Sroom3,Sroom4;//room status
    int roomRate1,roomRate2,roomRate3,roomRate4;


    int Did1,Did2,Did3,Did4;//discount id
    string Tdiscount1,Tdiscount2,Tdiscount3,Tdiscount4;//discount type
    string Sdiscount1,Sdiscount2,Sdiscount3,Sdiscount4;// discount status
    string discountRate1,discountRate2,discountRate3,discountRate4;

    float Ibalance1 , Ibalance2 , Ibalance3, Ibalance4;// check in balance
    float Obalance1 , Obalance2 , Obalance3, Obalance4;// check out balance
    float Rbalance1 , Rbalance2 , Rbalance3, Rbalance4;// reservation balance
    
     
//(TCI stands for TRANSACTION CHECK IN )

    int TCIGid1,TCIGid2,TCIGid3,TCIGid4;// transaction check in guest id
    string TCIname1,TCIname2,TCIname3,TCIname4;// NAME
    int TCIroomNO1,TCIroomNO2,TCIroomNO3,TCIroomNO4;// ROOM NO
    string TCITroom1,TCITroom2,TCITroom3,TCITroom4;// ROOM TYPE
    int TCIroomRate1,TCIroomRate2,TCIroomRate3,TCIroomRate4;// RATE OF ROOM
    string TCIdate1,TCIdate2,TCIdate3,TCIdate4;// CHECK IN DATE
    string TCIodate1,TCIodate2,TCIodate3,TCIodate4;//check in ke form mai check out date
    int TCIa1,TCIa2,TCIa3,TCIa4;// no of adult
    int TCIc1,TCIc2,TCIc3,TCIc4;// no of children
    string TCISdiscount1,TCISdiscount2,TCISdiscount3,TCISdiscount4;// DISCOUNT STATUS
    int  TCIdiscountRate1,TCIdiscountRate2,TCIdiscountRate3,TCIdiscountRate4;// DISCOUNT RATE
    string TCITdiscount1,TCITdiscount2,TCITdiscount3,TCITdiscount4;// DISCOUNT TYPE
    string TCIaddres1,TCIaddres2,TCIaddres3,TCIaddres4;// ADREESS OF GUEST
    double TCIcontact1,TCIcontact2,TCIcontact3,TCIcontact4;// CONTACT OF THE GUEST
    string TCIemail1,TCIemail2,TCIemail3,TCIemail4;// EMAIL OF THE GUEST
    string TCIgender1,TCIgender2,TCIgender3,TCIgender4;// GENDER OF THE GUEST
    string TCISroom1,TCISroom2,TCISroom3,TCISroom4;// STATUS OF THE ROOM
    int Idays1,Idays2,Idays3,Idays4;// no of days for living in hotel IN CHECK IN FORM


    //(TCO stands for TRANSACTION CHECK OUT FORM)

    int TCOGid1,TCOGid2,TCOGid3,TCOGid4;// transaction check in guest id
    string TCOname1,TCOname2,TCOname3,TCOname4;// NAME
    int TCOroomNO1,TCOroomNO2,TCOroomNO3,TCOroomNO4;// ROOM NO
    string TCOTroom1,TCOTroom2,TCOTroom3,TCOTroom4;// ROOM TYPE
    int TCOroomRate1,TCOroomRate2,TCOroomRate3,TCOroomRate4;// RATE OF ROOM
    string TCOdate1,TCOdate2,TCOdate3,TCOdate4;// CHECK OUT  DATE
    string TCOidate1,TCOidate2,TCOidate3,TCOidate4;//check OUT ke form mai check IN date
    int TCOa1,TCOa2,TCOa3,TCOa4;// no of adult
    int TCOc1,TCOc2,TCOc3,TCOc4;// no of children
    string TCOSdiscount1,TCOSdiscount2,TCOSdiscount3,TCOSdiscount4;// DISCOUNT STATUS
    int  TCOdiscountRate1,TCOdiscountRate2,TCOdiscountRate3,TCOdiscountRate4;// DISCOUNT RATE
    string TCOTdiscount1,TCOTdiscount2,TCOTdiscount3,TCOTdiscount4;// DISCOUNT TYPE
    string TCOaddres1,TCOaddres2,TCOaddres3,TCOaddres4;// ADRESSS OF THE GUEST
    double TCOcontact1,TCOcontact2,TCOcontact3,TCOcontact4;// CONTACT OF THE GUEST
    string TCOemail1,TCOemail2,TCOemail3,TCOemail4;// EMAIL OF THE PERSON
    string TCOgender1,TCOgender2,TCOgender3,TCOgender4;// GENDER
    string TCOSroom1,TCOSroom2,TCOSroom3,TCOSroom4;// STATUS OF THE ROOM
    int Odays1,Odays2,Odays3,Odays4;//NO OF DAYS IN CHECK OUT FORM

// A stans for AVAILABLE

    int ARid1,ARid2,ARid3,ARid4;
    int AroomNO1,AroomNO2,AroomNO3,AroomNO4;
    string ATroom1,ATroom2,ATroom3,ATroom4;
    string ASroom1,ASroom2,ASroom3,ASroom4;
    int AroomRate1,AroomRate2,AroomRate3,AroomRate4;
        
            //  R stands for RESERVATION FORM



    int RGid1,RGid2,RGid3,RGid4;
    string Rname1,Rname2,Rname3,Rname4;
    int RroomNO1,RroomNO2,RroomNO3,RroomNO4;
    string RTroom1,RTroom2,RTroom3,RTroom4;
    int RroomRate1,RroomRate2,RroomRate3,RroomRate4;
    string Rodate1,Rodate2,Rodate3,Rodate4;
    string Ridate1,Ridate2,Ridate3,Ridate4;
    int Ra1,Ra2,Ra3,Ra4;
    int Rc1,Rc2,Rc3,Rc4;
    string RSdiscount1,RSdiscount2,RSdiscount3,RSdiscount4;
    int  RdiscountRate1,RdiscountRate2,RdiscountRate3,RdiscountRate4;
    string RTdiscount1,RTdiscount2,RTdiscount3,RTdiscount4;
    string Raddres1,Raddres2,Raddres3,Raddres4;
    double Rcontact1,Rcontact2,Rcontact3,Rcontact4;
    string Remail1,Remail2,Remail3,Remail4;
    string Rgender1,Rgender2,Rgender3,Rgender4;
    string RSroom1,RSroom2,RSroom3,RSroom4;
    int Rdays1,Rdays2,Rdays3,Rdays4; 

int reservation_count = 1 ;
int availableRoom_count = 1;
int checkOut_count = 1;
int checkIn_count = 1;
int discount_count = 1;
int room_count = 1;
int guest_count = 1;
string option  = "d";
while ( option != "13")
{
    cout<<"enter the name of the user";
    cin>>name;
    cout<<"enter the password of the user";
    cin>>password ;
    
    if (name == "manager" && password == "managercode")
    {
        option = menu();
        cout<<option;
        if (option == "1")
        {
           if (guest_count = 1)
           {
              cout<<"enter the id of the guest..";
              cin>>Gid1;
              cout<<"enter the name of the guest...";
              cin>>name1;
              cout<<"enter the address of guest... ";
              cin>>addres1;
              cout<<"enter the contact of the guest..";
              cin>>contact1;
              cout<<"enter the email address of the guest";
              cin>>email1;
              cout<<"enter the gender OF The guest..";
              cin>>gender1;
               guest_count = 1 + 1;
           }
           else if (guest_count = 2)
           {
                cout<<"enter the id of the guest..";
              cin>>Gid2;
              cout<<"enter the name of the guest...";
              cin>>name2;
              cout<<"enter the address of guest... ";
              cin>>addres2;
              cout<<"enter the contact of the guest..";
              cin>>contact2;
              cout<<"enter the email address of the guest";
              cin>>email2;
              cout<<"enter the gender OF The guest..";
              cin>>gender2;
               guest_count = 1 + 2;
           }
           else if (guest_count = 3)
           {
                cout<<"enter the id of the guest..";
              cin>>Gid3;
              cout<<"enter the name of the guest...";
              cin>>name3;
              cout<<"enter the address of guest... ";
              cin>>addres3;
              cout<<"enter the contact of the guest..";
              cin>>contact3;
              cout<<"enter the email address of the guest";
              cin>>email3;
              cout<<"enter the gender OF The guest..";
              cin>>gender3;
               guest_count = 1 + 3;
           }
           else if (guest_count = 4)
           {
                cout<<"enter the id of the guest..";
              cin>>Gid4;
              cout<<"enter the name of the guest...";
              cin>>name4;
              cout<<"enter the address of guest... ";
              cin>>addres4;
              cout<<"enter the contact of the guest..";
              cin>>contact4;
              cout<<"enter the email address of the guest";
              cin>>email4;
              cout<<"enter the gender OF The guest..";
              cin>>gender4;
               guest_count = 1 + 4;
           }
            else if (guest_count = 5)
           {
               cout<<"dont have a space"<<endl;
           }

        }// option 1

        clearScreen();

        if (option =="2")
        {
         cout<<"ID"<<"\t"<<"NAME"<<"\t"<<"ADDRESS"<<"\t"<<"CONTACT"<<"\t"<<"EMAIL"<<"\t"<<"GENDER"<<endl;
          guestlist (  Gid1 , name1 , addres1 , contact1 , email1 ,  gender1 );
          guestlist (  Gid2 , name2 ,  addres2 , contact2 , email2 , gender2 );
          guestlist (  Gid3 , name3 ,  addres3 , contact3 , email3 ,  gender3 );
          guestlist (  Gid4 , name4 ,  addres4 , contact4 , email4 ,  gender4 );
        }// option 2

        clearScreen();

        if (option == "3")
        {
            if (room_count ==1)
            {
              cout<<"enter the id of the room...";
              cin>>Rid1;
              cout<<"enter the room no... ";
              cin>>roomNO1;
              cout<<"enter the room type..";
              cin>>Troom1;
              cout<<"enter the room status...";
              cin>>Sroom1;
              cout<<"enter the room rate..";
              cin>>roomRate1;
              room_count = 1 + 1;
            }
            else if (room_count ==2)
            {
              cout<<"enter the id of the room...";
              cin>>Rid2;
              cout<<"enter the room no... ";
              cin>>roomNO2;
              cout<<"enter the room type..";
              cin>>Troom2;
              cout<<"enter the room status...";
              cin>>Sroom2;
              cout<<"enter the room rate..";
              cin>>roomRate2;
              room_count = 1 + 2;
            }
           else  if (room_count ==3)
            {
              cout<<"enter the id of the room...";
              cin>>Rid3;
              cout<<"enter the room no... ";
              cin>>roomNO3;
              cout<<"enter the room type..";
              cin>>Troom3;
              cout<<"enter the room status...";
              cin>>Sroom3;
              cout<<"enter the room rate..";
              cin>>roomRate3;
              room_count = 1 + 3;
            }
           else  if (room_count ==4)
            {
              cout<<"enter the id of the room...";
              cin>>Rid4;
              cout<<"enter the room no... ";
              cin>>roomNO4;
              cout<<"enter the room type..";
              cin>>Troom4;
              cout<<"enter the room status...";
              cin>>Sroom4;
              cout<<"enter the room rate..";
              cin>>roomRate4;
              room_count = 1 + 4;
            }
            else if (room_count ==5)
            {
              cout<<"dont have a space";
            }


        }// option 3

        clearScreen();

        if (option == "4")
        {
            cout<<"ID"<<"\t"<<"ROOM NO"<<"\t"<<"ROOM TYPE"<<"\t"<<"ROOM STATUS"<<"\t"<<"ROOM STATUS"<<endl;
            roomlist (Rid1 , roomNO1 , Troom1 , Sroom1 , roomRate1); 
            roomlist (Rid2 , roomNO2 , Troom2 , Sroom2 , roomRate2); 
            roomlist (Rid3 , roomNO3 , Troom3 , Sroom3 , roomRate3); 
            roomlist (Rid4 , roomNO4 , Troom4 , Sroom4 , roomRate4);   
        } // option 4

        clearScreen();

        if (option == "5")
        {
            if (discount_count == 1)
            {
                 cout<<"enter the id of the discount...";
                 cin>>Did1;
                 cout<<"enter the discount type..";
                 cin>>Tdiscount1;
                 cout<<"enter the discount status...";
                 cin>>Sdiscount1;
                 cout<<"enter the discount  rate..";
                 cin>>discountRate1;
                 discount_count == 1 + 1;
            }
            else if (discount_count == 2)
            {
                 cout<<"enter the id of the discount...";
                 cin>>Did2;
                 cout<<"enter the discount type..";
                 cin>>Tdiscount2;
                 cout<<"enter the discount status...";
                 cin>>Sdiscount2;
                 cout<<"enter the discount  rate..";
                 cin>>discountRate2;
                 discount_count == 1 + 2;
            }
            else if (discount_count == 3)
            {
                 cout<<"enter the id of the discount...";
                 cin>>Did3;
                 cout<<"enter the discount type..";
                 cin>>Tdiscount3;
                 cout<<"enter the discount status...";
                 cin>>Sdiscount3;
                 cout<<"enter the discount  rate..";
                 cin>>discountRate3;
                 discount_count == 1 + 3;
            }
            else if (discount_count == 4)
            {
                 cout<<"enter the id of the discount...";
                 cin>>Did4;
                 cout<<"enter the discount type..";
                 cin>>Tdiscount4;
                 cout<<"enter the discount status...";
                 cin>>Sdiscount4;
                 cout<<"enter the discount  rate..";
                 cin>>discountRate4;
                 discount_count == 1 + 4;
            }
            else if (discount_count == 5)
            {
                 cout<<"dont space"<<endl;
            }

        }// option 5

        clearScreen();

        if (option == "6")
        {
            cout<<"ID"<<"\t"<<"DISCOUNT TYPE"<<"\t"<<"DISCOUNT  STATUS"<<"\t"<<"DISCOUNT  RATE"<<endl;
            typediscount(Did1 , Tdiscount1 , Sdiscount1 , discountRate1);
            typediscount(Did2 , Tdiscount2 , Sdiscount2 , discountRate2);
            typediscount(Did3 , Tdiscount3 , Sdiscount3 , discountRate3);
            typediscount(Did4 , Tdiscount4 , Sdiscount4 , discountRate4);
        }// option 6

        clearScreen();

        if (option == "7" )
        {
            if (checkIn_count == 1)
            {
                cout<<"enter the  transaction id of the guest..";
                  cin>>TCIGid1;
                  cout<<"enter the name of the guest...";
                  cin>>TCIname1;
                  cout<<"enter the address of guest... ";
                  cin>>TCIaddres1;
                  cout<<"enter the contact of the guest..";
                  cin>>TCIcontact1;
                  cout<<"enter the email address of the guest";
                  cin>>TCIemail1;
                  cout<<"enter the gender OF The guest..";
                  cin>>TCIgender1;
                  cout<<"enter the no of adult with guets...";
                  cin>>TCIa1;
                  cout<<"enter the no of childre with the guest..";
                  cin>>TCIc1;
                  cout<<"enter the check in date of the guest...";
                  cin>>TCIdate1;
                  cout<<"enter the check out date of the guest..";
                  cin>>TCIodate1;
                  cout<<"enter the no of days";
                  cin>>Idays1;
                  cout<<"enter the the room no ...";
                  cin>>TCIroomNO1;
                  cout<<"enter the room type....";
                  cin>>TCITroom1;
                  cout<<"enter the room status....";
                  cin>>TCISroom1;
                  cout<<"enter the room rate....";
                  cin>>TCIroomRate1;
                  cout<<"enter the discount status...";
                  cin>>TCISdiscount1;
                  cout<<"enter the discount rate ....";
                  cin>>TCIdiscountRate1;
                  cout<<"enter the discount type ...";
                  cin>>TCITdiscount1;
                 
                  if ((TCISdiscount1 =="vip" && TCISroom1 =="vip")  && (TCITdiscount1 == "four" && TCITroom1 =="four"))
                  {
                      
                      Ibalance1 = (TCIroomRate1 * Idays1 )* (TCIdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Ibalance1 ;
                  }
                  else if ((TCISdiscount1 =="vip" && TCISroom1 =="vip")  && (TCITdiscount1 == "three" && TCITroom1 =="three"))
                  {
                      
                      Ibalance1 = (TCIroomRate1 * Idays1 )* (TCIdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Ibalance1 ;
                  }
                  else if ((TCISdiscount1 =="vip" && TCISroom1 =="vip")  && (TCITdiscount1 == "two" && TCITroom1 =="two"))
                  {
                    
                      Ibalance1 = (TCIroomRate1 * Idays1 )* (TCIdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Ibalance1;
                  }
                  else if ((TCISdiscount1 =="vip" && TCISroom1 =="vip")  && (TCITdiscount1 == "one" && TCITroom1 =="one"))
                  {
                    
                      Ibalance1 = (TCIroomRate1 * Idays1 )* (TCIdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Ibalance1;
                  }
                  else if ((TCISdiscount1 =="regular" && TCISroom1 =="regular")  && (TCITdiscount1 == "four" && TCITroom1 =="four"))
                  {
                      
                      Ibalance1 = (TCIroomRate1 * Idays1 )* (TCIdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Ibalance1;
                  }
                  else if ((TCISdiscount1 =="regular" && TCISroom1 =="regular")  && (TCITdiscount1 == "three" && TCITroom1 =="three"))
                  {
                      
                      Ibalance1 = (TCIroomRate1 * Idays1 )* (TCIdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Ibalance1;
                  }
                  else if ((TCISdiscount1 =="regular" && TCISroom1 =="regular")  && (TCITdiscount1 == "two" && TCITroom1 =="two"))
                  {
        
                      Ibalance1 = (TCIroomRate1 * Idays1 )* (TCIdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Ibalance1;
                  }
                  else if ((TCISdiscount1 =="regular" && TCISroom1 =="regular")  && (TCITdiscount1 == "one" && TCITroom1 =="one"))
                  {
            
                      Ibalance1 = (TCIroomRate1 * Idays1 )* (TCIdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Ibalance1;
                  }
                  else if ((TCISdiscount1 =="none" && TCISroom1 =="none")  && (TCITdiscount1 == "four" && TCITroom1 =="four"))
                  {
    
                      Ibalance1 = (TCIroomRate1 * Idays1 );
                      cout<<"the balance after the discount"<<Ibalance1;
                  }
                  else if ((TCISdiscount1 =="none" && TCISroom1 =="none")  && (TCITdiscount1 == "three" && TCITroom1 =="three"))
                  {
            
                      Ibalance1 = (TCIroomRate1 * Idays1 );
                      cout<<"the balance after the discount"<<Ibalance1;
                  }
                  else if ((TCISdiscount1 =="none" && TCISroom1 =="none")  && (TCITdiscount1 == "two" && TCITroom1 =="two"))
                  {
        
                      Ibalance1 = (TCIroomRate1 * Idays1 );
                      cout<<"the balance after the discount"<<Ibalance1;
                  }
                  else if ((TCISdiscount1 =="none" && TCISroom1 =="none")  && (TCITdiscount1 == "one" && TCITroom1 =="one"))
                  {
                    
                      Ibalance1 = (TCIroomRate1 * Idays1 );
                      cout<<"the balance after the discount"<<Ibalance1;
                  }
                  checkIn_count == 1+ 1;
            }
            else if (checkIn_count == 2)
            {
                  cout<<"enter the  transaction id of the guest..";
                  cin>>TCIGid2;
                  cout<<"enter the name of the guest...";
                  cin>>TCIname2;
                  cout<<"enter the address of guest... ";
                  cin>>TCIaddres2;
                  cout<<"enter the contact of the guest..";
                  cin>>TCIcontact2;
                  cout<<"enter the email address of the guest";
                  cin>>TCIemail2;
                  cout<<"enter the gender OF The guest..";
                  cin>>TCIgender2;
                  cout<<"enter the no of adult with guets...";
                  cin>>TCIa2;
                  cout<<"enter the no of childre with the guest..";
                  cin>>TCIc2;
                  cout<<"enter the check in date of the guest...";
                  cin>>TCIdate2;
                  cout<<"enter the check out date of the guest..";
                  cin>>TCIodate2;
                  cout<<"enter the no of days";
                  cin>>Idays2;
                  cout<<"enter the the room no ...";
                  cin>>TCIroomNO2;
                  cout<<"enter the room type....";
                  cin>>TCITroom2;
                  cout<<"enter the room status....";
                  cin>>TCISroom2;
                  cout<<"enter the room rate....";
                  cin>>TCIroomRate2;
                  cout<<"enter the discount status...";
                  cin>>TCISdiscount2;
                  cout<<"enter the discount rate ....";
                  cin>>TCIdiscountRate2;
                  cout<<"enter the discount type ...";
                  cin>>TCITdiscount2;
                 
                  if ((TCISdiscount2 =="vip" && TCISroom2 =="vip")  && (TCITdiscount2 == "four" && TCITroom2 =="four"))
                  {
                      
                      Ibalance2 = (TCIroomRate2 * Idays2 )* (TCIdiscountRate2/100.0);
                      cout<<"the balance after the discount"<< Ibalance2;
                  }
                  else if ((TCISdiscount2 =="vip" && TCISroom2 =="vip")  && (TCITdiscount2 == "three" && TCITroom2 =="three"))
                  {
                      
                      Ibalance2 = (TCIroomRate2 * Idays2 )* (TCIdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Ibalance2;
                  }
                  else if ((TCISdiscount2 =="vip" && TCISroom2 =="vip")  && (TCITdiscount2 == "two" && TCITroom2 =="two"))
                  {
                    
                      Ibalance2 = (TCIroomRate2 * Idays2 )* (TCIdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Ibalance2;
                  }
                  else if ((TCISdiscount2 =="vip" && TCISroom2 =="vip")  && (TCITdiscount2 == "one" && TCITroom2 =="one"))
                  {
                    
                      Ibalance2 = (TCIroomRate2 * Idays2 )* (TCIdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Ibalance2;
                  }
                  else if ((TCISdiscount2 =="regular" && TCISroom2 =="regular")  && (TCITdiscount2 == "four" && TCITroom2 =="four"))
                  {
                      
                      Ibalance2 = (TCIroomRate2 * Idays2 )* (TCIdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Ibalance2;
                  }
                  else if ((TCISdiscount2 =="regular" && TCISroom2 =="regular")  && (TCITdiscount2 == "three" && TCITroom2 =="three"))
                  {
                      
                      Ibalance2 = (TCIroomRate2 * Idays2 )* (TCIdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Ibalance2;
                  }
                  else if ((TCISdiscount2 =="regular" && TCISroom2 =="regular")  && (TCITdiscount2 == "two" && TCITroom2 =="two"))
                  {
        
                      Ibalance2 = (TCIroomRate2 * Idays1 )* (TCIdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Ibalance2;
                  }
                  else if ((TCISdiscount2 =="regular" && TCISroom2 =="regular")  && (TCITdiscount2 == "one" && TCITroom2 =="one"))
                  {
            
                      Ibalance2 = (TCIroomRate2 * Idays2 )* (TCIdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Ibalance2;
                  }
                  else if ((TCISdiscount2 =="none" && TCISroom2 =="none")  && (TCITdiscount2 == "four" && TCITroom2 =="four"))
                  {
    
                      Ibalance2 = (TCIroomRate2 * Idays2 );
                      cout<<"the balance after the discount"<<Ibalance2;
                  }
                  else if ((TCISdiscount2 =="none" && TCISroom2 =="none")  && (TCITdiscount2 == "three" && TCITroom2 =="three"))
                  {
            
                      Ibalance2 = (TCIroomRate2 * Idays2 );
                      cout<<"the balance after the discount"<<Ibalance2;
                  }
                  else if ((TCISdiscount2 =="none" && TCISroom2 =="none")  && (TCITdiscount2 == "two" && TCITroom2 =="two"))
                  {
        
                      Ibalance2 = (TCIroomRate2 * Idays2 );
                      cout<<"the balance after the discount"<<Ibalance2;
                  }
                  else if ((TCISdiscount2 =="none" && TCISroom2 =="none")  && (TCITdiscount2 == "one" && TCITroom2 =="one"))
                  {
                    
                      Ibalance2 = (TCIroomRate2 * Idays2 );
                      cout<<"the balance after the discount"<<Ibalance2;
                   }
                    checkIn_count == 1+ 2;
            }
            else if ( checkIn_count == 3)
            {
                cout<<"enter the  transaction id of the guest..";
                  cin>>TCIGid3;
                  cout<<"enter the name of the guest...";
                  cin>>TCIname3;
                  cout<<"enter the address of guest... ";
                  cin>>TCIaddres3;
                  cout<<"enter the contact of the guest..";
                  cin>>TCIcontact3;
                  cout<<"enter the email address of the guest";
                  cin>>TCIemail3;
                  cout<<"enter the gender OF The guest..";
                  cin>>TCIgender3;
                  cout<<"enter the no of adult with guets...";
                  cin>>TCIa3;
                  cout<<"enter the no of children with the guest..";
                  cin>>TCIc3;
                  cout<<"enter the check in date of the guest...";
                  cin>>TCIdate3;
                  cout<<"enter the check out date of the guest..";
                  cin>>TCIodate3;
                  cout<<"enter the no of days";
                  cin>>Idays3;
                  cout<<"enter the the room no ...";
                  cin>>TCIroomNO3;
                  cout<<"enter the room type....";
                  cin>>TCITroom3;
                  cout<<"enter the room status....";
                  cin>>TCISroom3;
                  cout<<"enter the room rate....";
                  cin>>TCIroomRate3;
                  cout<<"enter the discount status...";
                  cin>>TCISdiscount3;
                  cout<<"enter the discount rate ....";
                  cin>>TCIdiscountRate3;
                  cout<<"enter the discount type ...";
                  cin>>TCITdiscount3;
                 
                  if ((TCISdiscount3 =="vip" && TCISroom3 =="vip")  && (TCITdiscount3 == "four" && TCITroom3 =="four"))
                  {
                      
                    Ibalance3 = (TCIroomRate3 * Idays3 )* (TCIdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Ibalance3 ;
                  }
                  else if ((TCISdiscount3 =="vip" && TCISroom3 =="vip")  && (TCITdiscount3 == "three" && TCITroom3 =="three"))
                  {
                      
                      Ibalance3 = (TCIroomRate3 * Idays3 )* (TCIdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Ibalance3 ;
                  }
                  else if ((TCISdiscount3 =="vip" && TCISroom3 =="vip")  && (TCITdiscount3 == "two" && TCITroom3 =="two"))
                  {
                    
                      Ibalance3 = (TCIroomRate3 * Idays3 )* (TCIdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Ibalance3 ;
                  }
                  else if ((TCISdiscount3 =="vip" && TCISroom3 =="vip")  && (TCITdiscount3 == "one" && TCITroom3 =="one"))
                  {
                    
                      Ibalance3 = (TCIroomRate3 * Idays3 )* (TCIdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Ibalance3 ;
                  }
                  else if ((TCISdiscount3 =="regular" && TCISroom3 =="regular")  && (TCITdiscount3 == "four" && TCITroom3 =="four"))
                  {
                      
                      Ibalance3 = (TCIroomRate3 * Idays3 )* (TCIdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Ibalance3 ;
                  }
                  else if ((TCISdiscount3 =="regular" && TCISroom3 =="regular")  && (TCITdiscount3 == "three" && TCITroom3 =="three"))
                  {
                      
                      Ibalance3 = (TCIroomRate3 * Idays3 )* (TCIdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Ibalance3 ;
                  }
                  else if ((TCISdiscount3 =="regular" && TCISroom3 =="regular")  && (TCITdiscount3 == "two" && TCITroom3 =="two"))
                  {
        
                      Ibalance3 = (TCIroomRate3 * Idays3 )* (TCIdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Ibalance3 ;
                  }
                  else if ((TCISdiscount3 =="regular" && TCISroom3 =="regular")  && (TCITdiscount3 == "one" && TCITroom3 =="one"))
                  {
            
                      Ibalance3 = (TCIroomRate3 * Idays3 )* (TCIdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Ibalance3 ;
                  }
                  else if ((TCISdiscount3 =="none" && TCISroom3 =="none")  && (TCITdiscount3 == "four" && TCITroom3 =="four"))
                  {
    
                      Ibalance3 = (TCIroomRate3 * Idays3 );
                      cout<<"the balance after the discount"<<Ibalance3 ;
                  }
                  else if ((TCISdiscount3 =="none" && TCISroom3 =="none")  && (TCITdiscount3 == "three" && TCITroom3 =="three"))
                  {
            
                      Ibalance3 = (TCIroomRate3 * Idays3 );
                      cout<<"the balance after the discount"<<Ibalance3 ;
                  }
                  else if ((TCISdiscount3 =="none" && TCISroom3 =="none")  && (TCITdiscount3 == "two" && TCITroom3 =="two"))
                  {
        
                      Ibalance3 = (TCIroomRate3 * Idays3 );
                      cout<<"the balance after the discount"<<Ibalance3 ;
                  }
                  else if ((TCISdiscount3 =="none" && TCISroom3 =="none")  && (TCITdiscount3 == "one" && TCITroom3 =="one"))
                  {
                    
                      Ibalance3 = (TCIroomRate3 * Idays3 );
                      cout<<"the balance after the discount"<<Ibalance3 ;
                  }
                 checkIn_count == 1+ 3;
            }
             else if ( checkIn_count == 4)
            {
                 cout<<"enter the  transaction id of the guest..";
                  cin>>TCIGid4;
                  cout<<"enter the name of the guest...";
                  cin>>TCIname4;
                  cout<<"enter the address of guest... ";
                  cin>>TCIaddres4;
                  cout<<"enter the contact of the guest..";
                  cin>>TCIcontact4;
                  cout<<"enter the email address of the guest";
                  cin>>TCIemail4;
                  cout<<"enter the gender OF The guest..";
                  cin>>TCIgender4;
                  cout<<"enter the no of adult with guets...";
                  cin>>TCIa4;
                  cout<<"enter the no of childre with the guest..";
                  cin>>TCIc4;
                  cout<<"enter the check in date of the guest...";
                  cin>>TCIdate4;
                  cout<<"enter the check out date of the guest..";
                  cin>>TCIodate4;
                  cout<<"enter the no of days";
                  cin>>Idays4;
                  cout<<"enter the the room no ...";
                  cin>>TCIroomNO4;
                  cout<<"enter the room type....";
                  cin>>TCITroom4;
                  cout<<"enter the room status....";
                  cin>>TCISroom4;
                  cout<<"enter the room rate....";
                  cin>>TCIroomRate4;
                  cout<<"enter the discount status...";
                  cin>>TCISdiscount4;
                  cout<<"enter the discount rate ....";
                  cin>>TCIdiscountRate4;
                  cout<<"enter the discount type ...";
                  cin>>TCITdiscount4;
                 
                  if ((TCISdiscount4 =="vip" && TCISroom4 =="vip")  && (TCITdiscount4 == "four" && TCITroom4 =="four"))
                  {
                      
                      Ibalance4 = (TCIroomRate4 * Idays4 )* (TCIdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Ibalance4; 
                  }
                  else if ((TCISdiscount4 =="vip" && TCISroom4 =="vip")  && (TCITdiscount4 == "three" && TCITroom4 =="three"))
                  {
                      
                      Ibalance4 = (TCIroomRate4 * Idays4 )* (TCIdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Ibalance4; 
                  }
                  else if ((TCISdiscount4 =="vip" && TCISroom4 =="vip")  && (TCITdiscount4 == "two" && TCITroom4 =="two"))
                  {
                    
                      Ibalance4 = (TCIroomRate4 * Idays4 )* (TCIdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Ibalance4; 
                  }
                  else if ((TCISdiscount4 =="vip" && TCISroom4 =="vip")  && (TCITdiscount4 == "one" && TCITroom4 =="one"))
                  {
                    
                      Ibalance4 = (TCIroomRate4 * Idays4 )* (TCIdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Ibalance4; 
                  }
                  else if ((TCISdiscount4 =="regular" && TCISroom4 =="regular")  && (TCITdiscount4 == "four" && TCITroom4 =="four"))
                  {
                      
                      Ibalance4 = (TCIroomRate4 * Idays4 )* (TCIdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Ibalance4; 
                  }
                  else if ((TCISdiscount4 =="regular" && TCISroom4 =="regular")  && (TCITdiscount4 == "three" && TCITroom4 =="three"))
                  {
                      
                      Ibalance4 = (TCIroomRate4 * Idays4 )* (TCIdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Ibalance4; 
                  }
                  else if ((TCISdiscount4 =="regular" && TCISroom4 =="regular")  && (TCITdiscount4 == "two" && TCITroom4 =="two"))
                  {
        
                      Ibalance4 = (TCIroomRate4 * Idays4 )* (TCIdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Ibalance4; 
                  }
                  else if ((TCISdiscount4 =="regular" && TCISroom4 =="regular")  && (TCITdiscount4 == "one" && TCITroom4 =="one"))
                  {
            
                      Ibalance4 = (TCIroomRate4 * Idays4 )* (TCIdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Ibalance4; 
                  }
                  else if ((TCISdiscount4 =="none" && TCISroom4 =="none")  && (TCITdiscount4 == "four" && TCITroom4 =="four"))
                  {
    
                      Ibalance4 = (TCIroomRate4 * Idays4 );
                      cout<<"the balance after the discount"<<Ibalance4; 
                  }
                  else if ((TCISdiscount4 =="none" && TCISroom4 =="none")  && (TCITdiscount4 == "three" && TCITroom4 =="three"))
                  {
            
                      Ibalance4 = (TCIroomRate4 * Idays4 );
                      cout<<"the balance after the discount"<<Ibalance4; 
                  }
                  else if ((TCISdiscount4 =="none" && TCISroom4 =="none")  && (TCITdiscount4 == "two" && TCITroom4 =="two"))
                  {
        
                      Ibalance4 = (TCIroomRate4 * Idays4 );
                      cout<<"the balance after the discount"<<Ibalance4; 
                  }
                  else if ((TCISdiscount4 =="none" && TCISroom4 =="none")  && (TCITdiscount4 == "one" && TCITroom4 =="one"))
                  {
                    
                      Ibalance4 = (TCIroomRate4 * Idays4 );
                      cout<<"the balance after the discount"<<Ibalance4; 
                  }
                 checkIn_count == 1+ 4;
            }
             else if ( checkIn_count == 5)
            {
                cout<<"dont space"<<endl;
            }

        }// option 7

        clearScreen();

        if (option =="8")
        {
              cout<<"ID"<<"    \t"<<"NAME"<<"  \t"<<"ADDRESS"<<"\t"<<"CONTACT"<<"  \t"<<"EMAIL"<<"  \t"<<"GENDER"<<"\t"<<"NO ADULT"<<"\t"<<"NO CHILD"<<"\t"<<"CHK IN DATE"<<"\t"<<"CHK OUT DATE"<<"\t"<<"NO DAYS"<<"\t"<<"ROOM NO"<<"\t"<<"ROOM TYPE"<<"\t"<<"ROOM STATUS"<<"\t"<<"ROOM RATE"<<"\t"<<"DISCOUNT TYPE"<<"\t"<<"DISCOUNT STATUS"<<"\t"<<"DISCOUNT RATE"<<"\t"<<"BALANCE"<<endl;
              checkInList (TCIGid1 , TCIname1 , TCIaddres1 , TCIcontact1 , TCIemail1 , TCIgender1 , TCIa1 , TCIc1 , TCIdate1 , TCIodate1 , Idays1 , TCIroomNO1 , TCITroom1 , TCISroom1 , TCIroomRate1 , TCITdiscount1 , TCISdiscount1 , TCIdiscountRate1 , Ibalance1);
              checkInList (TCIGid2 , TCIname2 , TCIaddres2 , TCIcontact2 , TCIemail2 , TCIgender2 , TCIa2 , TCIc2 , TCIdate2 , TCIodate2 , Idays2 , TCIroomNO2 , TCITroom2 , TCISroom2 , TCIroomRate2 , TCITdiscount2 , TCISdiscount2 , TCIdiscountRate2 , Ibalance2);
              checkInList (TCIGid3 , TCIname3 , TCIaddres3 , TCIcontact3 , TCIemail3 , TCIgender3 , TCIa3 , TCIc3 , TCIdate3 , TCIodate3 , Idays3 , TCIroomNO3 , TCITroom3 , TCISroom3 , TCIroomRate3 , TCITdiscount3 , TCISdiscount3 , TCIdiscountRate3 , Ibalance3);
              checkInList (TCIGid4 , TCIname4 , TCIaddres4 , TCIcontact4 , TCIemail4 , TCIgender4 , TCIa4 , TCIc4 , TCIdate4 , TCIodate4 , Idays4 , TCIroomNO4 , TCITroom4 , TCISroom4 , TCIroomRate4 , TCITdiscount4 , TCISdiscount4 , TCIdiscountRate4 , Ibalance4);
        }// option 8

        clearScreen();

        if (option == "9")
        {
           if (checkOut_count == 1)
           {
                cout<<"enter the  transaction id of the guest..";
                  cin>>TCOGid1;
                  cout<<"enter the name of the guest...";
                  cin>>TCOname1;
                  cout<<"enter the address of guest... ";
                  cin>>TCOaddres1;
                  cout<<"enter the contact of the guest..";
                  cin>>TCOcontact1;
                  cout<<"enter the email address of the guest";
                  cin>>TCOemail1;
                  cout<<"enter the gender OF The guest..";
                  cin>>TCOgender1;
                  cout<<"enter the no of adult with guets...";
                  cin>>TCOa1;
                  cout<<"enter the no of childre with the guest..";
                  cin>>TCOc1;
                  cout<<"enter the check in date of the guest...";
                  cin>>TCOidate1;
                  cout<<"enter the check out date of the guest..";
                  cin>>TCOdate1;
                  cout<<"enter the no of days";
                  cin>>Odays1;
                  cout<<"enter the the room no ...";
                  cin>>TCOroomNO1;
                  cout<<"enter the room type....";
                  cin>>TCOTroom1;
                  cout<<"enter the room status....";
                  cin>>TCOSroom1;
                  cout<<"enter the room rate....";
                  cin>>TCOroomRate1;
                  cout<<"enter the discount status...";
                  cin>>TCOSdiscount1;
                  cout<<"enter the discount rate ....";
                  cin>>TCOdiscountRate1;
                  cout<<"enter the discount type ...";
                  cin>>TCOTdiscount1;
                 
                  if ((TCOSdiscount1 =="vip" && TCOSroom1 =="vip")  && (TCOTdiscount1 == "four" && TCOTroom1 =="four"))
                  {
    
                      Obalance1 = (TCOroomRate1 * Odays1 )* (TCOdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Obalance1;
                  }
                  else if ((TCOSdiscount1 =="vip" && TCOSroom1 =="vip")  && (TCOTdiscount1 == "three" && TCOTroom1 =="three"))
                  {
            
                      Obalance1 = (TCOroomRate1 * Odays1 )* (TCOdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Obalance1;
                  }
                  else if ((TCOSdiscount1 =="vip" && TCOSroom1 =="vip")  && (TCOTdiscount1 == "two" && TCOTroom1 =="two"))
                  {
                    
                      Obalance1 = (TCOroomRate1 * Odays1 )* (TCOdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Obalance1;
                  }
                  else if ((TCOSdiscount1 =="vip" && TCOSroom1 =="vip")  && (TCOTdiscount1 == "one" && TCOTroom1 =="one"))
                  {
        
                      Obalance1 = (TCOroomRate1 * Odays1 )* (TCOdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Obalance1;
                  }
                  else if ((TCOSdiscount1 =="regular" && TCOSroom1 =="regular")  && (TCOTdiscount1 == "four" && TCOTroom1 =="four"))
                  {
                    
                      Obalance1 = (TCOroomRate1 * Odays1 )* (TCOdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Obalance1;
                  }
                  else if ((TCOSdiscount1 =="regular" && TCOSroom1 =="regular")  && (TCOTdiscount1 == "three" && TCOTroom1 =="three"))
                  {
    
                      Obalance1 = (TCOroomRate1 * Odays1 )* (TCOdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Obalance1;
                  }
                  else if ((TCISdiscount1 =="regular" && TCISroom1 =="regular")  && (TCITdiscount1 == "two" && TCITroom1 =="two"))
                  {
    
                      Obalance1 = (TCOroomRate1 * Odays1 )* (TCOdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Obalance1;
                  }
                  else if ((TCOSdiscount1 =="regular" && TCOSroom1 =="regular")  && (TCOTdiscount1 == "one" && TCOTroom1 =="one"))
                  {
        
                      Obalance1 = (TCOroomRate1 * Odays1 )* (TCOdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Obalance1;
                  }
                  else if ((TCOSdiscount1 =="none" && TCOSroom1 =="none")  && (TCOTdiscount1 == "four" && TCOTroom1 =="four"))
                  {
                      
                      Obalance1 = (TCOroomRate1 * Odays1 );
                      cout<<"the balance after the discount"<<Obalance1;
                  }
                  else if ((TCOSdiscount1 =="none" && TCOSroom1 =="none")  && (TCOTdiscount1 == "three" && TCOTroom1 =="three"))
                  {
                      
                      Obalance1 = (TCOroomRate1 * Odays1 );
                      cout<<"the balance after the discount"<<Obalance1;
                  }
                  else if ((TCOSdiscount1 =="none" && TCOSroom1 =="none")  && (TCOTdiscount1 == "two" && TCOTroom1 =="two"))
                  {
            
                      Obalance1 = (TCOroomRate1 * Odays1 );
                      cout<<"the balance after the discount"<<Obalance1;
                  }
                  else if ((TCOSdiscount1 =="none" && TCOSroom1 =="none")  && (TCOTdiscount1 == "one" && TCOTroom1 =="one"))
                  {

                      Obalance1 = (TCOroomRate1 * Odays1 );
                      cout<<"the balance after the discount"<<Obalance1;
                  }              
             checkOut_count =1 + 1;
           }
           else  if (checkOut_count == 2)
           {
               cout<<"enter the  transaction id of the guest..";
                  cin>>TCOGid2;
                  cout<<"enter the name of the guest...";
                  cin>>TCOname2;
                  cout<<"enter the address of guest... ";
                  cin>>TCOaddres2;
                  cout<<"enter the contact of the guest..";
                  cin>>TCOcontact2;
                  cout<<"enter the email address of the guest";
                  cin>>TCOemail2;
                  cout<<"enter the gender OF The guest..";
                  cin>>TCOgender2;
                  cout<<"enter the no of adult with guets...";
                  cin>>TCOa2;
                  cout<<"enter the no of childre with the guest..";
                  cin>>TCOc2;
                  cout<<"enter the check in date of the guest...";
                  cin>>TCOidate2;
                  cout<<"enter the check out date of the guest..";
                  cin>>TCOdate2;
                  cout<<"enter the no of days";
                  cin>>Odays2;
                  cout<<"enter the the room no ...";
                  cin>>TCOroomNO2;
                  cout<<"enter the room type....";
                  cin>>TCOTroom2;
                  cout<<"enter the room status....";
                  cin>>TCOSroom2;
                  cout<<"enter the room rate....";
                  cin>>TCOroomRate2;
                  cout<<"enter the discount status...";
                  cin>>TCOSdiscount2;
                  cout<<"enter the discount rate ....";
                  cin>>TCOdiscountRate2;
                  cout<<"enter the discount type ...";
                  cin>>TCOTdiscount2;
                 
                  if ((TCOSdiscount2 =="vip" && TCOSroom2 =="vip")  && (TCOTdiscount2 == "four" && TCOTroom2 =="four"))
                  {
    
                      Obalance2 = (TCOroomRate2 * Odays2 )* (TCOdiscountRate2/100.0);
                      cout<<"the balance after the discount"<< Obalance2;
                  }
                  else if ((TCOSdiscount2 =="vip" && TCOSroom2 =="vip")  && (TCOTdiscount2 == "three" && TCOTroom2 =="three"))
                  {
            
                      Obalance2 = (TCOroomRate2 * Odays2 )* (TCOdiscountRate2/100.0);
                      cout<<"the balance after the discount"<< Obalance2;
                  }
                  else if ((TCOSdiscount2 =="vip" && TCOSroom2 =="vip")  && (TCOTdiscount2 == "two" && TCOTroom2 =="two"))
                  {
                    
                      Obalance2 = (TCOroomRate2 * Odays2 )* (TCOdiscountRate2/100.0);
                      cout<<"the balance after the discount"<< Obalance2;
                  }
                  else if ((TCOSdiscount2 =="vip" && TCOSroom2 =="vip")  && (TCOTdiscount2 == "one" && TCOTroom2 =="one"))
                  {
        
                      Obalance2 = (TCOroomRate2 * Odays2 )* (TCOdiscountRate2/100.0);
                      cout<<"the balance after the discount"<< Obalance2;
                  }
                  else if ((TCOSdiscount2 =="regular" && TCOSroom2 =="regular")  && (TCOTdiscount2 == "four" && TCOTroom2 =="four"))
                  {
                    
                      Obalance2 = (TCOroomRate2 * Odays2 )* (TCOdiscountRate2/100.0);
                      cout<<"the balance after the discount"<< Obalance2;
                  }
                  else if ((TCOSdiscount2 =="regular" && TCOSroom2 =="regular")  && (TCOTdiscount2 == "three" && TCOTroom2 =="three"))
                  {
    
                      Obalance2 = (TCOroomRate2 * Odays2 )* (TCOdiscountRate2/100.0);
                      cout<<"the balance after the discount"<< Obalance2;
                  }
                  else if ((TCISdiscount2 =="regular" && TCISroom2 =="regular")  && (TCITdiscount2 == "two" && TCITroom2 =="two"))
                  {
    
                      Obalance2 = (TCOroomRate2 * Odays2 )* (TCOdiscountRate2/100.0);
                      cout<<"the balance after the discount"<< Obalance2;
                  }
                  else if ((TCOSdiscount2 =="regular" && TCOSroom2 =="regular")  && (TCOTdiscount2 == "one" && TCOTroom2 =="one"))
                  {
        
                      Obalance2 = (TCOroomRate2 * Odays2 )* (TCOdiscountRate2/100.0);
                      cout<<"the balance after the discount"<< Obalance2;
                  }
                  else if ((TCOSdiscount2 =="none" && TCOSroom2 =="none")  && (TCOTdiscount2 == "four" && TCOTroom2 =="four"))
                  {
                      
                      Obalance2 = (TCOroomRate2 * Odays2 );
                      cout<<"the balance after the discount"<< Obalance2;
                  }
                  else if ((TCOSdiscount2 =="none" && TCOSroom2 =="none")  && (TCOTdiscount2 == "three" && TCOTroom2 =="three"))
                  {
                      
                      Obalance2 = (TCOroomRate2 * Odays2 );
                      cout<<"the balance after the discount"<< Obalance2;
                  }
                  else if ((TCOSdiscount2 =="none" && TCOSroom2 =="none")  && (TCOTdiscount2 == "two" && TCOTroom2 =="two"))
                  {
            
                      Obalance2 = (TCOroomRate2 * Odays2 );
                      cout<<"the balance after the discount"<< Obalance2;
                  }
                  else if ((TCOSdiscount2 =="none" && TCOSroom2 =="none")  && (TCOTdiscount2 == "one" && TCOTroom2 =="one"))
                  {

                      Obalance2 = (TCOroomRate2 * Odays2 );
                      cout<<"the balance after the discount"<< Obalance2;
                  }              
             checkOut_count =1 + 2;
           }
           else  if (checkOut_count ==3)
           {
               cout<<"enter the  transaction id of the guest..";
                  cin>>TCOGid3;
                  cout<<"enter the name of the guest...";
                  cin>>TCOname3;
                  cout<<"enter the address of guest... ";
                  cin>>TCOaddres3;
                  cout<<"enter the contact of the guest..";
                  cin>>TCOcontact3;
                  cout<<"enter the email address of the guest";
                  cin>>TCOemail3;
                  cout<<"enter the gender OF The guest..";
                  cin>>TCOgender3;
                  cout<<"enter the no of adult with guets...";
                  cin>>TCOa3;
                  cout<<"enter the no of childre with the guest..";
                  cin>>TCOc3;
                  cout<<"enter the check in date of the guest...";
                  cin>>TCOidate3;
                  cout<<"enter the check out date of the guest..";
                  cin>>TCOdate3;
                  cout<<"enter the no of days";
                  cin>>Odays3;
                  cout<<"enter the the room no ...";
                  cin>>TCOroomNO3;
                  cout<<"enter the room type....";
                  cin>>TCOTroom3;
                  cout<<"enter the room status....";
                  cin>>TCOSroom3;
                  cout<<"enter the room rate....";
                  cin>>TCOroomRate3;
                  cout<<"enter the discount status...";
                  cin>>TCOSdiscount3;
                  cout<<"enter the discount rate ....";
                  cin>>TCOdiscountRate3;
                  cout<<"enter the discount type ...";
                  cin>>TCOTdiscount3;
                 
                  if ((TCOSdiscount3 =="vip" && TCOSroom3 =="vip")  && (TCOTdiscount3 == "four" && TCOTroom3 =="four"))
                  {
    
                      Obalance3 = (TCOroomRate3 * Odays3 )* (TCOdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Obalance3;
                  }
                  else if ((TCOSdiscount3 =="vip" && TCOSroom3 =="vip")  && (TCOTdiscount3 == "three" && TCOTroom3 =="three"))
                  {
            
                      Obalance3 = (TCOroomRate3 * Odays3 )* (TCOdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Obalance3;
                  }
                  else if ((TCOSdiscount3 =="vip" && TCOSroom3 =="vip")  && (TCOTdiscount3 == "two" && TCOTroom3 =="two"))
                  {
                    
                      Obalance3 = (TCOroomRate3 * Odays3 )* (TCOdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Obalance3;
                  }
                  else if ((TCOSdiscount3 =="vip" && TCOSroom3 =="vip")  && (TCOTdiscount3 == "one" && TCOTroom3 =="one"))
                  {
        
                      Obalance3 = (TCOroomRate3 * Odays3 )* (TCOdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Obalance3;
                  }    
                  else if ((TCOSdiscount3 =="regular" && TCOSroom3 =="regular")  && (TCOTdiscount3 == "four" && TCOTroom3 =="four"))
                  {
                    
                      Obalance3 = (TCOroomRate3 * Odays3 )* (TCOdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Obalance3;
                  }
                  else if ((TCOSdiscount3 =="regular" && TCOSroom3 =="regular")  && (TCOTdiscount3 == "three" && TCOTroom3 =="three"))
                  {
    
                      Obalance3 = (TCOroomRate3 * Odays3 )* (TCOdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Obalance3;
                  }
                  else if ((TCISdiscount3 =="regular" && TCISroom3 =="regular")  && (TCITdiscount3 == "two" && TCITroom3 =="two"))
                  {
    
                      Obalance3 = (TCOroomRate3 * Odays3 )* (TCOdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Obalance3;
                  }
                  else if ((TCOSdiscount3 =="regular" && TCOSroom3 =="regular")  && (TCOTdiscount3 == "one" && TCOTroom1 =="one"))
                  {
        
                      Obalance3 = (TCOroomRate3 * Odays3 )* (TCOdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Obalance3;
                  }
                  else if ((TCOSdiscount3 =="none" && TCOSroom3 =="none")  && (TCOTdiscount3 == "four" && TCOTroom3 =="four"))
                  {
                      
                      Obalance3 = (TCOroomRate3 * Odays3 );
                      cout<<"the balance after the discount"<<Obalance3;
                  }
                  else if ((TCOSdiscount3 =="none" && TCOSroom3 =="none")  && (TCOTdiscount3 == "three" && TCOTroom3 =="three"))
                  {
                      
                      Obalance3 = (TCOroomRate3 * Odays3 );
                      cout<<"the balance after the discount"<<Obalance3;
                  }
                  else if ((TCOSdiscount3 =="none" && TCOSroom3 =="none")  && (TCOTdiscount3 == "two" && TCOTroom3 =="two"))
                  {
            
                      Obalance3 = (TCOroomRate3 * Odays3 );
                      cout<<"the balance after the discount"<<Obalance3;
                  }
                  else if ((TCOSdiscount3 =="none" && TCOSroom3 =="none")  && (TCOTdiscount3 == "one" && TCOTroom3 =="one"))
                  {

                      Obalance3 = (TCOroomRate3 * Odays3 );
                      cout<<"the balance after the discount"<<Obalance3;
                  }    
             checkOut_count =1 + 3;
           }
           else  if (checkOut_count == 4)
           {
               cout<<"enter the  transaction id of the guest..";
                  cin>>TCOGid4;
                  cout<<"enter the name of the guest...";
                  cin>>TCOname4;
                  cout<<"enter the address of guest... ";
                  cin>>TCOaddres4;
                  cout<<"enter the contact of the guest..";
                  cin>>TCOcontact4;
                  cout<<"enter the email address of the guest";
                  cin>>TCOemail4;
                  cout<<"enter the gender OF The guest..";
                  cin>>TCOgender4;
                  cout<<"enter the no of adult with guets...";
                  cin>>TCOa4;
                  cout<<"enter the no of childre with the guest..";
                  cin>>TCOc4;
                  cout<<"enter the check in date of the guest...";
                  cin>>TCOidate4;
                  cout<<"enter the check out date of the guest..";
                  cin>>TCOdate4;
                  cout<<"enter the no of days";
                  cin>>Odays4;
                  cout<<"enter the the room no ...";
                  cin>>TCOroomNO4;
                  cout<<"enter the room type....";
                  cin>>TCOTroom4;
                  cout<<"enter the room status....";
                  cin>>TCOSroom4;
                  cout<<"enter the room rate....";
                  cin>>TCOroomRate4;
                  cout<<"enter the discount status...";
                  cin>>TCOSdiscount4;
                  cout<<"enter the discount rate ....";
                  cin>>TCOdiscountRate4;
                  cout<<"enter the discount type ...";
                  cin>>TCOTdiscount4;
                 
                  if ((TCOSdiscount4 =="vip" && TCOSroom4 =="vip")  && (TCOTdiscount4 == "four" && TCOTroom4 =="four"))
                  {
    
                      Obalance4 = (TCOroomRate4 * Odays4 )* (TCOdiscountRate4/100.0);
                      cout<<"the balance after the discount"<< Obalance4;
                  }
                  else if ((TCOSdiscount4 =="vip" && TCOSroom4 =="vip")  && (TCOTdiscount4 == "three" && TCOTroom4 =="three"))
                  {
            
                      Obalance4 = (TCOroomRate4 * Odays4 )* (TCOdiscountRate4/100.0);
                      cout<<"the balance after the discount"<< Obalance4;
                  }
                  else if ((TCOSdiscount4 =="vip" && TCOSroom4 =="vip")  && (TCOTdiscount4 == "two" && TCOTroom4 =="two"))
                  {
                    
                      Obalance4 = (TCOroomRate4 * Odays4 )* (TCOdiscountRate4/100.0);
                      cout<<"the balance after the discount"<< Obalance4;
                  }   
                  else if ((TCOSdiscount4 =="vip" && TCOSroom4 =="vip")  && (TCOTdiscount4 == "one" && TCOTroom4 =="one"))
                  {
        
                      Obalance4 = (TCOroomRate4 * Odays4 )* (TCOdiscountRate4/100.0);
                      cout<<"the balance after the discount"<< Obalance4;
                  }
                  else if ((TCOSdiscount4 =="regular" && TCOSroom4 =="regular")  && (TCOTdiscount4 == "four" && TCOTroom4 =="four"))
                  {
                    
                      Obalance4 = (TCOroomRate4 * Odays4 )* (TCOdiscountRate4/100.0);
                      cout<<"the balance after the discount"<< Obalance4;
                  }
                  else if ((TCOSdiscount4 =="regular" && TCOSroom4 =="regular")  && (TCOTdiscount4 == "three" && TCOTroom4 =="three"))
                  {
    
                      Obalance4 = (TCOroomRate4 * Odays4 )* (TCOdiscountRate4/100.0);
                      cout<<"the balance after the discount"<< Obalance4;
                  }
                  else if ((TCISdiscount4 =="regular" && TCISroom4 =="regular")  && (TCITdiscount4 == "two" && TCITroom4 =="two"))
                  {
    
                      Obalance4 = (TCOroomRate4 * Odays4 )* (TCOdiscountRate4/100.0);
                      cout<<"the balance after the discount"<< Obalance4;
                  }
                  else if ((TCOSdiscount4 =="regular" && TCOSroom4 =="regular")  && (TCOTdiscount4 == "one" && TCOTroom4 =="one"))
                  {
        
                      Obalance4 = (TCOroomRate4 * Odays4 )* (TCOdiscountRate4/100.0);
                      cout<<"the balance after the discount"<< Obalance4;
                  }
                  else if ((TCOSdiscount4 =="none" && TCOSroom4 =="none")  && (TCOTdiscount4 == "four" && TCOTroom4 =="four"))
                  {
                      
                      Obalance4 = (TCOroomRate4 * Odays4 );
                      cout<<"the balance after the discount"<< Obalance4;
                  }
                  else if ((TCOSdiscount4 =="none" && TCOSroom4 =="none")  && (TCOTdiscount4 == "three" && TCOTroom4 =="three"))
                  {
                      
                      Obalance4 = (TCOroomRate4 * Odays4 );
                      cout<<"the balance after the discount"<< Obalance4;
                  }
                  else if ((TCOSdiscount4 =="none" && TCOSroom4 =="none")  && (TCOTdiscount4 == "two" && TCOTroom4 =="two"))
                  {
            
                      Obalance4 = (TCOroomRate4 * Odays4 );
                      cout<<"the balance after the discount"<< Obalance4;
                  }
                  else if ((TCOSdiscount4 =="none" && TCOSroom4 =="none")  && (TCOTdiscount4 == "one" && TCOTroom4 =="one"))
                  {

                      Obalance4 = (TCOroomRate4 * Odays4 );
                      cout<<"the balance after the discount"<< Obalance4;
                  }

             checkOut_count =1 + 4;
           }
           else  if (checkOut_count == 5)
           {
             cout<<"dont have a space"<<endl;
           }

        }// option 9

        clearScreen();

        if (option == "10")
        {
            cout<<"ID"<<"    \t"<<"NAME"<<"  \t"<<"ADDRESS"<<"\t"<<"CONTACT"<<"  \t"<<"EMAIL"<<"  \t"<<"GENDER"<<"\t"<<"NO ADULT"<<"\t"<<"NO CHILD"<<"\t"<<"CHK IN DATE"<<"\t"<<"CHK OUT DATE"<<"\t"<<"NO DAYS"<<"\t"<<"ROOM NO"<<"\t"<<"ROOM TYPE"<<"\t"<<"ROOM STATUS"<<"\t"<<"ROOM RATE"<<"\t"<<"DISCOUNT TYPE"<<"\t"<<"DISCOUNT STATUS"<<"\t"<<"DISCOUNT RATE"<<"\t"<<"BALANCE"<<endl;
            checkOutList (TCOGid1 , TCOname1 , TCOaddres1 , TCOcontact1 , TCOemail1 , TCOgender1 , TCOa1 , TCOc1 , TCOidate1 , TCOdate1 , Odays1 , TCOroomNO1 , TCOTroom1 , TCOSroom1 , TCOroomRate1 , TCOTdiscount1 , TCOSdiscount1 , TCOdiscountRate1 , Obalance1);
            checkOutList (TCOGid2 , TCOname2 , TCOaddres2 , TCOcontact2 , TCOemail2 , TCOgender2 , TCOa2, TCOc2 , TCOidate2 , TCOdate2 , Odays2 , TCOroomNO2 , TCOTroom2 , TCOSroom2 , TCOroomRate2 , TCOTdiscount2 , TCOSdiscount2 , TCOdiscountRate2 , Obalance2);
            checkOutList (TCOGid3 , TCOname3 , TCOaddres3 , TCOcontact3 , TCOemail3 , TCOgender3 , TCOa3 , TCOc3 , TCOidate3 , TCOdate3 , Odays3 , TCOroomNO3 , TCOTroom3 , TCOSroom3 , TCOroomRate3 , TCOTdiscount3 , TCOSdiscount3 , TCOdiscountRate3 , Obalance3);
            checkOutList (TCOGid4 , TCOname4 , TCOaddres4 , TCOcontact4 , TCOemail4 , TCOgender4 , TCOa4 , TCOc4 , TCOidate4 , TCOdate4 , Odays4 , TCOroomNO4 , TCOTroom4 , TCOSroom4 , TCOroomRate4 , TCOTdiscount4 , TCOSdiscount4 , TCOdiscountRate4 , Obalance4);  
        }  //option 10

        clearScreen();

        if (option == "11")
        {
            if (availableRoom_count ==1)
            {
                cout<<"enter the id of the available  room...";
              cin>>ARid1;
              cout<<"enter the available room no... ";
              cin>>AroomNO1;
              cout<<"enter the available  room type..";
              cin>>ATroom1;
              cout<<"enter the available room status...";
              cin>>ASroom1;
              cout<<"enter the available  room rate..";
              cin>>AroomRate1;
                availableRoom_count = 1 + 1;
            }
            else if (availableRoom_count ==2)
            {
              cout<<"enter the id of the available  room...";
              cin>>ARid2;
              cout<<"enter the available room no... ";
              cin>>AroomNO2;
              cout<<"enter the available  room type..";
              cin>>ATroom2;
              cout<<"enter the available room status...";
              cin>>ASroom2;
              cout<<"enter the available  room rate..";
              cin>>AroomRate2;
                availableRoom_count = 1 + 2;
            }
            else if (availableRoom_count ==3)
            {
              cout<<"enter the id of the available  room...";
              cin>>ARid3;
              cout<<"enter the available room no... ";
              cin>>AroomNO3;
              cout<<"enter the available  room type..";
              cin>>ATroom3;
              cout<<"enter the available room status...";
              cin>>ASroom3;
              cout<<"enter the available  room rate..";
              cin>>AroomRate3;
                availableRoom_count = 1 + 3;
            }
            else if (availableRoom_count ==4)
            {
              cout<<"enter the id of the available  room...";
              cin>>ARid4;
              cout<<"enter the available room no... ";
              cin>>AroomNO4;
              cout<<"enter the available  room type..";
              cin>>ATroom4;
              cout<<"enter the available room status...";
              cin>>ASroom4;
              cout<<"enter the available  room rate..";
              cin>>AroomRate4;
                availableRoom_count = 1 + 4;
            }
            else if (availableRoom_count ==5)
            {
              cout <<"dont have a space"<<endl;
            }
        }// option 11

        clearScreen();

        if (option == "12")
        {
                cout<<"ID"<<"    \t"<<"NAME"<<"  \t"<<"ADDRESS"<<"\t"<<"CONTACT"<<"  \t"<<"EMAIL"<<"  \t"<<"GENDER"<<"\t"<<"NO ADULT"<<"\t"<<"NO CHILD"<<"\t"<<"CHK IN DATE"<<"\t"<<"CHK OUT DATE"<<"\t"<<"NO DAYS"<<"\t"<<"ROOM NO"<<"\t"<<"ROOM TYPE"<<"\t"<<"ROOM STATUS"<<"\t"<<"ROOM RATE"<<"\t"<<"DISCOUNT TYPE"<<"\t"<<"DISCOUNT STATUS"<<"\t"<<"DISCOUNT RATE"<<"\t"<<"BALANCE"<<endl;
                reservationList (RGid1 , Rname1 , Raddres1 , Rcontact1 , Remail1 , Rgender1 , Ra1 , Rc1 , Ridate1 , Rodate1 , Rdays1 , RroomNO1 , RTroom1 , RSroom1 , RroomRate1 , RTdiscount1 , RSdiscount1 , RdiscountRate1 , Rbalance1);
                reservationList (RGid2 , Rname2 , Raddres2 , Rcontact2 , Remail2 , Rgender2 , Ra2 , Rc2 , Ridate2 , Rodate2 , Rdays2 , RroomNO2 , RTroom2 , RSroom2 , RroomRate2 , RTdiscount2 , RSdiscount2 , RdiscountRate2 , Rbalance2);
                reservationList (RGid3 , Rname3 , Raddres3 , Rcontact3 , Remail3 , Rgender3 , Ra3 , Rc3 , Ridate3 , Rodate3 , Rdays3 , RroomNO3 , RTroom3 , RSroom3 , RroomRate3 , RTdiscount3 , RSdiscount3 , RdiscountRate3 , Rbalance3);
                reservationList (RGid4 , Rname4 , Raddres4 , Rcontact4 , Remail4 , Rgender4 , Ra4 , Rc4 , Ridate4 , Rodate4 , Rdays4 , RroomNO4 , RTroom4 , RSroom4 , RroomRate4 , RTdiscount4 , RSdiscount4 , RdiscountRate4 , Rbalance4);
        }// option 12

        clearScreen();

        if (option == "13")
        {
             header();
             cout<<"thanks for using the HOTEL MANAGEMENT SYSTEM "<<endl;
        }
        else 
        {
            cout<<"you enter the wrong no"<<endl;
        }


    }// end of main if passward
   else  if (name == "user" && password == "usercode") 
       {
            option = userMenu();
            cout<<option;

            if (option =="1")
            {
            cout<<"ID"<<"\t"<<"ROOM NO"<<"\t"<<"ROOM TYPE"<<"\t"<<"ROOM STATUS"<<"\t"<<"ROOM STATUS"<<endl;
            roomlist (Rid1 , roomNO1 , Troom1 , Sroom1 , roomRate1); 
            roomlist (Rid2 , roomNO2 , Troom2 , Sroom2 , roomRate2); 
            roomlist (Rid3 , roomNO3 , Troom3 , Sroom3 , roomRate3); 
            roomlist (Rid4 , roomNO4 , Troom4 , Sroom4 , roomRate4); 
            }// option 1

            clearScreen();
            if (option =="2")
            {
               cout<<"ID"<<"\t"<<"DISCOUNT TYPE"<<"\t"<<"DISCOUNT  STATUS"<<"\t"<<"DISCOUNT  RATE"<<endl;
                typediscount(Did1 , Tdiscount1 , Sdiscount1 , discountRate1);
                typediscount(Did2 , Tdiscount2 , Sdiscount2 , discountRate2);
                typediscount(Did3 , Tdiscount3 , Sdiscount3 , discountRate3);
                typediscount(Did4 , Tdiscount4 , Sdiscount4 , discountRate4);
            }// option 2

            clearScreen();
            if (option =="3")
            {
            cout<<"ID"<<"\t"<<"ROOM NO"<<"\t"<<"ROOM TYPE"<<"\t"<<"ROOM STATUS"<<"\t"<<"ROOM STATUS"<<endl;
             availableRoom ( ARid1 ,AroomNO1 , ATroom1 ,ASroom1  , AroomRate1);
             availableRoom ( ARid2 ,AroomNO2, ATroom2 ,ASroom2  , AroomRate2);
             availableRoom ( ARid3 ,AroomNO3 , ATroom3 ,ASroom3  , AroomRate3);
             availableRoom ( ARid4 ,AroomNO4 , ATroom4 ,ASroom4  , AroomRate4);
            }// option 3

            clearScreen();
            if (option =="4")
            {
                if (reservation_count ==1)
                {
                     cout<<"enter the  transaction id of the guest..";
                  cin>>RGid1;
                  cout<<"enter the name of the guest...";
                  cin>>Rname1;
                  cout<<"enter the address of guest... ";
                  cin>>Raddres1;
                  cout<<"enter the contact of the guest..";
                  cin>>Rcontact1;
                  cout<<"enter the email address of the guest";
                  cin>>Remail1;
                  cout<<"enter the gender OF The guest..";
                  cin>>Rgender1;
                  cout<<"enter the no of adult with guets...";
                  cin>>Ra1;
                  cout<<"enter the no of childre with the guest..";
                  cin>>Rc1;
                  cout<<"enter the check in date of the guest...";
                  cin>>Ridate1;
                  cout<<"enter the check out date of the guest..";
                  cin>>Rodate1;
                  cout<<"enter the no of days";
                  cin>>Rdays1;
                  cout<<"enter the the room no ...";
                  cin>>RroomNO1;
                  cout<<"enter the room type....";
                  cin>>RTroom1;
                  cout<<"enter the room status....";
                  cin>>RSroom1;
                  cout<<"enter the room rate....";
                  cin>>RroomRate1;
                  cout<<"enter the discount status...";
                  cin>>RSdiscount1;
                  cout<<"enter the discount rate ....";
                  cin>>RdiscountRate1;
                  cout<<"enter the discount type ...";
                  cin>>RTdiscount1;
                 
                  if ((RSdiscount1 =="vip" && RSroom1 =="vip")  && (RTdiscount1 == "four" && RTroom1 =="four"))
                  {
    
                      Rbalance1 = (RroomRate1 * Rdays1 )* (RdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Rbalance1;
                  }
                  else if ((RSdiscount1 =="vip" && RSroom1 =="vip")  && (RTdiscount1 == "three" && RTroom1 =="three"))
                  {
            
                      Rbalance1 = (RroomRate1 * Rdays1 )* (RdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Rbalance1;
                  }
                  else if ((RSdiscount1 =="vip" && RSroom1 =="vip")  && (RTdiscount1 == "two" && RTroom1 =="two"))
                  {
                    
                      Rbalance1 = (RroomRate1 * Rdays1 )* (RdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Rbalance1;
                  }
                  else if ((RSdiscount1 =="vip" && RSroom1 =="vip")  && (RTdiscount1 == "one" && RTroom1 =="one"))
                  {
        
                      Rbalance1 = (RroomRate1 * Rdays1 )* (RdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Rbalance1;
                  }
                  else if ((RSdiscount1 =="regular" && RSroom1 =="regular")  && (RTdiscount1 == "four" && RTroom1 =="four"))
                  {
                    
                      Rbalance1 = (RroomRate1 * Rdays1 )* (RdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Rbalance1;
                  }
                  else if ((RSdiscount1 =="regular" &&  RSroom1 =="regular")  && (RTdiscount1 == "three" && RTroom1 =="three"))
                  {
    
                      Rbalance1 = (RroomRate1 * Rdays1 )* (RdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Rbalance1;
                  }
                  else if ((RSdiscount1 =="regular" && RSroom1 =="regular")  && (RTdiscount1 == "two" && RTroom1 =="two"))
                  {
    
                      Rbalance1 = (RroomRate1 * Rdays1 )* (RdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Rbalance1;
                  }
                  else if ((RSdiscount1 =="regular" && RSroom1 =="regular")  && (RTdiscount1 == "one" && RTroom1 =="one"))
                  {
        
                      Rbalance1 = (RroomRate1 * Rdays1 )* (RdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Rbalance1;
                  }
                  else if ((RSdiscount1 =="none" && RSroom1 =="none")  && (RTdiscount1 == "four" && RTroom1 =="four"))
                  {
                      
                      Rbalance1 = (RroomRate1 * Rdays1 );
                      cout<<"the balance after the discount"<<Rbalance1;
                  }
                  else if ((RSdiscount1 =="none" && RSroom1 =="none")  && (RTdiscount1 == "three" && RTroom1 =="three"))
                  {
                      
                      Rbalance1 = (RroomRate1 * Rdays1 );
                      cout<<"the balance after the discount"<<Rbalance1;
                  }
                  else if ((RSdiscount1 =="none" && RSroom1 =="none")  && (RTdiscount1 == "two" && RTroom1 =="two"))
                  {
            
                      Rbalance1 = (RroomRate1 * Rdays1 );
                      cout<<"the balance after the discount"<<Rbalance1;
                  }
                  else if ((RSdiscount1 =="none" && RSroom1 =="none")  && (RTdiscount1 == "one" && RTroom1 =="one"))
                  {

                      Rbalance1 = (TCOroomRate1 * Odays1 );
                      cout<<"the balance after the discount"<<Rbalance1;
                  }
                   reservation_count = 1+1; 
                }
                else if (reservation_count ==2)
                {
                     cout<<"enter the  transaction id of the guest..";
                  cin>>RGid2;
                  cout<<"enter the name of the guest...";
                  cin>>Rname2;
                  cout<<"enter the address of guest... ";
                  cin>>Raddres2;
                  cout<<"enter the contact of the guest..";
                  cin>>Rcontact2;
                  cout<<"enter the email address of the guest";
                  cin>>Remail2;
                  cout<<"enter the gender OF The guest..";
                  cin>>Rgender2;
                  cout<<"enter the no of adult with guets...";
                  cin>>Ra2;
                  cout<<"enter the no of childre with the guest..";
                  cin>>Rc2;
                  cout<<"enter the check in date of the guest...";
                  cin>>Ridate2;
                  cout<<"enter the check out date of the guest..";
                  cin>>Rodate2;
                  cout<<"enter the no of days";
                  cin>>Rdays2;
                  cout<<"enter the the room no ...";
                  cin>>RroomNO2;
                  cout<<"enter the room type....";
                  cin>>RTroom2;
                  cout<<"enter the room status....";
                  cin>>RSroom2;
                  cout<<"enter the room rate....";
                  cin>>RroomRate2;
                  cout<<"enter the discount status...";
                  cin>>RSdiscount2;
                  cout<<"enter the discount rate ....";
                  cin>>RdiscountRate2;
                  cout<<"enter the discount type ...";
                  cin>>RTdiscount2;
                 
                  if ((RSdiscount2 =="vip" && RSroom2 =="vip")  && (RTdiscount2 == "four" && RTroom2 =="four"))
                  {
    
                      Rbalance2 = (RroomRate2 * Rdays2 )* (RdiscountRate1/100.0);
                      cout<<"the balance after the discount"<<Rbalance2;
                  }
                  else if ((RSdiscount2 =="vip" && RSroom2 =="vip")  && (RTdiscount2 == "three" && RTroom2 =="three"))
                  {
            
                      Rbalance2 = (RroomRate2 * Rdays2 )* (RdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Rbalance2;
                  }
                  else if ((RSdiscount2 =="vip" && RSroom2 =="vip")  && (RTdiscount2 == "two" && RTroom2 =="two"))
                  {
                    
                      Rbalance2 = (RroomRate2 * Rdays2 )* (RdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Rbalance2;
                  }
                  else if ((RSdiscount2 =="vip" && RSroom2 =="vip")  && (RTdiscount2 == "one" && RTroom2 =="one"))
                  {
        
                      Rbalance2 = (RroomRate2 * Rdays2 )* (RdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Rbalance2;
                  }
                  else if ((RSdiscount2 =="regular" && RSroom2 =="regular")  && (RTdiscount2 == "four" && RTroom2 =="four"))
                  {
                    
                      Rbalance2 = (RroomRate2 * Rdays2 )* (RdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Rbalance2;
                  }
                  else if ((RSdiscount2 =="regular" &&  RSroom2 =="regular")  && (RTdiscount2 == "three" && RTroom2 =="three"))
                  {
    
                      Rbalance2 = (RroomRate2 * Rdays2 )* (RdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Rbalance2;
                  }
                  else if ((RSdiscount2 =="regular" && RSroom2 =="regular")  && (RTdiscount2 == "two" && RTroom2 =="two"))
                  {
    
                      Rbalance2 = (RroomRate2 * Rdays2 )* (RdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Rbalance2;
                  }
                  else if ((RSdiscount2 =="regular" && RSroom2 =="regular")  && (RTdiscount2 == "one" && RTroom2 =="one"))
                  {
        
                      Rbalance2 = (RroomRate2 * Rdays2 )* (RdiscountRate2/100.0);
                      cout<<"the balance after the discount"<<Rbalance2;
                  }
                  else if ((RSdiscount2 =="none" && RSroom2 =="none")  && (RTdiscount2 == "four" && RTroom2 =="four"))
                  {
                      
                      Rbalance2 = (RroomRate2 * Rdays2 );
                      cout<<"the balance after the discount"<<Rbalance2;
                  }
                  else if ((RSdiscount2 =="none" && RSroom2 =="none")  && (RTdiscount2 == "three" && RTroom2 =="three"))
                  {
                      
                      Rbalance2 = (RroomRate2 * Rdays2 );
                      cout<<"the balance after the discount"<<Rbalance2;
                  }
                  else if ((RSdiscount2 =="none" && RSroom2 =="none")  && (RTdiscount2 == "two" && RTroom2 =="two"))
                  {
            
                      Rbalance2 = (RroomRate2 * Rdays2 );
                      cout<<"the balance after the discount"<<Rbalance2;
                  }
                  else if ((RSdiscount2 =="none" && RSroom2 =="none")  && (RTdiscount2 == "one" && RTroom2 =="one"))
                  {

                      Rbalance2 = (RroomRate2 * Rdays2 );
                      cout<<"the balance after the discount"<<Rbalance2;
                 }
                   reservation_count = 1+2; 
                }
                else if (reservation_count ==3)
                {
                    cout<<"enter the  transaction id of the guest..";
                  cin>>RGid3;
                  cout<<"enter the name of the guest...";
                  cin>>Rname3;
                  cout<<"enter the address of guest... ";
                  cin>>Raddres3;
                  cout<<"enter the contact of the guest..";
                  cin>>Rcontact3;
                  cout<<"enter the email address of the guest";
                  cin>>Remail3;
                  cout<<"enter the gender OF The guest..";
                  cin>>Rgender3;
                  cout<<"enter the no of adult with guets...";
                  cin>>Ra3;
                  cout<<"enter the no of childre with the guest..";
                  cin>>Rc3;
                  cout<<"enter the check in date of the guest...";
                  cin>>Ridate3;
                  cout<<"enter the check out date of the guest..";
                  cin>>Rodate3;
                  cout<<"enter the no of days";
                  cin>>Rdays3;
                  cout<<"enter the the room no ...";
                  cin>>RroomNO3;
                  cout<<"enter the room type....";
                  cin>>RTroom3;
                  cout<<"enter the room status....";
                  cin>>RSroom3;
                  cout<<"enter the room rate....";
                  cin>>RroomRate3;
                  cout<<"enter the discount status...";
                  cin>>RSdiscount3;
                  cout<<"enter the discount rate ....";
                  cin>>RdiscountRate3;
                  cout<<"enter the discount type ...";
                  cin>>RTdiscount3;
                 
                  if ((RSdiscount3 =="vip" && RSroom3 =="vip")  && (RTdiscount3 == "four" && RTroom3 =="four"))
                  {
    
                      Rbalance3 = (RroomRate3 * Rdays3 )* (RdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Rbalance3;
                  }
                  else if ((RSdiscount3 =="vip" && RSroom3 =="vip")  && (RTdiscount3 == "three" && RTroom3 =="three"))
                  {
            
                      Rbalance3 = (RroomRate3 * Rdays3 )* (RdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Rbalance3;
                  }
                  else if ((RSdiscount3 =="vip" && RSroom3 =="vip")  && (RTdiscount3 == "two" && RTroom3 =="two"))
                  {
                    
                      Rbalance3 = (RroomRate3 * Rdays3 )* (RdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Rbalance3;
                  }
                  else if ((RSdiscount3 =="vip" && RSroom3 =="vip")  && (RTdiscount3 == "one" && RTroom3 =="one"))
                  {
        
                      Rbalance3 = (RroomRate3 * Rdays3 )* (RdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Rbalance3;
                  }
                  else if ((RSdiscount3 =="regular" && RSroom3 =="regular")  && (RTdiscount3 == "four" && RTroom3 =="four"))
                  {
                    
                      Rbalance3 = (RroomRate3 * Rdays3 )* (RdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Rbalance3;
                  }
                  else if ((RSdiscount3 =="regular" &&  RSroom3 =="regular")  && (RTdiscount3 == "three" && RTroom3 =="three"))
                  {
    
                      Rbalance3 = (RroomRate3 * Rdays3 )* (RdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Rbalance3;
                  }
                  else if ((RSdiscount3 =="regular" && RSroom3 =="regular")  && (RTdiscount3 == "two" && RTroom3 =="two"))
                  {
    
                      Rbalance3 = (RroomRate3 * Rdays3 )* (RdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Rbalance3;
                  }
                  else if ((RSdiscount3 =="regular" && RSroom3 =="regular")  && (RTdiscount3 == "one" && RTroom3 =="one"))
                  {
        
                      Rbalance3 = (RroomRate3 * Rdays3 )* (RdiscountRate3/100.0);
                      cout<<"the balance after the discount"<<Rbalance3;
                  }
                  else if ((RSdiscount3 =="none" && RSroom3 =="none")  && (RTdiscount3 == "four" && RTroom3 =="four"))
                  {
                      
                      Rbalance3 = (RroomRate3 * Rdays3 );
                      cout<<"the balance after the discount"<<Rbalance3;
                  }
                  else if ((RSdiscount3 =="none" && RSroom3 =="none")  && (RTdiscount3 == "three" && RTroom3 =="three"))
                  {
                      
                      Rbalance3 = (RroomRate3 * Rdays3 );
                      cout<<"the balance after the discount"<<Rbalance3;
                  }
                  else if ((RSdiscount3 =="none" && RSroom3 =="none")  && (RTdiscount3 == "two" && RTroom3 =="two"))
                  {
            
                      Rbalance3 = (RroomRate3 * Rdays3 );
                      cout<<"the balance after the discount"<<Rbalance3;
                  }
                  else if ((RSdiscount3 =="none" && RSroom3 =="none")  && (RTdiscount3 == "one" && RTroom3 =="one"))
                  {

                      Rbalance3 = (RroomRate3 * Rdays3 );
                      cout<<"the balance after the discount"<<Rbalance3;
                }
                   reservation_count = 1+3; 
                }
                else if (reservation_count ==4)
                {
                     cout<<"enter the  transaction id of the guest..";
                  cin>>RGid4;
                  cout<<"enter the name of the guest...";
                  cin>>Rname4;
                  cout<<"enter the address of guest... ";
                  cin>>Raddres4;
                  cout<<"enter the contact of the guest..";
                  cin>>Rcontact4;
                  cout<<"enter the email address of the guest";
                  cin>>Remail4;
                  cout<<"enter the gender OF The guest..";
                  cin>>Rgender4;
                  cout<<"enter the no of adult with guets...";
                  cin>>Ra4;
                  cout<<"enter the no of childre with the guest..";
                  cin>>Rc4;
                  cout<<"enter the check in date of the guest...";
                  cin>>Ridate4;
                  cout<<"enter the check out date of the guest..";
                  cin>>Rodate4;
                  cout<<"enter the no of days";
                  cin>>Rdays4;
                  cout<<"enter the the room no ...";
                  cin>>RroomNO4;
                  cout<<"enter the room type....";
                  cin>>RTroom4;
                  cout<<"enter the room status....";
                  cin>>RSroom4;
                  cout<<"enter the room rate....";
                  cin>>RroomRate4;
                  cout<<"enter the discount status...";
                  cin>>RSdiscount4;
                  cout<<"enter the discount rate ....";
                  cin>>RdiscountRate4;
                  cout<<"enter the discount type ...";
                  cin>>RTdiscount4;
                 
                  if ((RSdiscount4 =="vip" && RSroom4 =="vip")  && (RTdiscount4 == "four" && RTroom4 =="four"))
                  {
    
                      Rbalance4 = (RroomRate4 * Rdays4 )* (RdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Rbalance4;
                  }
                  else if ((RSdiscount4 =="vip" && RSroom4 =="vip")  && (RTdiscount4 == "three" && RTroom4 =="three"))
                  {
            
                      Rbalance4 = (RroomRate4 * Rdays4 )* (RdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Rbalance4;
                  }
                  else if ((RSdiscount4 =="vip" && RSroom4 =="vip")  && (RTdiscount4 == "two" && RTroom4 =="two"))
                  {
                    
                      Rbalance4 = (RroomRate4 * Rdays4 )* (RdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Rbalance4;
                  }
                  else if ((RSdiscount4 =="vip" && RSroom4 =="vip")  && (RTdiscount4 == "one" && RTroom4 =="one"))
                  {
        
                      Rbalance4 = (RroomRate4 * Rdays4 )* (RdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Rbalance4;
                  }
                  else if ((RSdiscount4 =="regular" && RSroom4 =="regular")  && (RTdiscount4 == "four" && RTroom4 =="four"))
                  {
                    
                      Rbalance4 = (RroomRate4 * Rdays4 )* (RdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Rbalance4;
                  }
                  else if ((RSdiscount4 =="regular" &&  RSroom4 =="regular")  && (RTdiscount4 == "three" && RTroom4 =="three"))
                  {
    
                      Rbalance4 = (RroomRate4 * Rdays4 )* (RdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Rbalance4;
                  }
                  else if ((RSdiscount4 =="regular" && RSroom4 =="regular")  && (RTdiscount4 == "two" && RTroom4 =="two"))
                  {
    
                      Rbalance4 = (RroomRate4 * Rdays4 )* (RdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Rbalance4;
                  }
                  else if ((RSdiscount4 =="regular" && RSroom4 =="regular")  && (RTdiscount4 == "one" && RTroom4 =="one"))
                  {
        
                      Rbalance4 = (RroomRate4 * Rdays4 )* (RdiscountRate4/100.0);
                      cout<<"the balance after the discount"<<Rbalance4;
                  }
                  else if ((RSdiscount4 =="none" && RSroom4 =="none")  && (RTdiscount4 == "four" && RTroom4 =="four"))
                  {
                      
                      Rbalance4 = (RroomRate4 * Rdays4 );
                      cout<<"the balance after the discount"<<Rbalance4;
                  }
                  else if ((RSdiscount4 =="none" && RSroom4 =="none")  && (RTdiscount4 == "three" && RTroom4 =="three"))
                  {
                      
                      Rbalance4 = (RroomRate4 * Rdays4 );
                      cout<<"the balance after the discount"<<Rbalance4;
                  }
                  else if ((RSdiscount4 =="none" && RSroom4 =="none")  && (RTdiscount4 == "two" && RTroom4 =="two"))
                  {
            
                      Rbalance4 = (RroomRate4 * Rdays4 );
                      cout<<"the balance after the discount"<<Rbalance4;
                  }
                  else if ((RSdiscount4 =="none" && RSroom4 =="none")  && (RTdiscount4 == "one" && RTroom4 =="one"))
                  {

                      Rbalance4 = (RroomRate4 * Rdays4 );
                      cout<<"the balance after the discount"<<Rbalance4;
                 }
                   reservation_count = 1+4; 
                }
                else if (reservation_count ==5)
                {
                   cout<<"dont have a space"<<endl; 
                }
            }// option 4

            clearScreen();
            if (option == "5")
            {
                header();
                cout<<"thanks for using the HOTEL MANAGEMENT SYSTEM"<<endl;
            }
            else 
            {
                 cout<<"you enter  the wrong no"<<endl;
            }// option 5
       } // else main if 
  
    
}// end of while
}// end of main 


void header()
{
          cout<<"*****************************************************************"<<endl;
          cout<<"*************BHB       HOTEL        MANAGEMENT        SYSTEM*****"<<endl;
          cout<<"*****************************************************************"<<endl;
}
void loginHeader ()
{
    cout<<"*****************************************************************"<<endl;
    cout<<"********************LOGIN SCREEN*********************************"<<endl;
    cout<<"*****************************************************************"<<endl;
   

}
string menu()
{
    header();
          cout<<"MAIN MENU >>"<<endl;
          cout<<"--------------"<<endl;
          cout<<"select one of the followings options..."<<endl;
          cout<<"1. add the new guest.."<<endl;
          cout<<"2. view the guest list.."<<endl;
          cout<<"3. add the new room type.."<<endl;
          cout<<"4. view the list of room type.."<<endl;
          cout<<"5. add the discount type.."<<endl;
          cout<<"6. view the list of discount type.."<<endl;
          cout<<"7. add check in form....."<<endl;
          cout<<"8. view the check in form list..."<<endl;
          cout<<"9. add the check out form...."<<endl;
          cout<<"10. view the list of check out form list"<<endl;
          cout<<"11. add the available room..."<<endl;
          cout<<"12. view the reservation form ..."<<endl;
          cout<<"13. EXISTS  "<<endl;
          string option;
          cout<<"enter the one of the options..."<<endl;
          cin>>option;
          return option;
}
string userMenu()
{
          header();
          cout<<"MAIN MENU >>"<<endl;
          cout<<"--------------"<<endl;
          cout<<"select one of the followings options..."<<endl;
          cout<<"1. view the room type list .."<<endl;
          cout<<"2. view the discount type list.."<<endl;
          cout<<"3. view the available room list .."<<endl;
          cout<<"4. add the reservation form ..."<<endl;
          cout<<" log out"<<endl;
           string option;
          cout<<"enter the one of the options..."<<endl;
          cin>>option;
          return option;
}

void guestlist ( int id ,string name , string addres ,double contact ,string email , string gender )
{
    if (id > 0 )
    {
   cout<<id<<"   \t"<<name<<"   \t"<<addres<<"  \t"<<contact<<"   \t"<<email<<"  \t"<<gender<<endl;
    }
}

void roomlist (int id , int roomNo , string roomType , string roomStatus , int roomRate)
{
    if (id > 0 )
    {
   cout<<id<<"   \t"<<roomNo<<"   \t"<<roomType<<"  \t"<<roomStatus<<"  \t"<<roomRate<<endl; 
    }
}

void typediscount(int id , string discountType , string discountStatus , string discountRate)
{
    if (id > 0)
    {
    cout<<id<<"   \t"<<discountType<<"   \t"<<discountStatus<<"  \t"<<discountRate<<endl;  
    }
}
void checkInList(int id , string name , string addres ,double contact ,string email , string gender ,int adult ,int children ,string checkInDate , string checkOutDate , int days , int roomNo , string roomType , string roomStatus , int roomRate ,string discountType , string discountStatus  , int discountRate , float balance)
{
    if (id >0)
    {
    cout<<id<<"\t"<<name<<"\t"<<addres<<"\t"<<contact<<"\t"<<email<<"\t"<<gender<<"  \t"<<adult<<"   \t"<<children<<"    \t"<<checkInDate<<"     \t"<<checkOutDate<<"       \t"<<days<<"\t"<<roomNo<<"\t"<<roomType<<"   \t"<<roomStatus<<"  \t"<<roomRate<<"\t"<<discountType<<"  \t"<<discountStatus<<"   \t"<<discountRate<<"\t"<<balance<<endl;
    }
}
void checkOutList(int id , string name , string addres ,double contact ,string email , string gender ,int adult ,int children ,string checkInDate , string checkOutDate , int days , int roomNo , string roomType , string roomStatus , int roomRate ,string discountType , string discountStatus  , int discountRate , float balance)
{
    if (id > 0)
    {
    cout<<id<<"\t"<<name<<"\t"<<addres<<"\t"<<contact<<"\t"<<email<<"\t"<<gender<<"  \t"<<adult<<"   \t"<<children<<"    \t"<<checkInDate<<"     \t"<<checkOutDate<<"       \t"<<days<<"\t"<<roomNo<<"\t"<<roomType<<"   \t"<<roomStatus<<"  \t"<<roomRate<<"\t"<<discountType<<"  \t"<<discountStatus<<"   \t"<<discountRate<<"\t"<<balance<<endl;
    }
}
void reservationList(int id , string name , string addres ,double contact ,string email , string gender ,int adult ,int children ,string checkInDate , string checkOutDate , int days , int roomNo , string roomType , string roomStatus , int roomRate ,string discountType , string discountStatus  , int discountRate , float balance)
{
    if (id > 0 )
    {
  cout<<id<<"\t"<<name<<"\t"<<addres<<"\t"<<contact<<"\t"<<email<<"\t"<<gender<<"  \t"<<adult<<"   \t"<<children<<"    \t"<<checkInDate<<"     \t"<<checkOutDate<<"       \t"<<days<<"\t"<<roomNo<<"\t"<<roomType<<"   \t"<<roomStatus<<"  \t"<<roomRate<<"\t"<<discountType<<"  \t"<<discountStatus<<"   \t"<<discountRate<<"\t"<<balance<<endl;  
    }  
}
void availableRoom (int id , int roomNo , string roomType , string roomStatus , int roomRate)
{
    if (id > 0 )
    {
        cout<<"ID"<<"\t"<<" AVAILABLE ROOM NO"<<"\t"<<" AVAILABLE  ROOM TYPE"<<"\t"<<" AVAILABLE ROOM STATUS"<<"\t"<<"AVAILABLE ROOM STATUS"<<endl;
    }
}
// function of clear screen
 void clearScreen()
 {
     cout<<"press any key to clear screen";
     getch();
     system ("CLS");
 }