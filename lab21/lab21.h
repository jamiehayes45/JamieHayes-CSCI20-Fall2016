#ifndef LAB21_H
#define LAB21_H

int randomNumber(){
   srand(time(0));
   
   return (rand()% 10 + 1);
}
#endif 