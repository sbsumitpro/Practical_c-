#include<iostream>
using namespace std;

bool reachDestination(int sx, int sy, int dx, int dy) {
     cout<< sx<< " "<< sy<<endl;
    if(sx == dx && sy == dy){
        return true;
    }
    if(sx>dx || sy>dy){
        return false;
    }
    bool  ans = reachDestination(sx+sy,sy,dx,dy) || reachDestination(sx,sy+sx,dx,dy);
    cout<< sx+1<< " "<< sy+1<<" "<< ans<<endl;
    return ans;
}

int main()
{   
    cout << boolalpha;
    cout << reachDestination(1,1,2,2)<<endl;
    return 0;
}