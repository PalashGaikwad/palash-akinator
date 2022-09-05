//beginning of code
#include <iostream>
#include <string.h>

int main (){

// start of variable

std::string charreal;
std::string bald;
std::string superhero;
std::string girl;
std::string psychicgirl;
std::string rich;
std::string actor;
std::string director;
std::string darkstory;
std::string asian;
std::string robot;
std::string award;
std::string villain;
std::string inventor;
std::string fly;
std::string dark;
std::string mom;
std::string disorder;
std::string sister;
std::string dad;
std::string rich2;


// start of main question
std::cout<<"DEVELOPED WITH LOVE BY PALASH GAIKWAD! \n \n";
std::cout<<"Welcome to Palash Gaikwad's Akinator! \n \n";
std::cout<< "Rules Of The Game: \n";
std::cout<< "1) Answer In (yes or no). \n";
std::cout<< "2) The Game Is Caps Sensative, Hence Please Enter Answers In Small Caps. \n";
std::cout<< "3) Select Person/Character From The Following List. \n \n";

std::cout<<" Christopher Nolan \n";
std::cout<<" Darkseid \n";
std::cout<<" Ben Affleck \n";
std::cout<<" Tony Stark \n";
std::cout<<" Elizabeth Olsen \n";
std::cout<<" Shang chi, \n";
std::cout<<" Shah Rukh Khan \n";
std::cout<<" MoonKnight \n";
std::cout<<" Jeff Bezos \n";
std::cout<<" Batman \n";
std::cout<<" Elon Musk \n \n";


std::cout<<" Is Your Character Real? Answer In (yes or no) \n \n";
std::cout<<"Enter Here: ";
std::cin>> charreal;

//start of main if

if (charreal == "yes") {
std::cout<<" is your character bald  (yes no) \n \n";
std::cout<<"Enter Here: ";
std::cin>> bald;

if (bald == "yes")  {
std::cout<<" ***************** Its Jeff Bezos *************** \n \n"; //end of jeff bezos
}
else if (bald == "no") {
std::cout<<" is your character a girl? \n \n"; std::cout<<"Enter Here: ";
std::cin>> girl;

// beginning of elizabeth

if (girl == "yes") {
std::cout<<" does your character act as a girl with psychic powers in a superhero movie? \n \n";
std::cout<<"Enter Here: "; std::cin>> psychicgirl;
 if (psychicgirl == "yes") {
 std::cout<<" ***************** Elizabeth Olsen *****************\n";     //end of elizabeth
 } 
else{
std::cout<< " Dear User, Please Enter The Answer Related To The Person Your Want Us To Guess\n \n";
} 
} // beginning of elon
 else if (girl == "no") {
 std::cout<< " is your character a billionaire? \n \n";
 std::cout<<"Enter Here: "; std::cin>> rich;
 
 if (rich == "yes") {
 std::cout<< " ***************** your character is elon musk *****************\n \n";    // end of elon musk
 }
 
 else if (rich == "no") {
 std::cout<<" is your character a actor \n \n";
 std::cout<<"Enter Here: "; std::cin>> actor;

if (actor == "no")  {                              // create "yes" else command
std::cout<<" is your character a director \n \n";
std::cout<<"Enter Here: "; std::cin>> director; 

if (director == "no") {
std::cout<<" Dear User, Please Enter The Answer Related To The Person Your Want Us To Guess\n \n";
}
else if (director == "yes") {
std::cout<<" Has Your Character Ever Won AN Award? \n \n";     //remember to put quotes in "yes" and "no"  
std::cout<<"Enter Here: "; std::cin>> award;

if (award == "no")  {
std::cout<<" Dear User, Please Enter The Answer Related To The Person Your Want Us To Guessbase \n \n";
}

else if (award == "yes") {
std::cout<<"***************** Your character is christopher nolan *****************\n \n";
}
}
}
else if (actor == "yes")  {
std::cout<<" has your character played a super hero with a dark backstory? \n \n";
std::cout<<"Enter Here: "; std::cin>> darkstory;

if (darkstory == "yes") {
std::cout<<"***************** Your Character Is Ben Affleck *****************\n \n";     //Closed
}
else if (darkstory == "no") {
std::cout<<" is your character asian? \n \n";
std::cout<<"Enter Here: "; std::cin>> asian;

if (asian == "no") {
std::cout<<" Dear User, Please Enter The Answer Related To The Person Your Want Us To Guess.\n \n";  // Closed
}
if (asian == "yes") {
std::cout<<" has your character ever acted as a robot character? \n \n";
std::cout<<"Enter Here: "; std::cin >>robot;
} 
else if (asian == "no") {
std::cout<<" Dear User, Please Enter The Answer Related To The Person Your Want Us To Guess \n \n"; // Closed
}

if (robot == "yes") {
std::cout<<"***************** Your character is SRK *****************\n";
}
 else if (robot == "no") {
 std::cout<<"  Dear User, Please Enter The Answer Related To The Person Your Want Us To Guessb \n \n "; // Closed
 
 }                                 
 }                                 
 }                                 
 }                                 
 }                                 
 }                                 
 }
else if (charreal == "no") {
    std::cout<<" Is your character a superhero? \n \n";
    std::cout<<"Enter Here: "; std::cin>> superhero;

    if (superhero == "no") {
        std::cout<<" is your character a villain? \n \n";
        std::cout<<"Enter Here: "; std::cin>> villain;
    
        if (villain == "yes") {
            std::cout<<"***************** Your Character Is Darkseid *****************\n \n";
        }
        else if (villain == "no") {
            std::cout<<" Dear User, Please Enter The Answer Related To The Person Your Want Us To Guess \n \n";
        }
    }
    else if (superhero == "yes") {
        std::cout<<" is your character rich? \n \n";
        std::cout<<"Enter Here: "; std::cin>> rich2;

        if (rich2 == "yes") {
            std::cout<<" is your character a inventor \n \n"; 
            std::cout<<"Enter Here: "; std::cin>> inventor;

            if (inventor == "yes")  {
                std::cout<<" can your character fly? \n \n";
                std::cout<<"Enter Here: "; std::cin>>fly;
                
                if (fly == "yes")  {
                    std::cout<<"***************** Tony Stark *****************\n \n";
                } else if ( fly == "no") {
                    std::cout<<"Wrong Data Entered \n \n";
                }
             }
             else if (inventor == "no")  {
                std::cout<<" Does your character mostly fight in the dark \n \n";
                std::cout<<"Enter Here: "; std::cin>> dark;

                if (dark == "yes")  {
                 std::cout<<" Your Character Is Batman/Bruce Wayne \n \n";
                } else if (dark == "no") {
                    std::cout<<" Input Right Answer \n \n";
                }
            }

            } else if (rich2 == "no") {
            std::cout<<" Did your character have a abusive mom? \n \n";
            std::cout<<"Enter Here: "; std::cin>> mom;

            if (mom == "yes") {
                std::cout<<" does your character suffer from multiple people disorder? \n \n";
                std::cout<<"Enter Here: "; std::cin >>disorder;

                if (disorder == "yes")  {
                    std::cout<< "***************** Character Is MoonKnight *****************\n \n";
                } else if (disorder == "no") {
                    std::cout<<" not in code \n";
                }
            } else if (mom == "no")  {
                std::cout<<" does your character have a sister? \n \n";
                std::cout<<"Enter Here: "; std::cin>> sister;

                if (sister == "yes") {
                    std::cout<<" does your character have a 1000 year old dad \n \n";
                    std::cout<<"Enter Here: "; std::cin>> dad;

                    if (dad == "yes")  {
                        std::cout<<"***************** Your Characters Shang-Chi ***************** \n \n";
                    }else if ( dad == "no") {
                    std::cout<< " Dear User, Please Enter The Answer Related To The Person Your Want Us To Guess\n \n"; 
                    }
                } else if (sister == "no") {
                  std::cout<<" Dear User, Please Enter The Answer Related To The Person Your Want Us To Guess\n \n";                
                }
            } 
            
        }
      
}
}
}           