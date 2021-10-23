#include <time.h>
#include <cctype>

#ifdef _WIN32
  #include <bits/stdc++.h>
  const char limpiar[] = "cls";
  const char color[] = "color a";
#else
  #include <stdlib.h>
  #include <iostream>
  const char limpiar[] = "clear";
  const char color[] = "echo -ne \"\e[1;31m\"";
#endif

using namespace std;

int main()
{ 
    system(color);
    char caracteres[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890";
    int length, rNum, op;
    cout<<"---------------------"<<endl;
    cout<<" GENERATOR PASSWORDS  "<<endl;
    cout<<"---------------------"<<endl;
    cout<<"\n1) Generate Password";
    cout<<"\n2) Exit";
    cout<<"  ?>: "; cin>>op;

if(op==1){
    system(limpiar);
    cout<<"---------------------------------------"<<endl;
    cout<<" Numbers of Characteres for password: "; cin>>length;
    cout<<"---------------------------------------"<<endl;
    cout<<"---------------------------------------"<<endl;
    if(length > 61){
            system(limpiar);
        cout<<"-----------------------------"<<endl;
        cout<<" Only 60 Characteres maximum"<<endl;
        cout<<"-----------------------------"<<endl;
        return main();
    }
    else if(length < 61){
    system(limpiar);
    cout<<"-----------------"<<endl;
    cout<<"    PASSWORD     "<<endl;
    cout<<"-----------------"<<endl;
    cout<<"        |"<<endl;
    cout<<"        V"<<endl;
    srand(time(NULL));
    cout<<"------------------------"<<endl;
    for(int i=0;i<=length-1;i++){
        rNum = rand() % 61 ;
        cout<<caracteres[rNum];
    }
            cout<<"\n";
    cout<<"------------------------"<<endl;
    cin.get();
     return main();
    }
}
else if(op==2){
    system(color);
    system(limpiar);
    cin.get();
   cout<<"________$$$$$$$$$$________";      cout<<"Contact the developer?"<<endl;
   cout<<"_____d$$$$$$$$$$$$$b______";      cout<<"         |"<<endl;
   cout<<"_____$$$$$$$$$$$$$$$$_____";      cout<<"         |"<<endl;
   cout<<"____4$$$$$$$$$$$$$$$$F____";      cout<<"         V"<<endl;
   cout<<"____4$$$$$$$$$$$$$$$$F____";      cout<<"https://t.me/UserM01000   (copy & paste)"<<endl;
   cout<<"____$$$$___$$$$___$$$$____"<<endl;
   cout<<"_____$$F___4$$F___4$$_____"<<endl;
   cout<<"_____$$F___4$$F___4$______"<<endl;
   cout<<"______$$___$$$$___$P______"<<endl;
   cout<<"_______4$$$$$^$$$$$_______"<<endl;
   cout<<"_______$$$$F__4$$$$_______"<<endl;
   cout<<"________$$$$ee$$$$________"<<endl;
   cout<<"_________$$$$$$$$_________"<<endl;
   cout<<"_________$_____.$_________"<<endl;
   cout<<"_________$$$$$$$$_________"<<endl;
   cout<<"__________^$$$$___________"<<endl;
   cout<<"_4$$c_______""_______.$$r_"<<endl;
   cout<<"_^$$$b______________e$$$r_"<<endl;
   cout<<"_d$$$$$e__________z$$$$$b_"<<endl;
   cout<<"4$$$*$$$$$c____.$$$$$*$$$r"<<endl;
   cout<<"________*$$$be$$$*________"<<endl;
   cout<<"__________$$$$$$__________"<<endl;
   cout<<"________.d$$P$$$b_________"<<endl;
   cout<<"_______d$$P____$$$b_______"<<endl;
   cout<<"___.ed$$$$______$$$$be.___"<<endl;
   cout<<"_$$$$$$P__________*$$$$$$_"<<endl;
   cout<<"4$$$$$P____________$$$$$$4"<<endl;
   cout<<"__*$$$$____________$$$$*___"<<endl;
   cout<<"Created 0=|========> M01000"<<endl;
   cout<<"___________________________"<<endl;
   cin.get();
   return 0;
}
else
{
system(limpiar);
cout<<"-----------------"<<endl;
cout<<" Invalid options "<<endl;
cout<<"-----------------"<<endl;
cout<<"\n";
return main();
}

}

