#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int roll(){
    srand(rand());
    srand((int)time(0));
    int value = (int) ((rand() % 6) + 1);
    return value;
}

int main () {
   for (int i = 0; i < 1; i++){
       int result = roll();
   cout << "Dice roll result = " << result << endl;
   }
   return 0;
}

/*
int main()
{
srand(time(0));
for (int i = 0; i<10; i++)
{
int dice = (int) (1+rand()%6);
cout << dice << endl;
}
return 0;
}
*/