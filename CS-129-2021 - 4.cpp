# include<iostream>
# include <cmath>
# include <stdlib.h>
# include <conio.h>
using namespace std;


//  -----------------------------------------------------START FUNCTION PROTOTYPE ....
void header();
string loginHeader( );
string userMenu();
string managerMenu();
void newuser();
void adduser(string name , string pass , string roll );
void newguest();
void addguest(int idp , string namep , string addressp , double contactp , string emailp ,string genderp);// p stands for parameter
void viewguestlist();
void newroom();
void addnewroom(int idp , int roomnop , string typep , string statusp , int ratep);
void viewroomlist();
void newdiscount();
void addnewdiscount( int idp , string typep , string statusp , string discountratep );
void viewdiscountlist(); 
void newcheckinform();
void viewcheckinformlist();
void checkoutform();
void addcheckoutform( int id , string name , string address , double contact , string email , string gender , int noC , int noA , string indate , string outdate ,int days , int roomno , string roomtype , string statusroom,int roomrate,  string discountstatus , string discounttype , int discountrate , double obalance  );
void viewcheckoutformlist();
void availableroom();
void addavailableroom(int id , int roomno , string roomtype , string roomstatus , int roomrate);
void viewavailableroom();
void viewreservationlist();
int viewsorting();
void newreservationform();
void addreservationform(int id , string name , string address , double contact , string email , string gender , int noC , int noA , string indate , string outdate ,int days , int roomno , string roomtype , string statusroom,int roomrate,  string discountstatus , string discounttype , int discountrate , double rbalance );
void changepassword();
void clearScreen();
void sendmessage();
void mannagerAlert();


// -------------------------------------------------------END FUNCTION PROTOTYPE ....


// -------------------------------------------------------- SATRT DATA STRUCRURE .....

const int TOTAL_VALUE =10;// constant value which is not change in the program...

string username[TOTAL_VALUE];
string password[TOTAL_VALUE];
string role[TOTAL_VALUE];
    

    int Gid[TOTAL_VALUE];// guest id
    string name[TOTAL_VALUE];
    string addres[TOTAL_VALUE];
    string gender[TOTAL_VALUE];
    string email[TOTAL_VALUE]; 
    double contact[TOTAL_VALUE];


    int Rid[TOTAL_VALUE];// room id
    int roomNO[TOTAL_VALUE];
    string Troom[TOTAL_VALUE];//room type
    string Sroom[TOTAL_VALUE];//room status
    int roomRate[TOTAL_VALUE];


    int Did[TOTAL_VALUE];//discount id
    string Tdiscount[TOTAL_VALUE];//discount type
    string Sdiscount[TOTAL_VALUE];// discount status
    string discountRate[TOTAL_VALUE];

    
    
     
//(TCI stands for TRANSACTION CHECK IN )

    int TCIGid[TOTAL_VALUE];// transaction check in guest id
    string TCIname[TOTAL_VALUE];// NAME
    int TCIroomNO[TOTAL_VALUE];// ROOM NO
    string TCITroom[TOTAL_VALUE];// ROOM TYPE
    int TCIroomRate[TOTAL_VALUE];// RATE OF ROOM
    string TCIdate[TOTAL_VALUE];// CHECK IN DATE
    string TCIodate[TOTAL_VALUE];//check in ke form mai check out date
    int TCIa[TOTAL_VALUE];// no of adult
    int TCIc[TOTAL_VALUE];// no of children
    string TCISdiscount[TOTAL_VALUE];// DISCOUNT STATUS
    int  TCIdiscountRate[TOTAL_VALUE];// DISCOUNT RATE
    string TCITdiscount[TOTAL_VALUE];// DISCOUNT TYPE
    string TCIaddres[TOTAL_VALUE];// ADREESS OF GUEST
    double TCIcontact[TOTAL_VALUE];// CONTACT OF THE GUEST
    string TCIemail[TOTAL_VALUE];// EMAIL OF THE GUEST
    string TCIgender[TOTAL_VALUE];// GENDER OF THE GUEST
    string TCISroom[TOTAL_VALUE];// STATUS OF THE ROOM
    int Idays[TOTAL_VALUE];// no of days for living in hotel IN CHECK IN FORM
    double Ibalance[TOTAL_VALUE];


    // ------------------------------------- left part of function because it is not implement after the main so i use before the the main

int checkin_count = 0;
void addcheckinform( int id , string name , string address , double contact , string email , string gender , int noC , int noA , string indate , string outdate ,int days , int roomno , string roomtype , string statusroom,int roomrate,  string discountstatus , string discounttype , int discountrate , float ibalance  )
{
    
    TCIGid[checkin_count] = id ;// transaction check in guest id
    TCIname[checkin_count] = name;// NAME
    TCIaddres[checkin_count] = address;// ADREESS OF GUEST
    TCIcontact[checkin_count] = contact;// CONTACT OF THE GUEST
    TCIemail[checkin_count] = email;// EMAIL OF THE GUEST
    TCIgender[checkin_count] = gender;// GENDER OF THE GUEST
     TCIa[checkin_count] = noA;// no of adult
    TCIc[checkin_count] = noC;// no of children
     TCIdate[checkin_count] = indate;// CHECK IN DATE
    TCIodate[checkin_count] = outdate;//check in ke form mai check out date
    Idays[checkin_count] = days;// no of day
    TCIroomNO[checkin_count] = roomno;// ROOM NO
    TCITroom[checkin_count] = roomtype;// ROOM TYPE
     TCISroom[checkin_count] = statusroom;// STATUS OF THE ROOM
    TCIroomRate[checkin_count] = roomrate;// RATE OF ROOM
    TCISdiscount[checkin_count] = discountstatus;// DISCOUNT STATUS
     TCITdiscount[checkin_count] = discounttype;// DISCOUNT TYPE
    TCIdiscountRate[checkin_count] = discountrate;// DISCOUNT RATE
    Ibalance[checkin_count] = ibalance ; 
   
    checkin_count ++;

}
// ---------------------------------------------is mai masla arha tha is liye is ko pehle use kr liya hai
    //(TCO stands for TRANSACTION CHECK OUT FORM)

    int TCOGid[TOTAL_VALUE];// transaction check in guest id
    string TCOname[TOTAL_VALUE];// NAME
    int TCOroomNO[TOTAL_VALUE];// ROOM NO
    string TCOTroom[TOTAL_VALUE];// ROOM TYPE
    int TCOroomRate[TOTAL_VALUE];// RATE OF ROOM
    string TCOdate[TOTAL_VALUE];// CHECK OUT  DATE
    string TCOidate[TOTAL_VALUE];//check OUT ke form mai check IN date
    int TCOa[TOTAL_VALUE];// no of adult
    int TCOc[TOTAL_VALUE];// no of children
    string TCOSdiscount[TOTAL_VALUE];// DISCOUNT STATUS
    int  TCOdiscountRate[TOTAL_VALUE];// DISCOUNT RATE
    string TCOTdiscount[TOTAL_VALUE];// DISCOUNT TYPE
    string TCOaddres[TOTAL_VALUE];// ADRESSS OF THE GUEST
    double TCOcontact[TOTAL_VALUE];// CONTACT OF THE GUEST
    string TCOemail[TOTAL_VALUE];// EMAIL OF THE PERSON
    string TCOgender[TOTAL_VALUE];// GENDER
    string TCOSroom[TOTAL_VALUE];// STATUS OF THE ROOM
    int Odays[TOTAL_VALUE];//NO OF DAYS IN CHECK OUT FORM
    double Obalance[TOTAL_VALUE];
    double Obalance2[TOTAL_VALUE];
// A stans for AVAILABLE

    int ARid[TOTAL_VALUE];
    int AroomNO[TOTAL_VALUE];
    string ATroom[TOTAL_VALUE];
    string ASroom[TOTAL_VALUE];
    int AroomRate[TOTAL_VALUE];
        
    //  R stands for RESERVATION FORM

    int RGid[TOTAL_VALUE];
    string Rname[TOTAL_VALUE];
    int RroomNO[TOTAL_VALUE];
    string RTroom[TOTAL_VALUE];
    int RroomRate[TOTAL_VALUE];
    string Rodate[TOTAL_VALUE];
    string Ridate[TOTAL_VALUE];
    int Ra[TOTAL_VALUE];
    int Rc[TOTAL_VALUE];
    string RSdiscount[TOTAL_VALUE];
    int  RdiscountRate[TOTAL_VALUE];
    string RTdiscount[TOTAL_VALUE];
    string Raddres[TOTAL_VALUE];
    double Rcontact[TOTAL_VALUE];
    string Remail[TOTAL_VALUE];
    string Rgender[TOTAL_VALUE];
    string RSroom[TOTAL_VALUE];
    int Rdays[TOTAL_VALUE];
    double Rbalance[TOTAL_VALUE]; 

    // message in line type array
    string line[TOTAL_VALUE];


int usercount = 0;
int guest_count = 0;
int room_count = 0;
int discount_count = 0;

int checkout_count = 0;
int availableroom_count = 0;
int reservation_count = 0 ;
int index = 0 ;








// -------------------------------------------------------- SATRT DATA STRUCRURE .....



main ()
{
    string who , option;
    adduser("abdullah" , "123" , "MANAGER");
   while(true)
   {
      who = loginHeader();
       if (who == "MANAGER")
       {
    while(true)
      {
         system ("CLS");
         option = managerMenu();
         if (option == "1")
         {
             // add new guest
           newguest();
         }
         else if (option == "2")
         {
              // view guest list
              viewguestlist();
         }
         else if (option == "3")
         {
             // add new room 
             newroom();
         }
         else if (option == "4")
         {
             // view the room type list entered by manager
            viewroomlist(); 
         }
         else if (option == "5")
         {
            // NEW DISCOUNT TYPE
            newdiscount(); 
         }
         else if (option == "6")
         {
            // view the type of discount list
            viewdiscountlist(); 
         }
         else if (option == "7")
         {
             // new check in form 
             newcheckinform();
         }
         else if (option == "8")
         {
             // view the check in form list
             viewcheckinformlist();
         }
         else if (option == "9")
         {
            // check out form
            checkoutform(); 
         }
         else if (option == "10")
         {
             // to vie check out form list 
             void viewcheckoutformlist();
         }
         else if (option == "11")
         {
             // new available room
             availableroom();
         }
         else if (option == "12")
         {
             // view reservation list
             viewreservationlist();
         }
         else if (option == "13")
         {
             // add the new user
             newuser();
         }
         else if (option == "14")
         {
             // change the password 
            changepassword();
         }  

         else if (option == "15")
         {
             // sorting of the check out forms list according to the the balance
             int x;
             for (int i = 0 ; i<checkout_count ; i++)
               {
                 Obalance[i] = Obalance2[i];
               }
             cout<<"ID"<<"\t"<<"NAME"<<"\t"<<"ADDRESS"<<"\t"<<"CONTACT"<<"\t"<<"EMAIL"<<"\t"<<"GENDER"<<"\t"<<"NO ADULT"<<"\t"<<"NO CHILD"<<"\t"<<"CHK IN DATE"<<"\t"<<"CHK OUT DATE"<<"\t"<<"NO DAYS"<<"\t"<<"ROOM NO"<<"\t"<<"ROOM TYPE"<<"\t"<<"ROOM STATUS"<<"\t"<<"ROOM RATE"<<"\t"<<"DISCOUNT TYPE"<<"\t"<<"DISCOUNT STATUS"<<"\t"<<"DISCOUNT RATE"<<"\t"<<"BALANCE"<<endl;   
           for (int z = 0 ; z<checkout_count ; z++)
           {
                x = viewsorting();
            cout<<TCOGid[x]<<"\t"<<TCOname[x]<<"\t"<<TCOaddres[x]<<"\t"<<TCOcontact[x]<<"\t"<<TCOemail[x]<<"\t"<<TCOgender[x]<<"\t"<<TCOa[x]<<"\t"<<TCOc[x]<<"\t"<<TCOidate[x]<<"\t"<<TCOdate[x]<<"\t"<<Odays[x]<<"\t"<<TCOroomNO[x]<<"\t"<<TCOTroom[x]<<"\t"<<TCOSroom[x]<<"\t"<<TCOroomRate[x]<<"\t"<<TCOSdiscount[x]<<"\t"<<TCOTdiscount[x]<<"\t"<<TCOdiscountRate[x]<<"\t"<<Obalance[x]<<endl;
           }
         }

         else if (option == "16")
         {
             // alert msg send to the user
             sendmessage();
         }
         else if (option == "17")
         {
             // logout
             break;
         }
    clearScreen();
       }// end of while manager
     }// end of manager if
       else if (who == "USER")
       {
           while (true){
               system ("CLS");
           option = userMenu();
           if (option == "1")
           {
             // view the room list
             viewroomlist();
           }
           else if (option == "2")
         {
             // view the discount list
             viewdiscountlist();
         }
         else if (option == "3")
         {
            // view the available room list 
            viewavailableroom();
         }
         else if (option == "4")
         {
             // add the reservation form 
             newreservationform();
         }
         else if (option == "5")
         {
             // mannager alert massage
             mannagerAlert();
         }
         else if (option == "6")
         {
             // logout 
             break;
         }
    clearScreen();
       }// end of while user

       }// end of user if
       else 
       {
           cout<<"invalid option selected"<<endl;
       }// end of invalid else
   }// end of main while 

     

}// end of main 

// function of header
void header()
{
          cout<<"*****************************************************************"<<endl;
          cout<<"*************BHB       HOTEL        MANAGEMENT        SYSTEM*****"<<endl;
          cout<<"*****************************************************************"<<endl;
}
// function of login header and to find the actual role which is to be login into the BHB HOTEL MANAGEMENT SYSTEM
string loginHeader ()
{
    int count =0;
    cout<<"*****************************************************************"<<endl;
    cout<<"********************LOGIN SCREEN*********************************"<<endl;
    cout<<"*****************************************************************"<<endl;
    string name , pass ;

    cout<<"enter the user name";
    cin>>name;
    cout<<"enter the password";
    cin>>pass;
for (int i =0 ; i<usercount ; i++)
{
    if (username[i] == name && password[i] == pass)
    {
        index = i;
       return role[i] ;
    }
    else{
         count++;
    }
       
   }
   if (count == usercount)
   {
       cout<<"invalid username"<<endl;
   }
   count =0;
  
}
// function of manager menu
string managerMenu()
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
          cout<<"13. add users..."<<endl;
          cout<<"14. change passwords"<<endl;
          cout<<"15. sorting check out form list according to high balance"<<endl;
          cout<<"16. aleret msg send to user"<<endl;
          cout<<"17.  LOGOUT"<<endl;
          string option;
          cout<<"enter the one of the options..."<<endl;
          cin>>option;
          return option;
}
// function of user menu
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
          cout<<"5. mannager alert message"<<endl;
          cout<<"6. log out"<<endl;
          string option;
          cout<<"enter the one of the options..."<<endl;
          cin>>option;
          return option;
}
// function of new user
void newuser()
{
string name , pass , roll ;
cout<<"enter the user name";
cin>>name;
cout<<"enter the password";
cin>>pass;
cout<<"enter the role of person";
cin>>roll; 
adduser( name ,  pass , roll );
}
// function of add new user
void adduser(string name , string pass , string roll )
{
    username[usercount] = name;
    password[usercount] = pass;
    role[usercount] = roll;
    usercount++;
}
// function of new guest 
void newguest()
{
    int id ;
    string name , address,email,gender;
    double contact;
    cout<<"enter the id of the guest..";
    cin>>id;
    cout<<"enter the name of the guest...";
    cin>>name;
    cout<<"enter the address of guest... ";
    cin>>address;
    cout<<"enter the contact of the guest..";
    cin>>contact;
    cout<<"enter the email address of the guest";
    cin>>email;
    cout<<"enter the gender OF The guest..";
    cin>>gender;
    addguest( id , name , address , contact , email , gender );
}
// function of add the guest list into the array
void addguest(int idp , string namep , string addressp , double contactp , string emailp ,string genderp)// p stands for parameter
{
     Gid[guest_count] = idp;
     name[guest_count] = namep;
     addres[guest_count] = addressp;
     contact[guest_count] = contactp;
     email[guest_count] = emailp;
     gender[guest_count] = genderp;
     guest_count ++;
}
// function of view the guest list
void viewguestlist ()
{
   cout<<"ID"<<"\t"<<"NAME"<<"\t"<<"ADDRESS"<<"\t"<<"CONTACT"<<"\t"<<"EMAIL"<<"\t"<<"GENDER"<<endl; 
  for (int i =0 ; i<guest_count ; i++)
  {
  
   cout<<Gid[i]<<"\t"<<name[i]<<"\t"<<addres[i]<<"\t"<<contact[i]<<"\t"<<email[i] <<"\t"<< gender[i] <<endl;
    }
}
// function of new room
void newroom()
{
     int id ,  roomno , rate ;
     string type , status ;
    cout<<"enter the id of the room...";
    cin>>id;
    cout<<"enter the room no... ";
    cin>>roomno;
    cout<<"enter the room type..";
    cin>>type;
    cout<<"enter the room status...";
    cin>>status;
    cout<<"enter the room rate..";
    cin>>rate;
    addnewroom( id , roomno , type , status , rate  );
}
// function of add new room int the array
void addnewroom(int idp , int roomnop , string typep , string statusp , int ratep)
{
     Rid[ room_count] = idp;
     roomNO[ room_count] = roomnop ; 
     Troom[ room_count] = typep;
     Sroom[ room_count] = statusp;
     roomRate[ room_count] = ratep;
     room_count++;
}
// function of view room list
void viewroomlist ()
{
    cout<<"ROOMID"<<"\t"<<"ROOMNO"<<"\t"<<"ROOMTYPE"<<"\t"<<"ROOMSTATUS"<<"\t"<<"ROOMRATE"<<endl;
    for (int i = 0 ; i<room_count ; i++)
    {
   cout<<Rid[i]<<"\t"<<roomNO[i]<<"\t"<<Troom[i]<<"\t"<<Sroom[i]<<"\t"<< roomRate[i]<<endl; 
    }
}
// function of new discount type
void newdiscount()
{
    int id ;
    string type , status , discountrate;
cout<<"enter the id of the discount...";
cin>>id;
cout<<"enter the discount type..";
cin>>type;
cout<<"enter the discount status...";
cin>>status;
cout<<"enter the discount  rate..";
cin>>discountrate;
addnewdiscount(  id , type ,  status , discountrate );
}
// function of add discount type into the array
void addnewdiscount( int idp , string typep , string statusp , string discountratep )
{
 Did[discount_count] = idp;//discount id
 Tdiscount[discount_count]= typep;//discount type
 Sdiscount[discount_count] = statusp;// discount status
 discountRate[discount_count] = discountratep ;
    discount_count ++;
    
}
// function of view discount list 
void viewdiscountlist()
{
    cout<<"ID"<<"\t"<<"DISCOUNTTYPE"<<"\t"<<"DISCOUNTSTATUS"<<"\t"<<"DISCOUNTRATE"<<endl; 
    for(int i = 0 ; i<discount_count ; i++)
    {
    cout<<Did[i] <<"\t"<<Tdiscount[i]<<"\t"<<Sdiscount[i]<<"\t"<<discountRate[i]<<endl;  
    }
}

// function of new check in form
void newcheckinform()
{
    double contact , balance;
    
    int id , noC , noA , roomrate , discountrate , days , roomno ;
    string name , address  , email , gender , indate , outdate   , roomtype , statusroom , discountstatus , discounttype  ;
    cout<<"enter the  transaction id of the guest..";
    cin>>id;
    cout<<"enter the name of the guest...";
    cin>>name;
    cout<<"enter the address of guest... ";
    cin>>address;
    cout<<"enter the contact of the guest..";
    cin>>contact;
    cout<<"enter the email address of the guest";
    cin>>email;
    cout<<"enter the gender OF The guest..";
    cin>>gender;
    cout<<"enter the no of adult with guets...";
    cin>>noA;
    cout<<"enter the no of childre with the guest..";
    cin>>noC;
    cout<<"enter the check in date of the guest...";
    cin>>indate;
    cout<<"enter the check out date of the guest..";
    cin>>outdate;
    cout<<"enter the no of days";
    cin>>days;
    cout<<"enter the the room no ...";
    cin>>roomno;
    cout<<"enter the room type....";
    cin>>roomtype;
    cout<<"enter the room status....";
    cin>>statusroom;
    cout<<"enter the room rate....";
    cin>>roomrate;
    cout<<"enter the discount status...";
    cin>>discountstatus;
    cout<<"enter the discount rate ....";
    cin>>discountrate;
    cout<<"enter the discount type ...";
    cin>>discounttype;

     if ((discountstatus =="vip" && statusroom =="vip")  && (discounttype == "four" && roomtype =="four"))
                  {
                      
                      balance = (roomrate * days )* (discountrate/100.0);
            
                  }
                  else if ((discountstatus =="vip" && statusroom =="vip")  && (discounttype == "three" && roomtype =="three"))
                  {
                      
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="vip" && statusroom =="vip")  && (discounttype == "two" && roomtype =="two"))
                  {
                    
                    balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="vip" && statusroom =="vip")  && (discounttype == "one" && roomtype =="one"))
                  {
                    
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="regular" && statusroom =="regular")  && (discounttype == "four" && roomtype =="four"))
                  {
                      
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="regular" && statusroom =="regular")  && (discounttype == "three" && roomtype =="three"))
                  {
                      
                      balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="regular" && statusroom =="regular")  && (discounttype == "two" && roomtype =="two"))
                  {
        
                      balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="regular" && statusroom =="regular")  && (discounttype == "one" && roomtype =="one"))
                  {
            
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="none" && statusroom =="none")  && (discounttype == "four" && roomtype =="four"))
                  {
    
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="none" && statusroom =="none")  && (discounttype == "three" && roomtype =="three"))
                  {
            
                      balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="none" && statusroom =="none")  && (discounttype == "two" && roomtype =="two"))
                  {
        
                      balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="none" && statusroom =="none")  && (discounttype == "one" && roomtype =="one"))
                  {
                    
                     balance = (roomrate * days )* (discountrate/100.0);
                  }

    addcheckinform(id , name , address , contact , email , gender , noC , noA , indate , outdate , days , roomno , roomtype ,statusroom, roomrate , discountstatus , discounttype , discountrate , balance );
}

// function of view check in form
void viewcheckinformlist()
{
    cout<<"ID"<<"\t"<<"NAME"<<"\t"<<"ADDRESS"<<"\t"<<"CONTACT"<<"\t"<<"EMAIL"<<"\t"<<"GENDER"<<"\t"<<"NO ADULT"<<"\t"<<"NO CHILD"<<"\t"<<"CHK IN DATE"<<"\t"<<"CHK OUT DATE"<<"\t"<<"NO DAYS"<<"\t"<<"ROOM NO"<<"\t"<<"ROOM TYPE"<<"\t"<<"ROOM STATUS"<<"\t"<<"ROOM RATE"<<"\t"<<"DISCOUNT TYPE"<<"\t"<<"DISCOUNT STATUS"<<"\t"<<"DISCOUNT RATE"<<"\t"<<"BALANCE"<<endl;
for (int i = 0 ; i<checkin_count ; i++)
{
    cout<<TCIGid[i]<<"\t"<<TCIname[i]<<"\t"<<TCIaddres[i]<<"\t"<<TCIcontact[i]<<"\t"<<TCIemail[i]<<"\t"<<TCIgender[i]<<"\t"<<TCIa[i]<<"\t"<<TCIc[i]<<"\t"<<TCIdate[i]<<"\t"<<TCIodate[i]<<"\t"<<Idays[i]<<"\t"<<TCIroomNO[i]<<"\t"<<TCITroom[i]<<"\t"<<TCISroom[i]<<"\t"<<TCIroomRate[i]<<"\t"<<TCISdiscount[i]<<"\t"<<TCITdiscount[i]<<"\t"<<TCIdiscountRate[i]<<"\t"<<Ibalance[i]<<endl;
}   
}
// function of new check out form
void checkoutform()
{
    double contact , balance;
    
    int id , noC , noA , roomrate , discountrate , days , roomno ;
    string name , address  , email , gender , indate , outdate   , roomtype , statusroom , discountstatus , discounttype  ;
    cout<<"enter the  transaction id of the guest..";
    cin>>id;
    cout<<"enter the name of the guest...";
    cin>>name;
    cout<<"enter the address of guest... ";
    cin>>address;
    cout<<"enter the contact of the guest..";
    cin>>contact;
    cout<<"enter the email address of the guest";
    cin>>email;
    cout<<"enter the gender OF The guest..";
    cin>>gender;
    cout<<"enter the no of adult with guets...";
    cin>>noA;
    cout<<"enter the no of childre with the guest..";
    cin>>noC;
    cout<<"enter the check in date of the guest...";
    cin>>indate;
    cout<<"enter the check out date of the guest..";
    cin>>outdate;
    cout<<"enter the no of days";
    cin>>days;
    cout<<"enter the the room no ...";
    cin>>roomno;
    cout<<"enter the room type....";
    cin>>roomtype;
    cout<<"enter the room status....";
    cin>>statusroom;
    cout<<"enter the room rate....";
    cin>>roomrate;
    cout<<"enter the discount status...";
    cin>>discountstatus;
    cout<<"enter the discount rate ....";
    cin>>discountrate;
    cout<<"enter the discount type ...";
    cin>>discounttype;

     if ((discountstatus =="vip" && statusroom =="vip")  && (discounttype == "four" && roomtype =="four"))
                  {
                      
                      balance = (roomrate * days )* (discountrate/100.0);
            
                  }
                  else if ((discountstatus =="vip" && statusroom =="vip")  && (discounttype == "three" && roomtype =="three"))
                  {
                      
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="vip" && statusroom =="vip")  && (discounttype == "two" && roomtype =="two"))
                  {
                    
                    balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="vip" && statusroom =="vip")  && (discounttype == "one" && roomtype =="one"))
                  {
                    
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="regular" && statusroom =="regular")  && (discounttype == "four" && roomtype =="four"))
                  {
                      
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="regular" && statusroom =="regular")  && (discounttype == "three" && roomtype =="three"))
                  {
                      
                      balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="regular" && statusroom =="regular")  && (discounttype == "two" && roomtype =="two"))
                  {
        
                      balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="regular" && statusroom =="regular")  && (discounttype == "one" && roomtype =="one"))
                  {
            
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="none" && statusroom =="none")  && (discounttype == "four" && roomtype =="four"))
                  {
    
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="none" && statusroom =="none")  && (discounttype == "three" && roomtype =="three"))
                  {
            
                      balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="none" && statusroom =="none")  && (discounttype == "two" && roomtype =="two"))
                  {
        
                      balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="none" && statusroom =="none")  && (discounttype == "one" && roomtype =="one"))
                  {
                    
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
    addcheckoutform(id , name , address , contact , email , gender , noC , noA , indate , outdate , days , roomno , roomtype ,statusroom, roomrate , discountstatus , discounttype , discountrate , balance );          
}

// function of add check out form into the array
void addcheckoutform( int id , string name , string address , double contact , string email , string gender , int noC , int noA , string indate , string outdate ,int days , int roomno , string roomtype , string statusroom,int roomrate,  string discountstatus , string discounttype , int discountrate , double obalance  )
{
    TCOGid[checkout_count] = id ;// transaction check out guest id
    TCOname[checkout_count] = name;// NAME
    TCOaddres[checkout_count] = address;// ADREESS OF GUEST
    TCOcontact[checkout_count] = contact;// CONTACT OF THE GUEST
    TCOemail[checkout_count] = email;// EMAIL OF THE GUEST
    TCOgender[checkout_count] = gender;// GENDER OF THE GUEST
     TCOa[checkout_count] = noA;// no of adult
    TCOc[checkout_count] = noC;// no of children
    TCOidate[checkout_count] = indate;//check out ke form mai check in date
    TCOdate[checkout_count] = outdate;// CHECK out DATE
    Odays[checkout_count] = days;// no of day
    TCOroomNO[checkout_count] = roomno;// ROOM NO
    TCOTroom[checkout_count] = roomtype;// ROOM TYPE
     TCOSroom[checkout_count] = statusroom;// STATUS OF THE ROOM
    TCOroomRate[checkout_count] = roomrate;// RATE OF ROOM
    TCOSdiscount[checkout_count] = discountstatus;// DISCOUNT STATUS
     TCOTdiscount[checkout_count] = discounttype;// DISCOUNT TYPE
    TCOdiscountRate[checkout_count] = discountrate;// DISCOUNT RATE
    Obalance[checkout_count] = obalance ; 
     checkout_count ++;
}
// function of view check out form 
void viewcheckoutformlist()
{
     cout<<"ID"<<"\t"<<"NAME"<<"\t"<<"ADDRESS"<<"\t"<<"CONTACT"<<"\t"<<"EMAIL"<<"\t"<<"GENDER"<<"\t"<<"NO ADULT"<<"\t"<<"NO CHILD"<<"\t"<<"CHK IN DATE"<<"\t"<<"CHK OUT DATE"<<"\t"<<"NO DAYS"<<"\t"<<"ROOM NO"<<"\t"<<"ROOM TYPE"<<"\t"<<"ROOM STATUS"<<"\t"<<"ROOM RATE"<<"\t"<<"DISCOUNT TYPE"<<"\t"<<"DISCOUNT STATUS"<<"\t"<<"DISCOUNT RATE"<<"\t"<<"BALANCE"<<endl;
for (int i = 0 ; i<checkout_count ; i++)
{
    cout<<TCOGid[i]<<"\t"<<TCOname[i]<<"\t"<<TCOaddres[i]<<"\t"<<TCOcontact[i]<<"\t"<<TCOemail[i]<<"\t"<<TCOgender[i]<<"\t"<<TCOa[i]<<"\t"<<TCOc[i]<<"\t"<<TCOidate[i]<<"\t"<<TCOdate[i]<<"\t"<<Odays[i]<<"\t"<<TCOroomNO[i]<<"\t"<<TCOTroom[i]<<"\t"<<TCOSroom[i]<<"\t"<<TCOroomRate[i]<<"\t"<<TCOSdiscount[i]<<"\t"<<TCOTdiscount[i]<<"\t"<<TCOdiscountRate[i]<<"\t"<<Obalance[i]<<endl;
}   
}
// function of new available room
void availableroom()
{
    int id , roomno , roomrate ;
    string roomtype , roomstatus ;
    cout<<"enter the id of the available  room...";
    cin>>id;
    cout<<"enter the available room no... ";
    cin>>roomno;
    cout<<"enter the available  room type..";
    cin>>roomtype;
    cout<<"enter the available room status...";
    cin>>roomstatus;
    cout<<"enter the available  room rate..";
    cin>>roomrate;
    addavailableroom( id , roomno ,  roomtype ,  roomstatus , roomrate); 
}
// function of add available room into the array
void addavailableroom( int id , int roomno , string roomtype , string roomstatus , int roomrate)
{
   ARid[availableroom_count] = id ;
   AroomNO[availableroom_count] = roomno;
   ATroom[availableroom_count] = roomtype;
   ASroom[availableroom_count] = roomstatus;
   AroomRate[availableroom_count] = roomrate;
    availableroom_count ++;
}
// function of view available rooms 
void viewavailableroom()
{
    cout<<"ID"<<"\t"<<"ROOM NO"<<"\t"<<"ROOM TYPE"<<"\t"<<"ROOM STATUS"<<"\t"<<"ROOM rate"<<endl;
    for(int i = 0 ; i<availableroom_count ; i ++)
    {
    cout<<ARid[i]<<"\t"<<AroomNO[i]<<"\t"<< ATroom[i]<<"\t"<<ASroom[i]<<"\t"<<AroomRate[i]<<endl;
    }
}
// function of view the reservation list
void viewreservationlist()
{
    cout<<"ID"<<"\t"<<"NAME"<<"\t"<<"ADDRESS"<<"\t"<<"CONTACT"<<"\t"<<"EMAIL"<<"\t"<<"GENDER"<<"\t"<<"NO ADULT"<<"\t"<<"NO CHILD"<<"\t"<<"CHK IN DATE"<<"\t"<<"CHK OUT DATE"<<"\t"<<"NO DAYS"<<"\t"<<"ROOM NO"<<"\t"<<"ROOM TYPE"<<"\t"<<"ROOM STATUS"<<"\t"<<"ROOM RATE"<<"\t"<<"DISCOUNT TYPE"<<"\t"<<"DISCOUNT STATUS"<<"\t"<<"DISCOUNT RATE"<<"\t"<<"BALANCE"<<endl;
    for (int i = 0 ; i<reservation_count ; i++)
    {
     cout<<RGid[i]<<"\t"<<Rname[i]<<"\t"<<Raddres[i]<<"\t"<<Rcontact[i]<<"\t"<<Remail[i]<<"\t"<<Rgender[i]<<"\t"<<Ra[i]<<"\t"<<Rc[i]<<"\t"<<Ridate[i]<<"\t"<<Rodate[i]<<"\t"<<Rdays[i]<<"\t"<<RroomNO[i]<<"\t"<<RTroom[i]<<"\t"<<RSroom[i]<<"\t"<<RroomRate[i]<<"\t"<<RSdiscount[i]<<"\t"<<RTdiscount[i]<<"\t"<<RdiscountRate[i]<<"\t"<<Rbalance[i]<<endl;
    }
}
 
 // funtion of sorting the check out form according to balance
int viewsorting()
{
    
    int idx;
    double large = Obalance2[0];
    for (int i = 0 ; i<checkout_count ; i++)
    {
        if (large < Obalance2[i])
        large = Obalance2[i];
        Obalance2[i] = -1;
        idx = i;
        return idx ;
    }

}
// function of new reservation form
void newreservationform()
{
    double contact , balance;
    
    int id , noC , noA , roomrate , discountrate , days , roomno ;
    string name , address  , email , gender , indate , outdate   , roomtype , statusroom , discountstatus , discounttype  ;
    cout<<"enter the  transaction id of the guest..";
    cin>>id;
    cout<<"enter the name of the guest...";
    cin>>name;
    cout<<"enter the address of guest... ";
    cin>>address;
    cout<<"enter the contact of the guest..";
    cin>>contact;
    cout<<"enter the email address of the guest";
    cin>>email;
    cout<<"enter the gender OF The guest..";
    cin>>gender;
    cout<<"enter the no of adult with guets...";
    cin>>noA;
    cout<<"enter the no of childre with the guest..";
    cin>>noC;
    cout<<"enter the check in date of the guest...";
    cin>>indate;
    cout<<"enter the check out date of the guest..";
    cin>>outdate;
    cout<<"enter the no of days";
    cin>>days;
    cout<<"enter the the room no ...";
    cin>>roomno;
    cout<<"enter the room type....";
    cin>>roomtype;
    cout<<"enter the room status....";
    cin>>statusroom;
    cout<<"enter the room rate....";
    cin>>roomrate;
    cout<<"enter the discount status...";
    cin>>discountstatus;
    cout<<"enter the discount rate ....";
    cin>>discountrate;
    cout<<"enter the discount type ...";
    cin>>discounttype;

        if ((discountstatus =="vip" && statusroom =="vip")  && (discounttype == "four" && roomtype =="four"))
                  {
                      
                      balance = (roomrate * days )* (discountrate/100.0);
            
                  }
                  else if ((discountstatus =="vip" && statusroom =="vip")  && (discounttype == "three" && roomtype =="three"))
                  {
                      
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="vip" && statusroom =="vip")  && (discounttype == "two" && roomtype =="two"))
                  {
                    
                    balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="vip" && statusroom =="vip")  && (discounttype == "one" && roomtype =="one"))
                  {
                    
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="regular" && statusroom =="regular")  && (discounttype == "four" && roomtype =="four"))
                  {
                      
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="regular" && statusroom =="regular")  && (discounttype == "three" && roomtype =="three"))
                  {
                      
                      balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="regular" && statusroom =="regular")  && (discounttype == "two" && roomtype =="two"))
                  {
        
                      balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="regular" && statusroom =="regular")  && (discounttype == "one" && roomtype =="one"))
                  {
            
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="none" && statusroom =="none")  && (discounttype == "four" && roomtype =="four"))
                  {
    
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="none" && statusroom =="none")  && (discounttype == "three" && roomtype =="three"))
                  {
            
                      balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="none" && statusroom =="none")  && (discounttype == "two" && roomtype =="two"))
                  {
        
                      balance = (roomrate * days )* (discountrate/100.0);
                  }
                  else if ((discountstatus =="none" && statusroom =="none")  && (discounttype == "one" && roomtype =="one"))
                  {
                    
                     balance = (roomrate * days )* (discountrate/100.0);
                  }
    addreservationform (id , name , address , contact , email , gender , noC , noA , indate , outdate , days , roomno , roomtype ,statusroom, roomrate , discountstatus , discounttype , discountrate , balance );   
}

 // function of add new reservation form into the array
void addreservationform(int id , string name , string address , double contact , string email , string gender , int noC , int noA , string indate , string outdate ,int days , int roomno , string roomtype , string statusroom,int roomrate,  string discountstatus , string discounttype , int discountrate , double rbalance )
{
    RGid[reservation_count] = id ;// transaction check in guest id
    Rname[reservation_count] = name;// NAME
    Raddres[reservation_count] = address;// ADREESS OF GUEST
    Rcontact[reservation_count] = contact;// CONTACT OF THE GUEST
    Remail[reservation_count] = email;// EMAIL OF THE GUEST
    Rgender[reservation_count] = gender;// GENDER OF THE GUEST
    Ra[reservation_count] = noA;// no of adult
    Rc[reservation_count] = noC;// no of children
    Ridate[reservation_count] = indate;// CHECK IN DATE
    Rodate[reservation_count] = outdate;// reservation form mai check out date
    Rdays[reservation_count] = days;// no of day
    RroomNO[reservation_count] = roomno;// ROOM NO
    RTroom[reservation_count] = roomtype;// ROOM TYPE
    RSroom[reservation_count] = statusroom;// STATUS OF THE ROOM
    RroomRate[reservation_count] = roomrate;// RATE OF ROOM
    RSdiscount[reservation_count] = discountstatus;// DISCOUNT STATUS
    RTdiscount[reservation_count] = discounttype;// DISCOUNT TYPE
    RdiscountRate[reservation_count] = discountrate;// DISCOUNT RATE
    Rbalance[reservation_count] = rbalance ; 
    reservation_count ++;
}
 
 // function of change password
void changepassword()
{
    string changename, changepass;
                 cout<<"enter the username";
                  cin>>changename;
                  cout<<"enter the pass";
                  cin>>changepass;
              for (int i = 0 ; i<usercount ; i++)
              {
                  if ( changename == username[i] && changepass == password[i])
                  {
                  cout<<"enter the new password";
                  string newpass;
                  cin>>newpass;
                  password[i] = newpass;
                  break;
                  }
                  else 
                  {
                      cout<<"user not found";
                  }
              }
}



// function of clear screen
 void clearScreen()
 {
     cout<<"press any key to clear screen";
     getch();
     system ("CLS");
 }


 // function of send alert message to the the user
 void sendmessage()
     {
         cout<<"enter the user name which you want to send message";
         string name;
         cin>>name;
         int sendcount=0;
         for (int i =0 ; i<usercount ; i++)
         {
             if (name == username[i])
             {
                 cout<<"enter the message yo want to send to user"<<endl;
                 cin.ignore();
                 getline(cin,line[i]);
                 break;

             }
             else 
             {
                 sendcount++;
             }
         }
         if (sendcount == usercount)
         {
             cout<<"the user doest not exists in the arrays";
         }
     }

     // function of recieve alert message from the mannager
     void mannagerAlert()
     {
      cout<<" main menue of program <<  admin alerts "<<endl;
      for (int t=0 ; t<usercount ; t++)
       {
          if (username[index] == username[t])
          {
              cout<<line[t]<<endl;
              break;
          }
       }
     }
 // ----------------------------------------------------end function implementation