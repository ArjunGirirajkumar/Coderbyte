#include <iostream>
using namespace std;

void KaprekarsConstant(int num) { 

    int u, tn, h, t ;
    u = num % 10 ;
    tn = (num % 100) / 10 ;
    h = (num / 100) % 10 ;
    t = num / 1000 ;
    int rank[3] ;
    if (u >= tn)
    {
        if (u >= h)
        {
            if (u >= t)
            {
                rank[3] = u ;
            }
            rank[2] = u ;
        }
        rank[1] = u ;
    }
    else
    {
        rank[0] = u ;
    }
    cout << rank[3] ;
}

int main() { 
  
  // keep this function call here
  KaprekarsConstant(gets(stdin));
  return 0;
    
} 
